/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156575
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
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (678978697U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((arr_3 [i_1]), (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [(short)10] [i_0 - 1]))) ? (min((var_19), (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) var_14))))))));
                var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)127)), (((((((((/* implicit */_Bool) 678978697U)) ? (((/* implicit */int) (short)-437)) : (((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_0)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) var_9)))));
                    arr_9 [6] [i_0] [i_0] |= ((/* implicit */signed char) (!((_Bool)1)));
                    arr_10 [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)105)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_2] [i_2] [(unsigned char)11] [9U])))));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_1] [i_5])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0] [(_Bool)1])) : (arr_0 [i_1])))))));
                                arr_20 [i_0] [i_0 - 1] [i_1] [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (min((max((((/* implicit */unsigned long long int) arr_17 [i_5 - 2] [i_5] [i_4] [11] [11] [i_0])), (var_16))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (arr_11 [i_1] [i_5]))))))));
                                arr_21 [i_1] [i_4] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_6 [i_5 + 1] [(unsigned char)6] [i_3 + 1] [i_3 - 2])), (max((((/* implicit */unsigned int) (unsigned short)65535)), (678978688U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_1])))))));
                                arr_22 [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 + 1] [i_1] [i_5] [i_5 - 3] = ((/* implicit */long long int) min((((short) arr_18 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3])), (min((((/* implicit */short) arr_4 [i_3 - 2] [i_1] [i_5 - 3])), (arr_1 [i_4 + 4])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
