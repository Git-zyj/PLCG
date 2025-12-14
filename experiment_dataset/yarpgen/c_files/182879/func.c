/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182879
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_10))));
    var_15 *= ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) max((var_0), (var_4)))) : (min((var_7), (var_7))))) / (min((((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_10))))))));
    var_16 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (unsigned char)92)) | (1177574514)))))) ? (((/* implicit */unsigned long long int) (-(((var_5) + (((/* implicit */int) (signed char)84))))))) : (max((((/* implicit */unsigned long long int) ((short) var_13))), (((((/* implicit */_Bool) 1004455374)) ? (11140638061228587488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = ((unsigned long long int) 1177574514);
                                var_18 *= ((/* implicit */unsigned char) arr_5 [i_1] [(unsigned short)6] [(unsigned short)6] [i_1]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_1 [i_5])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            var_20 = arr_6 [i_0] [i_7 + 1] [i_5] [i_6];
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) var_9)))))) ? (((((/* implicit */int) arr_22 [i_6] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_7 - 1])) | (((4194303) / (((/* implicit */int) arr_2 [i_0] [i_5])))))) : (((/* implicit */int) arr_22 [i_6] [i_1] [i_1] [20ULL] [i_1] [i_1] [i_1]))));
                            var_22 = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (signed char i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) + (2147483647))) << (((((-1177574514) + (1177574538))) - (24)))))) ? (((/* implicit */long long int) -1177574514)) : (1761846074841149493LL)))));
                            var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_11 [i_5] [i_8 + 1] [(unsigned char)3] [i_8] [i_8 + 1] [i_8 - 1])) ? (arr_11 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_11 [i_1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (5992968570920559336LL) : (arr_20 [i_0] [i_1] [i_5])))))) ? (arr_26 [i_1] [i_1] [i_6] [11U] [11U] [i_1] [i_6]) : (((/* implicit */unsigned int) ((int) var_0)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((short) arr_4 [i_5]));
                        var_27 &= ((/* implicit */signed char) var_0);
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (arr_20 [i_0] [i_5] [i_5]) : (((/* implicit */long long int) var_5))))) ? (arr_26 [i_0] [i_1] [i_0] [i_9] [i_0] [12U] [i_1]) : (((/* implicit */unsigned int) arr_27 [i_0]))));
                        var_29 = ((/* implicit */short) ((long long int) arr_18 [i_9]));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~((((_Bool)1) ? (arr_9 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)8] [i_1] [i_1] [i_9]))))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_31 = ((((/* implicit */int) ((short) arr_2 [i_0] [i_5]))) / (((/* implicit */int) arr_2 [i_0] [i_10])));
                        var_32 = ((/* implicit */unsigned int) (short)-16809);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) max((-1761846074841149493LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11] [i_1] [i_0]))) : (((((/* implicit */_Bool) 1645884583722802072LL)) ? (arr_31 [i_0] [i_0] [i_5] [i_11] [13ULL]) : (((/* implicit */unsigned int) var_4)))))))));
                                var_34 = ((/* implicit */unsigned char) ((unsigned long long int) 1177574514));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned short) ((int) ((signed char) arr_24 [i_0] [i_0] [10] [i_1] [i_5] [i_5])));
                    var_36 = ((/* implicit */long long int) (short)-78);
                }
            }
        } 
    } 
}
