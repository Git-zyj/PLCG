/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101570
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_11))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = (signed char)-102;
        var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [(unsigned char)4]), (arr_0 [(short)12])))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) || (((/* implicit */_Bool) arr_0 [(signed char)10]))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_16 = (-(((/* implicit */int) arr_4 [i_1 - 1])));
        var_17 ^= ((/* implicit */long long int) (~(((/* implicit */int) (short)14124))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) (short)-14131);
            arr_8 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1 + 2])) ? (((/* implicit */int) arr_7 [i_2] [i_2] [(_Bool)1])) : (((/* implicit */int) var_0))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_6 [i_1]))));
            var_20 *= ((/* implicit */short) ((arr_3 [i_3] [i_1]) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_3] [i_1])) : (((/* implicit */int) (signed char)-73))))));
            arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 + 1] [(signed char)4] [i_1 + 2])) : (((/* implicit */int) var_9))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(short)12] [10U] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_4] [i_4])), (arr_11 [i_4]))))) : (max((((-1953593709006625932LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))))), ((~(arr_1 [6U])))))));
        var_22 = ((/* implicit */short) var_5);
        arr_16 [i_4] [i_4] = ((/* implicit */signed char) max((((arr_3 [i_4] [i_4]) ? (((/* implicit */int) (short)2468)) : (((/* implicit */int) ((((/* implicit */long long int) arr_14 [i_4])) != (-14LL)))))), (((/* implicit */int) max(((signed char)-64), ((signed char)-31))))));
    }
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 3) 
    {
        arr_19 [i_5] = ((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5 + 2]);
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                for (signed char i_8 = 2; i_8 < 14; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */int) arr_7 [i_7] [i_6] [i_7])) : (((/* implicit */int) var_11))))), ((~((~(arr_9 [i_6])))))));
                        arr_26 [i_6] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)24)) : (min((((/* implicit */int) arr_24 [i_6] [i_6])), (((((/* implicit */int) arr_4 [i_5])) >> (((((/* implicit */int) arr_10 [i_5] [i_5] [i_7])) - (27)))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [6LL] [6LL])) ? (-8930408450983557608LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [0ULL] [i_5 + 1]))))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_7))));
    }
    var_26 = ((/* implicit */_Bool) var_5);
}
