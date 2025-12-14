/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179334
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_5)), (var_4)))), (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 1])) ? (arr_10 [i_0 - 1] [i_0 + 1]) : (arr_10 [i_0 + 1] [i_0 - 1])))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                arr_14 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((arr_13 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_4] [i_4]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_2) : (var_2)))))))));
                                arr_15 [i_0 - 1] [1] [i_1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_8)))), (min((max((arr_5 [i_2]), (var_0))), (((/* implicit */int) var_3))))));
                            }
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])), (arr_5 [(short)10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_9 [7] [i_0 - 1] [i_0 - 1] [i_1])))));
                arr_17 [(short)10] |= ((/* implicit */unsigned int) (-(((arr_0 [i_0 + 1]) << (((((/* implicit */int) var_3)) - (7)))))));
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (signed char i_7 = 3; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_26 [i_0 - 1] [i_0] [i_1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1])) == (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))), (((unsigned long long int) var_5))));
                                arr_27 [i_1] = ((/* implicit */unsigned short) (-(max((arr_13 [i_1] [i_7 - 3] [i_5] [i_7] [i_0 + 1]), (arr_13 [i_0] [i_7 - 3] [i_0 - 1] [i_6] [i_0 + 1])))));
                                arr_28 [i_0] [i_1] [i_5] [i_6] [i_6] [(unsigned char)6] |= ((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_7 - 3]);
                                arr_29 [i_0] [i_0] [i_6] [i_0] [i_5] [i_6] [i_0] = ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */long long int) ((min((var_2), (((/* implicit */int) var_6)))) % (((/* implicit */int) arr_23 [i_0] [i_1] [i_7 - 1] [(short)0] [i_6]))))) : ((+(arr_25 [i_7 - 1] [i_1] [i_6] [i_6] [i_7]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) var_7);
}
