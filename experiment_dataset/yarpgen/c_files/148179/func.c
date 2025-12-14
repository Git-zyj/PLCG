/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148179
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
    var_14 = ((/* implicit */_Bool) ((int) ((unsigned short) (~(((/* implicit */int) var_0))))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_2 [i_0]);
                var_17 = ((/* implicit */long long int) 25);
                arr_4 [i_0] [i_0] [2U] |= ((/* implicit */_Bool) var_12);
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-1123946700195523277LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)-24))))))))) ? (((var_6) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) 1123946700195523280LL)) ? (((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [(unsigned short)6])))) : (((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) 17912708639407045964ULL);
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_6)))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 3; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
                        arr_15 [i_2] [i_2] [i_3] [(short)1] [i_5 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [12LL]))) <= (4294967295U))) ? (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_5 + 2])) : (((/* implicit */int) (unsigned char)253))))) : (534035434302505652ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((((/* implicit */_Bool) arr_6 [i_2])) ? (17912708639407045974ULL) : (17912708639407045964ULL))) * (((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */int) arr_12 [2ULL] [i_3] [2ULL] [i_3] [i_3 - 2])))))))));
                        arr_16 [i_2] [7LL] [i_4 - 2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) (~(arr_10 [i_2] [i_2])));
                    }
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        arr_19 [i_2] [i_2] [i_6] = ((/* implicit */long long int) var_2);
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19956)))))) ? (((((/* implicit */int) (unsigned short)23988)) + (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))) : (((/* implicit */int) ((_Bool) var_13))))));
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (((((/* implicit */_Bool) arr_22 [(short)8] [(short)8] [i_4] [i_7] [i_7])) ? (((((/* implicit */_Bool) -1050529120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13975667566178643556ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_2] [i_3] [2U] [i_6 - 2] [i_7] [i_7])))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_3)))))))) ? (1222004246U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-62))))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_4 - 1] [i_3] [i_3] [i_2 + 2]))) < (arr_7 [i_3 - 1]))))))))))));
                            var_26 |= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_24 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1] [(unsigned char)2] [10U])) ^ (((/* implicit */int) arr_24 [i_4] [i_4 + 1] [i_4 - 1] [(signed char)12] [i_4] [i_4]))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : ((~(-8668452989499886127LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17471969258053974605ULL)) ? (((((/* implicit */_Bool) 2097151)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) ((unsigned int) arr_0 [i_2 + 1]))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_3))) : (4471076507530908059ULL))))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_11))));
                            arr_28 [i_2] [(short)14] [i_2] [i_6] [i_9] = ((/* implicit */signed char) arr_20 [i_2] [i_2] [i_4] [i_6] [(unsigned char)5] [i_2 + 1] [i_4 + 1]);
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) arr_14 [i_2 + 2] [i_2])))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            arr_31 [i_2] [(unsigned short)16] [i_4] [i_6 + 1] [i_10] [(unsigned short)16] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_4] [i_10])))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_9 [i_2] [i_3 + 1] [i_3 - 2]))))) ? (((((/* implicit */_Bool) ((unsigned char) (short)19939))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (65535U))))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_30 ^= var_5;
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_3 [i_4] [i_4]))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) -931925659);
                            var_33 |= ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-3355360773472449618LL)))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_12 = 1; i_12 < 14; i_12 += 1) 
                        {
                            arr_39 [i_2] [i_2] [i_2] [12U] [i_6] [i_12 + 1] = ((/* implicit */unsigned int) ((int) arr_9 [i_4 - 2] [i_4 + 1] [i_4 - 1]));
                            var_34 = ((/* implicit */_Bool) var_8);
                        }
                        var_35 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((signed char) var_1)))))) % ((-(((((/* implicit */unsigned long long int) 1123946700195523276LL)) * (534035434302505652ULL)))))));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) var_11);
    }
    for (short i_13 = 1; i_13 < 13; i_13 += 3) 
    {
        var_37 = ((/* implicit */signed char) var_13);
        var_38 ^= ((/* implicit */signed char) arr_13 [i_13] [i_13 + 1] [2]);
        /* LoopSeq 2 */
        for (unsigned int i_14 = 2; i_14 < 11; i_14 += 3) 
        {
            arr_46 [i_13] [i_13] [i_13] = ((/* implicit */short) var_8);
            arr_47 [i_13] [1U] = ((/* implicit */unsigned int) (-(((long long int) ((13975667566178643552ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_14] [i_13]))))))));
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13975667566178643552ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_6 [i_14 + 2])) ? (arr_6 [i_13 + 1]) : (arr_6 [i_13 - 1]))) : (((/* implicit */int) arr_3 [i_13] [(short)13]))));
            arr_48 [i_13] [i_13] [i_14] = ((/* implicit */short) var_12);
        }
        for (unsigned char i_15 = 2; i_15 < 12; i_15 += 3) 
        {
            arr_51 [i_13] [i_15] = ((/* implicit */unsigned long long int) (unsigned char)235);
            arr_52 [(signed char)12] |= ((/* implicit */unsigned short) 4294967290U);
        }
        arr_53 [(short)9] [i_13] = min((((arr_18 [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 1]) ? (((13975667566178643550ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_13] [8LL]))) : (13975667566178643552ULL))))), (((/* implicit */unsigned long long int) 66036882U)));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_56 [i_16] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_4))) * (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-7587695618161896408LL)))))));
        var_40 = ((/* implicit */unsigned int) var_8);
        var_41 = ((/* implicit */_Bool) arr_12 [i_16] [i_16] [i_16] [(unsigned short)15] [i_16]);
    }
}
