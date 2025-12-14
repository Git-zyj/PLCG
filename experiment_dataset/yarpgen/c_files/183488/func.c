/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183488
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
    var_19 = ((/* implicit */unsigned int) ((long long int) var_11));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) max((arr_4 [i_0 - 1] [i_0 - 1] [(short)8]), (((/* implicit */unsigned long long int) arr_0 [i_1])))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))))));
                    var_21 = ((/* implicit */_Bool) ((var_5) * (arr_3 [i_2])));
                }
                var_22 = var_4;
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (min((((/* implicit */long long int) (_Bool)1)), (8220164026986859919LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [(_Bool)1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_3] [(short)8] [i_5] [i_0 - 1])) ? (arr_14 [i_0] [i_1 + 1] [i_3] [i_4] [(_Bool)1] [i_0 - 1]) : (arr_14 [i_0] [i_1 + 1] [i_3] [i_1 + 1] [i_5] [i_0 - 1])));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)8] [i_1 + 1]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_5)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (_Bool)1)))))));
                    arr_15 [i_0] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) (short)-28692);
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            arr_22 [i_6] [i_0] [i_6] [i_7] [(unsigned char)0] [(unsigned char)0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) var_15))))));
                            var_28 ^= ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_0 - 1] [i_0 - 1] [i_6]));
                            arr_23 [i_0] [i_1] [i_0] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [(unsigned char)0] [i_1] [i_1] [i_7])) + (((/* implicit */int) var_13))))), ((-(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_3)))))), (((/* implicit */int) var_9))));
    var_30 = ((/* implicit */_Bool) var_3);
}
