/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171999
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) (signed char)-1)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) (+(((/* implicit */int) var_1)))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) -5012389458345471554LL)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)426))) == (5285906726189910599LL)))), ((-(((/* implicit */int) var_3))))));
                                arr_16 [(signed char)6] [i_4] [i_4] [16LL] [i_4] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1 - 1]))) != (arr_8 [i_1 + 3]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 67108863)))) < (max((4990235753494533461LL), (var_9)))))) : (((/* implicit */int) var_11))));
                                arr_17 [i_4] = ((/* implicit */long long int) (signed char)-1);
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-1)))))))));
                            }
                        } 
                    } 
                    arr_18 [(short)0] [7LL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8191)) ? (arr_13 [i_0] [i_1 + 1] [(unsigned short)2] [i_1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)10927)))))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_1 + 2]) ? (((/* implicit */int) arr_0 [i_1 + 3])) : (((/* implicit */int) var_1))))) : (((var_8) - (((/* implicit */unsigned long long int) var_6))))));
                    arr_19 [i_0] [8U] [(signed char)12] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)10)) & (((/* implicit */int) (unsigned short)22623))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) : (arr_5 [i_0] [i_1])))));
                }
            } 
        } 
    }
    for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_20 [i_5 - 1] [i_5 - 1])))), (((/* implicit */int) ((unsigned short) var_10)))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((((/* implicit */int) var_0)) % (((/* implicit */int) arr_20 [i_5 - 1] [i_5])))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -870069879))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (signed char)11))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (var_2))) : (((/* implicit */unsigned long long int) arr_22 [i_5 + 1])))))))));
            arr_26 [i_5] = ((/* implicit */unsigned int) arr_24 [i_5] [i_6]);
        }
        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_27 [i_5 - 1] [(_Bool)1] [i_7]))));
            /* LoopNest 2 */
            for (long long int i_8 = 2; i_8 < 17; i_8 += 1) 
            {
                for (unsigned int i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    {
                        arr_36 [10] [i_5] [i_8 - 1] [i_9 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((9223372036854775807LL) % (((/* implicit */long long int) ((unsigned int) var_7)))))), (max((var_5), (((/* implicit */unsigned long long int) arr_34 [i_5 - 1] [i_7] [i_8] [i_7]))))));
                        arr_37 [i_5] [i_7] [(short)16] [i_7] [i_5] = min((((/* implicit */long long int) (signed char)10)), (0LL));
                        var_19 = ((/* implicit */unsigned long long int) (~(arr_21 [i_5] [i_9 - 1])));
                    }
                } 
            } 
        }
    }
    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) ^ (((/* implicit */int) ((signed char) arr_22 [i_10])))))) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)7))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (short)-6280)) : (((/* implicit */int) (unsigned short)35815))))) / (((unsigned long long int) arr_39 [i_10]))))));
        var_21 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */long long int) ((short) 2147023344U))), (min((arr_24 [i_10] [i_10]), (((/* implicit */long long int) (signed char)-125)))))));
        arr_40 [0] [i_10] = ((/* implicit */_Bool) arr_25 [i_10] [i_10]);
    }
    var_22 += ((/* implicit */short) ((long long int) min((3500748758917783513ULL), (((/* implicit */unsigned long long int) (signed char)1)))));
    /* LoopNest 2 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        for (long long int i_12 = 1; i_12 < 9; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        {
                            arr_50 [i_11] [i_13] [i_12] [i_14] [i_14] = var_10;
                            /* LoopSeq 2 */
                            for (signed char i_15 = 4; i_15 < 10; i_15 += 4) 
                            {
                                arr_54 [i_12] [i_12] [i_11] [i_15 - 3] = ((/* implicit */unsigned char) var_1);
                                var_23 = arr_34 [i_11] [i_11] [11LL] [(unsigned short)18];
                                arr_55 [i_12] [6LL] [i_12] = ((/* implicit */unsigned short) max(((-(arr_24 [i_11] [i_12 - 1]))), (((/* implicit */long long int) var_6))));
                            }
                            for (int i_16 = 0; i_16 < 11; i_16 += 3) 
                            {
                                var_24 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759)))))) ? (((((/* implicit */_Bool) arr_13 [i_11 - 1] [(short)7] [i_12] [i_11 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_11 - 1] [i_11 - 1] [i_13])) : (((/* implicit */int) (unsigned short)2813)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (signed char)-1)))))));
                                arr_58 [i_12 - 1] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) & ((-(var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)18))))));
                                arr_59 [i_11 - 1] [i_12] [i_13] [i_14] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (signed char)-1))))) || (((((/* implicit */_Bool) 4876357616633605028LL)) && (((/* implicit */_Bool) var_4)))))) ? (((((/* implicit */_Bool) (unsigned short)433)) ? (min((13ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6274)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [(signed char)1] [(signed char)1] [(unsigned char)17] [i_14])))));
                                var_25 += ((/* implicit */signed char) max((((((((/* implicit */_Bool) 4LL)) ? (((/* implicit */int) (short)6302)) : (((/* implicit */int) arr_20 [(_Bool)1] [i_14])))) << (((arr_2 [i_11 - 1]) + (7664716497049579407LL))))), (((/* implicit */int) arr_7 [i_11 - 1] [i_12] [i_13] [i_14]))));
                            }
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)23)) != (((((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL))) ? (((/* implicit */int) ((_Bool) arr_45 [i_12]))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-17)), (arr_23 [i_12]))))))));
                var_27 = ((/* implicit */short) min((((/* implicit */long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_7))))), (-8269699157218414657LL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_20 = 2; i_20 < 9; i_20 += 2) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) (signed char)29);
                                var_29 = ((/* implicit */unsigned short) max(((~(((long long int) (short)63)))), ((((~(-9223372036854775782LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-6280)))))));
                            }
                        } 
                    } 
                    arr_71 [i_18] [i_18] [i_19] [i_18] = max(((+(arr_11 [i_17] [i_18]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)-109))))));
                }
                /* vectorizable */
                for (long long int i_22 = 3; i_22 < 7; i_22 += 1) 
                {
                    arr_76 [i_18] [i_18] = ((/* implicit */unsigned int) arr_32 [i_17] [i_18] [(short)17]);
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (signed char)17))));
                                arr_83 [i_17] [i_18] [i_22 - 3] [i_17] [(signed char)9] [i_17] = var_9;
                            }
                        } 
                    } 
                    var_31 *= ((/* implicit */short) (_Bool)1);
                    var_32 = ((/* implicit */short) (signed char)-8);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_33 = ((/* implicit */unsigned char) ((short) (short)7));
                    arr_87 [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)12)) % (((/* implicit */int) arr_25 [i_18] [i_25]))));
                    var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_18] [i_25])) / (((/* implicit */int) (short)7))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)3))));
                    arr_88 [i_17] [i_18] [i_18] [i_25] = ((/* implicit */int) var_3);
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_91 [i_18] [i_18] [8] [i_26] = ((/* implicit */_Bool) arr_57 [i_17] [i_18] [i_17] [i_26] [i_17]);
                        arr_92 [i_17] [i_18] [i_17] [i_26] [i_17] [i_18] = ((/* implicit */unsigned long long int) (signed char)-7);
                    }
                }
            }
        } 
    } 
}
