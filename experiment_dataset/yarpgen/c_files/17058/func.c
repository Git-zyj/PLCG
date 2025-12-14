/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17058
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((int) arr_0 [i_1] [i_0]));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_5 [i_2] [i_2] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_2] [i_2])) : (var_8))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) (((((-(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_2)) - (46376))))))) + (2147483647))) >> (((var_5) - (1214475211U)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_2])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        arr_22 [i_6] [i_5] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (short)-29234)))));
                        var_12 = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1] [i_5] [i_6] [i_6]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            arr_30 [i_0] [i_0] [i_5] [i_5] [i_7] [i_7] [i_8] = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_8] [i_7] [i_1]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_33 [(unsigned char)7] [i_9] [i_5] [i_7] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)125))));
                            var_14 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(arr_27 [i_0] [i_0] [i_1] [i_0] [i_9])))) != (arr_10 [i_7])));
                            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((12022587810976509702ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_40 [i_5] [i_7] [i_1] [i_0] [i_10] [i_0] [i_5] = ((/* implicit */_Bool) (~(arr_19 [i_0] [i_0])));
                            var_15 = ((/* implicit */unsigned int) arr_37 [i_0] [i_1] [i_0] [i_7] [i_10] [i_10]);
                        }
                        var_16 = ((/* implicit */short) (unsigned char)110);
                        arr_41 [i_7] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_1]))));
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(-7582124154208643226LL))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_45 [18U] [i_1] [i_5] [i_11] [i_11] = ((/* implicit */long long int) (+(var_5)));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_18 ^= ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned char)131))))));
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_5]))));
                            arr_49 [i_0] [i_1] [i_5] [i_11] [i_11] [i_5] = (+(arr_23 [i_11]));
                        }
                        var_20 = ((/* implicit */unsigned long long int) (~(-730061203)));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            var_21 ^= ((/* implicit */signed char) (unsigned char)125);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_6 [i_1] [i_5] [i_13] [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_14] [i_0] [i_0] [i_13]))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (arr_6 [(unsigned short)5] [i_13] [i_13] [(signed char)4])))));
                        }
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_13])) / (((/* implicit */int) var_7)))))));
                        var_24 = ((/* implicit */long long int) ((((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) == (((/* implicit */unsigned long long int) (+(arr_52 [i_0]))))));
                        arr_56 [i_0] [i_1] [0U] [(signed char)17] [i_13] = ((/* implicit */long long int) arr_43 [i_0] [i_1] [i_5] [i_13]);
                    }
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    arr_59 [16LL] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (short)-7505)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */long long int) ((-730061203) & (((/* implicit */int) arr_38 [i_1])))))))));
                    var_26 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4503599627370495ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0)))) ? (((/* implicit */int) arr_38 [i_0])) : (((arr_43 [i_0] [i_0] [i_15] [i_15]) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_15] [i_15] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)179))))))));
                }
                for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    var_27 = ((/* implicit */short) (-(max(((~(((/* implicit */int) (unsigned char)179)))), (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0] [i_16] [i_16]) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_1] [i_1] [(unsigned char)19] [i_16]))))))));
                    arr_64 [i_0] [i_1] [i_0] |= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) && ((!(((/* implicit */_Bool) var_1))))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_0)) : (var_10))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (18446744073709551615ULL))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) (+(((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)125))))));
    var_29 = ((/* implicit */unsigned char) var_3);
}
