/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161697
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) : (arr_1 [i_1])));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) arr_7 [i_0] [i_2 - 1] [i_0] [i_3] [i_3])));
                            var_14 += ((/* implicit */_Bool) -7268786020127732930LL);
                        }
                    } 
                } 
                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_1] [i_0]))) ? (((((/* implicit */_Bool) -7268786020127732930LL)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [12LL] [i_1] [13LL])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)25))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_4 - 1] [i_4] [i_4 - 1] [i_4]))))) ? (((/* implicit */int) ((signed char) 7268786020127732909LL))) : (-15)));
        arr_13 [i_4] = ((((/* implicit */_Bool) ((signed char) arr_12 [i_4 - 1]))) ? (((int) (-(((/* implicit */int) arr_4 [i_4] [i_4]))))) : (((/* implicit */int) (unsigned short)16550)));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    arr_18 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_4] [i_4 - 1] [i_6] [i_6]))));
                    /* LoopSeq 2 */
                    for (short i_7 = 3; i_7 < 11; i_7 += 4) 
                    {
                        var_17 *= ((/* implicit */signed char) (short)32754);
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_18 = arr_3 [i_8] [i_8] [i_6];
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_9 [i_4 - 1] [i_4 + 1] [i_5] [i_6])) : (((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1] [i_5] [i_6]))))) ? ((+(((/* implicit */int) (unsigned short)16550)))) : (((/* implicit */int) ((unsigned char) arr_9 [i_4 - 1] [i_4 + 1] [i_7] [i_7])))));
                            arr_24 [i_4] [i_5] [i_4] = ((long long int) ((unsigned int) ((unsigned int) arr_3 [i_4] [i_4] [i_4])));
                        }
                        for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_20 |= ((((/* implicit */_Bool) arr_8 [i_4] [i_4 + 1] [i_9] [i_9] [i_9])) ? (arr_8 [i_4] [i_4 - 1] [i_7] [i_7 - 1] [i_9]) : (arr_8 [i_4] [i_4 - 1] [(signed char)3] [i_7] [i_4 - 1]));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((signed char) arr_16 [i_4] [i_5] [i_6] [i_7 - 1])))) ? (((/* implicit */int) ((short) ((arr_16 [i_4] [i_5] [i_6] [i_9]) ? (arr_1 [i_9]) : (((/* implicit */unsigned long long int) 65535)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6]))) : (arr_12 [i_5])))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_27 [i_7 - 1] [i_9] [i_9] [i_9] [i_9] [i_4]))))));
                            var_22 *= ((/* implicit */unsigned long long int) ((unsigned short) arr_16 [8] [i_5] [i_6] [i_9]));
                        }
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [(unsigned short)13] [i_5] [i_6]))) ? (((((/* implicit */_Bool) arr_23 [(signed char)5] [i_5] [i_6] [i_5] [i_4])) ? (((/* implicit */int) arr_23 [i_4] [i_4] [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_23 [i_4] [i_4] [i_5] [(signed char)9] [i_7 + 1])))) : (((/* implicit */int) ((unsigned short) arr_23 [i_4] [i_4 - 1] [i_5] [i_5] [i_7])))));
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [i_4] [i_4 - 1]) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 1])) : (-300402050)))) ? (((((/* implicit */_Bool) arr_29 [i_4] [i_5] [i_4] [i_10])) ? (arr_29 [i_4] [(_Bool)1] [i_4] [(_Bool)1]) : (arr_29 [i_4 - 1] [i_5] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_29 [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1])) ? (arr_29 [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1]) : (((/* implicit */int) arr_23 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_5]))))));
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4 - 1])) ? (((/* implicit */int) arr_22 [i_4 - 1])) : (((/* implicit */int) arr_22 [i_4 + 1]))))) ? (((((/* implicit */_Bool) arr_22 [i_4 - 1])) ? (((/* implicit */int) arr_22 [i_4 + 1])) : (((/* implicit */int) arr_22 [i_4 + 1])))) : (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (short)28926)) : (((/* implicit */int) (signed char)-48))))));
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((-(-7268786020127732930LL))))))));
                        var_27 = ((/* implicit */unsigned char) arr_2 [i_5] [i_6]);
                        arr_33 [i_4] = ((/* implicit */int) (signed char)23);
                    }
                    var_28 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_32 [i_4])) ? (arr_25 [(unsigned char)5] [i_5] [i_6] [i_6] [i_6] [i_5]) : (arr_25 [i_4] [i_4] [i_4] [i_5] [i_6] [4])))));
                    arr_34 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((unsigned int) arr_21 [i_4] [i_4] [i_4] [i_5] [i_6]))) ? (((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_4] [i_5] [i_6] [12])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_21 [i_4] [i_5] [(unsigned char)0] [i_5] [i_6])))) : (((/* implicit */int) arr_21 [i_4 - 1] [i_4] [i_5] [(short)9] [i_6])));
                }
            } 
        } 
    }
    for (unsigned short i_11 = 2; i_11 < 17; i_11 += 2) 
    {
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) 65535))));
        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11])) ? (4518357387517861982LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)47)))))) ? (((((/* implicit */_Bool) arr_36 [i_11])) ? (arr_37 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_36 [i_11])) : (((/* implicit */int) arr_35 [i_11])))))))) ? (((/* implicit */int) arr_35 [i_11 - 1])) : (((((/* implicit */_Bool) arr_36 [i_11 - 1])) ? (((((/* implicit */_Bool) (short)29435)) ? (arr_38 [i_11 - 1]) : (((/* implicit */int) (_Bool)0)))) : (arr_38 [i_11]))));
    }
}
