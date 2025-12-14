/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122272
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((4294967286U) | (((/* implicit */unsigned int) var_14))))));
        var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))));
    }
    for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] |= max((1898169303U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1])) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_15 [i_4 + 1] [i_3] [i_2] [i_1 - 1]) >= (arr_15 [i_1] [i_1] [i_4] [i_5 - 1]))))));
                                arr_19 [i_2] = ((/* implicit */_Bool) ((((var_16) <= (((/* implicit */int) var_13)))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2843))))), (((((/* implicit */_Bool) arr_12 [i_5] [i_1])) ? (arr_9 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) 30064771072LL)))))) : (((/* implicit */unsigned long long int) arr_10 [i_2]))));
                                arr_20 [i_1] [i_2] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1])), (arr_1 [i_1 - 2])))) ? ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (arr_17 [i_5] [i_2] [i_3] [i_2] [i_1]))))) : (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned int) (signed char)113)), (0U)))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_2] = ((/* implicit */signed char) (~(max((3263175457U), (0U)))));
                    arr_22 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) min(((-(var_7))), (((/* implicit */long long int) 2112880714U))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) 465467338)) >= (min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) var_14)) : (arr_15 [i_1] [i_2] [i_3] [i_3])))))));
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_2] [i_3] [i_6] [i_7 + 1] [(short)5] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) -32768LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8136))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)98)) & (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_12)) ? (7521826605729490159LL) : (((/* implicit */long long int) var_18)))))))))));
                                arr_29 [i_6] [i_6] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_1] [i_2] [i_3] [i_6] [i_1 - 2])) && (max((var_11), (arr_28 [i_6] [i_3] [i_6])))))), (arr_26 [i_1] [i_1] [i_1] [i_1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 |= ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2511670450U)) ? (((/* implicit */long long int) 1873998132U)) : (9223372036854775807LL)))) && (((/* implicit */_Bool) ((long long int) var_9))))))) : (var_5));
}
