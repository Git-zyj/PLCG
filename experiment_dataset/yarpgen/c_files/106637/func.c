/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106637
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_0]));
        arr_3 [17] [i_0 + 1] = ((/* implicit */long long int) arr_0 [21LL]);
        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (524774709)))) ? (((/* implicit */int) (short)-2025)) : (((/* implicit */int) ((signed char) var_8)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) (!(arr_7 [i_1 + 2] [i_1 - 1])));
            var_16 = ((/* implicit */unsigned int) 524774711);
            var_17 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [2LL])) ? (((/* implicit */int) var_3)) : (var_1)))) ? (3618802638498476394LL) : (arr_4 [i_1 - 1]))) == (-9223372036854775801LL)));
            arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)37))))) ? (((/* implicit */int) var_3)) : (max((var_12), ((~(-524774711)))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        arr_17 [i_1] [(signed char)8] [(signed char)8] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1]))));
                        var_18 = ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_7 [i_1] [i_1])))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 + 2] [i_1 - 1] [i_5 + 2] [i_5 + 2])) ? (arr_14 [12U] [i_1 + 1] [i_1 + 1] [i_5 + 4] [i_1 + 1]) : (arr_14 [i_1] [i_1 + 2] [i_1 + 1] [i_5 + 3] [i_1 + 2])))), (arr_18 [13LL] [(unsigned char)0])));
            var_20 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((4294967289U) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_1] [i_1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))) <= (((((/* implicit */long long int) arr_14 [11U] [23LL] [i_5] [23LL] [4U])) + (((long long int) arr_9 [i_1] [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        arr_26 [i_1 - 1] [0LL] [i_1 - 1] [0LL] = ((/* implicit */short) ((unsigned int) -1));
                        var_21 -= ((/* implicit */unsigned int) (+(9223372036854775795LL)));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 1676971063))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (var_2)));
    var_24 = ((/* implicit */long long int) var_4);
}
