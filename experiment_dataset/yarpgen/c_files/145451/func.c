/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145451
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) var_9);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) arr_4 [i_2] [i_3]);
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned char) (_Bool)1)))));
                    }
                    for (long long int i_4 = 2; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2])))))))));
                        var_18 += ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) var_1)))) % (((/* implicit */unsigned long long int) ((long long int) var_10)))))));
                    }
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), (var_0))))) : (((var_12) % (((/* implicit */unsigned long long int) var_9)))))));
                        var_20 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) var_2)) ? (arr_11 [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119)))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_9))) ? (4873414474020919147ULL) : ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_12), (var_6)));
                            var_22 = var_3;
                            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))) == (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65531), (((/* implicit */unsigned short) var_13)))))))))));
                        }
                        var_24 = ((/* implicit */short) max((max((max((((/* implicit */int) arr_8 [i_5] [i_5] [i_2] [i_2] [i_1] [i_0])), (arr_10 [i_5] [i_2] [i_0]))), (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_2))))))), (242682145)));
                        var_25 = (((-(((/* implicit */int) arr_7 [19ULL] [i_5] [i_5 + 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5696))))));
                    }
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) max((max((var_4), (((/* implicit */unsigned int) (unsigned short)65523)))), (((/* implicit */unsigned int) (+(arr_17 [i_2] [17] [i_1] [i_0])))))))));
                }
                for (unsigned char i_7 = 4; i_7 < 20; i_7 += 3) 
                {
                    var_27 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7 - 4] [i_0] [i_7 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (short)-2023)) : (((/* implicit */int) (short)2775))));
                    var_29 = ((/* implicit */int) ((long long int) ((unsigned long long int) ((((/* implicit */int) (signed char)122)) == (((/* implicit */int) arr_7 [i_0] [i_1] [i_7]))))));
                    var_30 = ((/* implicit */int) var_1);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0]))) : (var_4)))) : (-1509035197956342777LL)))) ? ((((!(arr_5 [i_0] [i_1] [i_7 - 3]))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (var_6))) : (max((var_10), (((/* implicit */unsigned long long int) var_5)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_7] [i_7 + 1] [i_7] [5LL])), ((unsigned short)65531)))) ? (var_6) : (((((/* implicit */_Bool) 242682145)) ? (var_6) : (var_12)))))));
                }
                /* LoopSeq 2 */
                for (signed char i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_32 = (~(2188494858U));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_17 [i_8 - 2] [(_Bool)1] [i_8] [(_Bool)1])) : (arr_12 [i_9] [(signed char)1] [i_8] [(signed char)1] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_2)) - (75)))))) ? (((((arr_26 [i_9] [i_8] [i_1] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)2560)) - (2505))))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((((/* implicit */int) var_0)) + (2147483647))) << (((arr_3 [i_0]) - (3156486705U))))) < (((var_8) - (((/* implicit */int) arr_1 [i_0]))))))))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((((/* implicit */short) var_2)), (arr_25 [i_1] [i_10] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38457)))))) : (((((/* implicit */_Bool) arr_10 [(unsigned char)20] [i_10] [2])) ? (((/* implicit */unsigned long long int) arr_6 [i_10] [i_10] [i_10] [i_0])) : (var_6))))));
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) max((114688ULL), (((/* implicit */unsigned long long int) arr_9 [i_10 + 3] [i_8] [i_1] [i_0])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 3; i_11 < 19; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 4) 
                        {
                            var_36 = ((/* implicit */signed char) max((((arr_3 [i_11 - 2]) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59831)) ? (((/* implicit */int) (unsigned short)27076)) : (-268100089))))));
                            var_37 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((/* implicit */int) (unsigned char)3))))), (var_4)));
                        }
                        for (signed char i_13 = 2; i_13 < 19; i_13 += 3) 
                        {
                            var_38 |= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_8 - 2])) < (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [(signed char)9]))))) ? (max((((/* implicit */int) var_13)), (var_8))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
                            var_39 = ((/* implicit */int) var_11);
                        }
                        for (int i_14 = 1; i_14 < 18; i_14 += 4) 
                        {
                            var_40 = max((((((/* implicit */_Bool) arr_3 [i_8 - 2])) ? (((/* implicit */int) ((unsigned short) var_10))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_1)))))), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_11] [i_14 - 1])) && (((/* implicit */_Bool) var_12))))))));
                            var_41 = ((/* implicit */unsigned short) var_11);
                        }
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_11 + 2] [i_1] [i_8 - 2]))))) && (((/* implicit */_Bool) max((arr_14 [15U] [i_8 + 1] [i_8] [i_11] [i_0]), (arr_14 [20ULL] [i_8 + 1] [i_11] [i_1] [i_8 - 1]))))));
                        var_43 = (+(((((((/* implicit */_Bool) var_9)) ? (187284835) : (((/* implicit */int) arr_20 [i_11])))) - ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))))));
                    }
                    var_44 = ((/* implicit */long long int) max((var_12), (((/* implicit */unsigned long long int) ((short) var_4)))));
                    var_45 += ((/* implicit */unsigned char) (short)-25222);
                }
                for (unsigned char i_15 = 2; i_15 < 17; i_15 += 1) 
                {
                    var_46 = ((/* implicit */unsigned char) arr_10 [15U] [i_15] [(unsigned short)13]);
                    var_47 = var_13;
                    var_48 = ((/* implicit */unsigned long long int) var_2);
                    var_49 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_15] [i_15] [i_15] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [18LL] [i_1] [i_1] [(short)19] [(short)19])) - (((/* implicit */int) var_1))))) : (((unsigned long long int) 3783003719U))))));
                }
                var_50 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_1] [5U])) ? (max((3657430970676772554ULL), (var_6))) : (var_7))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_2)))))));
                var_51 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_23 [i_0]))))) && (((/* implicit */_Bool) max((var_4), (var_4)))))))));
            }
        } 
    } 
    var_52 = ((/* implicit */int) var_3);
}
