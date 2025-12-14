/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111421
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */unsigned int) var_12))))), ((-(var_4))))) + (((/* implicit */unsigned long long int) var_11)))))));
    var_14 ^= ((/* implicit */unsigned char) var_1);
    var_15 = ((/* implicit */signed char) (~(var_12)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] |= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_2 [i_0]))))));
        var_16 = ((/* implicit */long long int) (-(var_6)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) 3710489143413860682LL);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [(unsigned char)14]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 2]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2 + 1] [i_3])))))));
                            var_19 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_11 [(unsigned short)13] [i_1]))))));
                            var_20 = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_2 + 2]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_22 [i_5] [i_2 + 2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_5)))))));
                    /* LoopSeq 4 */
                    for (short i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        var_21 += ((/* implicit */unsigned short) (-(var_1)));
                        var_22 = ((/* implicit */signed char) var_4);
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)40)) || (((/* implicit */_Bool) arr_6 [12U]))))) : (var_1)));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_28 [i_0] [i_1] [(signed char)12] [i_0] [i_1] [i_1])) & (((/* implicit */int) var_0)))))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((var_3) >> (((var_10) - (4220222682799028392ULL))))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_7] [i_5])) ? (var_3) : (var_3))))))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((var_11) & (arr_27 [i_7] [i_5] [i_0] [13] [i_1] [i_0])));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [11] [11ULL] [(short)16] [(short)16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_5] [i_2 - 1] [(unsigned short)9]))) : (arr_12 [i_0] [i_1] [i_2] [(unsigned short)11])));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) (_Bool)1))))) : (arr_8 [i_8])));
                        var_27 = ((/* implicit */_Bool) (-(var_4)));
                        var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_2 + 2] [i_1]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */int) ((var_0) || (((/* implicit */_Bool) (unsigned char)123))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                        var_30 = ((/* implicit */int) ((arr_37 [16] [i_1] [i_2 + 1] [16]) * (((/* implicit */long long int) ((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8850)))))))));
                        arr_39 [i_0] [i_0] [i_2 - 1] [i_5] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_10 [i_1] [i_5] [(signed char)15])))) ? (((((/* implicit */int) arr_14 [i_9] [i_5] [i_2] [i_1])) & (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) var_12);
                        var_32 = ((/* implicit */_Bool) var_5);
                        arr_42 [i_10] [i_5] [2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? ((~(((/* implicit */int) arr_30 [i_0] [(short)3] [(short)3] [i_5] [i_10])))) : ((-(var_1)))));
                    }
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)69)) || (((/* implicit */_Bool) var_12))))))));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 1])) || (((/* implicit */_Bool) var_10))));
                    }
                    arr_47 [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2]))));
                }
                for (unsigned char i_12 = 1; i_12 < 16; i_12 += 3) 
                {
                    var_35 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                    arr_50 [2LL] [2LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((var_11) & (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) var_8))));
                    arr_51 [(unsigned char)10] [(unsigned char)10] [i_1] [(unsigned short)16] [i_12 + 1] = ((/* implicit */_Bool) ((arr_8 [i_2]) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24953))) ^ (var_6)))));
                    var_36 -= ((/* implicit */int) (unsigned char)107);
                }
                var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1]))));
            }
        }
        for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            arr_55 [i_13] [i_13] = ((/* implicit */unsigned char) ((((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))))) % (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))))), ((~(((/* implicit */int) var_0)))))))));
            var_38 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1761335053)))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), (((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24953))) : (min((var_10), (((/* implicit */unsigned long long int) var_2))))))));
            arr_56 [i_0] [i_13] = ((/* implicit */long long int) var_9);
            var_39 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_11))) % (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            arr_57 [i_13] [i_13] = ((/* implicit */signed char) (~(min((((((/* implicit */unsigned long long int) var_8)) | (var_4))), (((((/* implicit */_Bool) (signed char)70)) ? (var_9) : (((/* implicit */unsigned long long int) 1134012887757631841LL))))))));
        }
    }
    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        var_40 = ((/* implicit */unsigned char) ((arr_58 [i_14]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        var_41 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((-(((/* implicit */int) var_5)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_14] [i_14])))))))) % ((-(((((/* implicit */_Bool) arr_60 [i_14])) ? (((/* implicit */unsigned int) var_12)) : (var_8)))))));
    }
    var_42 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) var_5))))))))));
}
