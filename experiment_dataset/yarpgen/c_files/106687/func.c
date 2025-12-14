/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106687
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2196749462477655869ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned long long int) (unsigned char)120)), (var_14)))))) || (((/* implicit */_Bool) (+(var_15))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) ((unsigned long long int) var_19));
                var_22 = ((/* implicit */long long int) (unsigned char)255);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = max(((unsigned short)0), (var_9));
                            arr_12 [i_0] [i_1] [i_2] &= ((/* implicit */long long int) max((min((arr_1 [5ULL] [i_0]), (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    arr_17 [i_0 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [(unsigned char)0] [i_1] [i_4])) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (((3ULL) >> (((/* implicit */int) var_2))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_14 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0])))))) : ((-(var_14)))))));
                    var_24 *= ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_0 - 2] [i_0 - 1])), (-3841158699090347929LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_1 [i_4] [(unsigned char)9]))), (3841158699090347928LL)))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : ((+(var_1))))));
                    arr_18 [i_0 - 2] [(unsigned char)3] = ((/* implicit */unsigned long long int) var_15);
                }
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) 908042468084848629ULL);
                    var_26 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)1)))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)254)))));
                    arr_23 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((var_14) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)165)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) >> (((((/* implicit */int) arr_19 [i_0] [0ULL])) - (42342)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) * (9223372036854775807LL))) : (((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515))))))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)230))))) ? ((-(arr_1 [9ULL] [0ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12))))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) var_7);
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_9))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 1) 
                        {
                            var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) arr_26 [i_0] [i_1] [i_6] [i_9 - 1])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))));
                            arr_35 [i_9] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_13 [i_1] [i_6] [i_9 + 1])) | (((/* implicit */int) arr_19 [i_9] [i_1]))))));
                            arr_36 [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_31 [i_9]))));
                            arr_37 [i_9] [i_1] [(unsigned short)1] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_0 + 1]);
                            arr_38 [i_9] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (8594674650441370388ULL)));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) var_0);
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_11] [i_9 + 2] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)199)) << (((/* implicit */int) (unsigned short)18)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                        {
                            var_35 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 - 1] [i_9 + 2]))) >= (var_14)));
                            var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30126)) ? (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_33 [i_0 - 1] [1LL] [i_0] [i_0 - 1] [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)1)))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (arr_30 [i_9] [1ULL] [(unsigned char)2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14037))))))));
                            arr_46 [i_0] [i_9] [i_6] [i_6] [(unsigned short)9] [i_13] = (+(var_14));
                            var_38 = ((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_9 + 2])) ? (((/* implicit */unsigned long long int) var_18)) : (arr_42 [i_0 + 1] [i_1] [i_9] [i_9 + 1] [(unsigned char)4]));
                            arr_47 [i_9] [(unsigned short)1] [i_6] [i_9] [i_13] = (unsigned char)92;
                        }
                    }
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17193717657274716376ULL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65503))))) : (((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) 3841158699090347917LL))))));
                }
            }
        } 
    } 
}
