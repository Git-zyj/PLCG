/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175560
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_10))))));
            var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_14 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_2] [i_2]))));
            arr_9 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-81))));
            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0])))))))))));
        }
        for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
        {
            arr_12 [i_0] = ((/* implicit */signed char) ((0LL) & (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0])))))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_0 [i_3 + 2])));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_1 [i_3 + 1] [i_3 + 3]) >> (((arr_1 [i_3 + 2] [i_3 - 1]) - (8175292227713267201LL)))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 20)))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+((-(var_4))))))));
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_3]) : (arr_20 [i_6] [i_6] [i_6] [i_6] [i_0] [i_6] [i_0]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_7] [i_7] [i_0])) + (((/* implicit */int) arr_23 [i_7] [i_7] [i_0]))));
            arr_25 [i_0] = ((/* implicit */unsigned long long int) (+(arr_0 [i_7])));
        }
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1)))));
        arr_27 [14LL] &= ((/* implicit */signed char) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [(_Bool)1])))) - (64)))));
    }
    var_21 = ((/* implicit */long long int) var_9);
    var_22 *= ((/* implicit */unsigned char) var_0);
}
