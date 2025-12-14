/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15564
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
    var_18 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)61927)) : (300260847)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_1 - 1])), (var_4))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) min((((int) arr_6 [i_0])), (((/* implicit */int) arr_6 [i_0]))));
                    var_20 = ((/* implicit */unsigned int) min((-2147483637), (((/* implicit */int) (unsigned short)36563))));
                    arr_11 [i_0] [(unsigned short)2] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))), ((-(var_10)))));
                    arr_12 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)7700))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_21 = ((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_3 + 1] [i_3])) && (((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1 - 1] [i_1])));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_19 [i_0] [i_4] [i_3] [i_4] = ((/* implicit */short) ((int) arr_17 [i_3 - 1] [i_1] [i_1] [i_1 - 1]));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_23 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_7))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_9 [i_0] [i_0] [2U] [i_0])))) : (var_13)));
                            var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_15)))));
                            arr_24 [0U] [i_1 - 1] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_1])) % (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0)))) : (arr_16 [i_0])));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((arr_10 [i_1 - 1] [i_3 + 1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_1 - 1] [i_3 - 1])))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) arr_3 [i_4 + 1] [i_6]);
                            var_25 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                            var_26 = ((/* implicit */int) arr_16 [i_3]);
                        }
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) 2699998270U))));
                    }
                    var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_0]))));
                    var_29 *= ((/* implicit */signed char) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
                                arr_36 [i_0] [i_8] [i_7] [4LL] [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0]))) & (var_4)));
                                arr_37 [i_0] [i_1] [i_1] [i_7] [i_9] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))));
                                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [i_1 - 1])) / (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_38 [(short)9] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [(_Bool)1] [i_0])) + (-2147483630)));
                    arr_39 [i_0] [i_0] [6U] = ((/* implicit */_Bool) arr_21 [i_0] [i_0]);
                    var_32 = ((/* implicit */unsigned char) (-(1594969025U)));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_33 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_0] [i_1 - 1] [i_7 + 1] [i_10] [i_10] [(_Bool)1])) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) var_14)))) : (((/* implicit */int) var_9))));
                        arr_43 [i_0] [(unsigned short)5] [(_Bool)1] [i_0] [(signed char)8] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_26 [i_1 - 1] [i_1 - 1] [i_7 + 1]))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (((+(18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_46 [i_0] [i_1] [i_7] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_40 [i_1] [i_1 - 1] [i_7 + 1] [i_11])) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))));
                    }
                }
                arr_47 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (short)13078)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-2479635496239287347LL))))))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */short) ((unsigned char) (~(arr_30 [i_0] [i_0]))));
                            arr_52 [i_13] [(unsigned short)8] [(unsigned short)8] [i_13] [i_0] [(unsigned short)8] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (signed char)67)))) > (((((/* implicit */_Bool) arr_5 [i_13 - 1])) ? (((/* implicit */int) arr_5 [i_13 - 2])) : (((/* implicit */int) var_12))))));
                            arr_53 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_36 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 291191590)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-99), (((/* implicit */signed char) (_Bool)1))))))))));
}
