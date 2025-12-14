/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108318
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
    var_11 *= min((8388607U), (((/* implicit */unsigned int) (short)11145)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) - (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_2)))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) 8388592U);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) && (((_Bool) ((long long int) arr_5 [i_1] [i_1] [i_1])))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (min((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14988))))), ((-(var_8))))) : (((/* implicit */unsigned long long int) (-(arr_4 [i_2]))))));
                    var_14 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                }
                for (short i_3 = 3; i_3 < 20; i_3 += 2) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (var_5)));
                    var_17 = (-(var_8));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((unsigned long long int) 4286578688U))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) max(((~(arr_13 [i_0] [i_3 + 2] [i_3 + 1] [i_4] [i_3 + 2] [i_4]))), ((~(arr_13 [i_0] [i_3 - 3] [i_3 + 3] [i_3 - 3] [i_3] [i_3])))));
                        /* LoopSeq 3 */
                        for (int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_5 + 1] [i_3] [i_3] [i_3] [i_0]))));
                            arr_21 [i_3] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) : (4286578691U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1209592866)) && (((/* implicit */_Bool) 8388604U)))))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5 + 1] [i_5 + 1] [i_3 + 1]))) <= ((-9223372036854775807LL - 1LL)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (max((((/* implicit */unsigned int) arr_18 [i_3])), (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_3 + 1] [i_3] [i_5 + 1])))))));
                            var_19 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_5)))) - (max((((/* implicit */int) var_9)), ((-(((/* implicit */int) (unsigned char)172))))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) 946983146509497470ULL)) || (((/* implicit */_Bool) (-2147483647 - 1)))))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_9))))))), (((unsigned long long int) arr_10 [i_1] [i_3 - 1] [i_1])))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_21 = (unsigned char)0;
                            var_22 |= ((/* implicit */short) arr_11 [i_0] [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_1]))));
                            var_24 = ((/* implicit */int) var_6);
                        }
                        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_4))));
                            var_26 = ((/* implicit */signed char) arr_22 [i_3]);
                        }
                        arr_29 [i_0] [i_1] [i_0] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)83))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_1] [i_1])), (var_4))))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 - 2] [i_3 + 2])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_3 - 1])) : (((/* implicit */int) arr_10 [i_1] [i_3] [i_3 + 2])))))));
                        var_27 = ((/* implicit */long long int) arr_10 [i_3] [i_1] [i_1]);
                        var_28 -= ((/* implicit */int) ((unsigned short) var_4));
                    }
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_19 [i_3 + 2] [i_1] [i_1] [i_3] [i_1]), (arr_19 [i_3 - 2] [i_1] [i_3 - 2] [i_3 - 2] [i_3 - 2]))))) - (4504209304792022897LL))))));
                        var_30 = ((/* implicit */signed char) arr_2 [i_1]);
                        arr_34 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((17499760927200054145ULL) > (arr_11 [i_0] [i_8] [i_0]))))) : (((long long int) (unsigned char)0))))));
                    }
                }
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (var_1)))) ? (((((/* implicit */_Bool) arr_22 [i_1])) ? ((~(((/* implicit */int) (_Bool)0)))) : (-1))) : ((~(((/* implicit */int) (unsigned char)247))))));
            }
        } 
    } 
}
