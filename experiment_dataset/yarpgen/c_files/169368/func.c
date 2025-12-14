/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169368
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
    var_15 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) 23672025U)))));
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (var_10)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1329072479U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_6 [i_0] [i_1] &= ((/* implicit */long long int) var_1);
                    arr_7 [3LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 6161455877642546459ULL))))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] [i_3] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (-2100304769))))), (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                                var_18 = ((/* implicit */signed char) arr_0 [i_1]);
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    arr_17 [i_1] [i_5] = ((/* implicit */int) var_8);
                    var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_5] [i_0] [6U]))));
                    var_20 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) min(((unsigned char)206), (((/* implicit */unsigned char) (_Bool)1))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (3531609821U)))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_20 [i_0] [4ULL] [i_6] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), ((-(((/* implicit */int) min(((unsigned char)50), (((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_6])))))))));
                    var_21 = max((((long long int) (~(((/* implicit */int) (unsigned char)110))))), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_22 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] [i_1])))))))), (var_7)));
                }
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_0))));
                var_24 = ((/* implicit */signed char) max((var_24), (((signed char) ((((/* implicit */_Bool) 1978296642)) ? (15684891701936479603ULL) : (18446744073709551615ULL))))));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) 1978296642))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) min(((unsigned char)112), (((/* implicit */unsigned char) (_Bool)0))));
}
