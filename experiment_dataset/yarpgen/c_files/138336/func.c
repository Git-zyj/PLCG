/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138336
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
    var_20 = ((/* implicit */int) (+(var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) ((arr_1 [i_0 + 2]) == (((int) (signed char)-56))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [(signed char)14] [i_0 - 2] [i_2])) && (((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 - 2] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_23 |= ((/* implicit */signed char) (-((-(939664199)))));
                                arr_12 [i_4] [i_3 - 2] [i_3 - 1] [i_2] [20LL] [i_0] = ((/* implicit */short) -939664208);
                                arr_13 [(signed char)15] [i_1] [i_1] [(signed char)15] [i_3 - 1] [i_4] [i_4] = ((int) var_16);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_10 [i_2] [(unsigned short)2] [i_0] [i_0]);
                }
                arr_15 [i_0 - 2] [15] [i_1] = ((/* implicit */unsigned short) (signed char)8);
                arr_16 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (signed char i_6 = 3; i_6 < 19; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_5] [i_6] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) ((long long int) 914689958)))))) : (min((arr_1 [i_5]), (((/* implicit */int) ((arr_1 [i_0]) == (843714873)))))));
                                arr_24 [i_0] [i_5] [i_5] [i_6 + 2] [i_6 + 2] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0 - 2] [(short)13] [(short)13]) : (((/* implicit */int) var_19))))) ? (arr_22 [i_0] [(unsigned short)0] [i_5] [i_6 + 3] [i_6] [i_7]) : (((((arr_21 [(short)18] [i_1] [i_5]) + (2147483647))) >> (((arr_9 [i_0] [i_5] [i_6] [i_5]) - (7745817104805271616LL))))))));
                            }
                        } 
                    } 
                } 
                var_24 ^= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((short) arr_7 [i_0] [20] [20]))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2]))));
            }
        } 
    } 
}
