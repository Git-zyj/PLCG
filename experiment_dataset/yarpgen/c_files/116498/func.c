/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116498
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
    var_13 = ((/* implicit */int) (~(var_4)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) (short)-11696);
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) 106107233U)) + (arr_0 [i_1 - 1])));
        }
        for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 4) 
        {
            var_15 = ((/* implicit */long long int) min((arr_3 [i_2 + 2] [i_0]), (((unsigned long long int) ((106107237U) | (106107216U))))));
            var_16 -= ((/* implicit */long long int) (short)32767);
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_2 + 1])) + (arr_4 [i_0 + 1] [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_0 - 1] [i_0 - 1])));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (arr_14 [i_4 + 1])))) ? (((/* implicit */int) ((short) 106107233U))) : (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */signed char) arr_3 [i_3] [i_3]);
                            arr_18 [i_5] [i_4] [i_0] [i_2] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_0] [i_2] [i_3] [i_3] [i_5]))))), (arr_6 [i_4 + 2] [i_2 - 2])))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_4 - 2])) ? (((/* implicit */unsigned long long int) arr_7 [i_2 + 2] [i_4 - 2])) : (var_1))) : (((/* implicit */unsigned long long int) (-(arr_7 [i_2 - 4] [i_4 - 2]))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)128));
                            var_22 = ((arr_1 [i_0 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
                            var_23 = ((/* implicit */short) ((((/* implicit */long long int) arr_15 [i_0 - 2] [i_2 - 4] [i_2 - 4] [i_4 - 1])) / (var_8)));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */short) (_Bool)1);
                            var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_7 [i_0] [15U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-16)))) : (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22389)))))))));
                        }
                        var_26 -= ((((_Bool) arr_14 [i_0 - 2])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_4])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) (~(arr_8 [i_0] [i_2] [i_2])))) : (((((/* implicit */_Bool) var_12)) ? (var_8) : (var_8)))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_27 |= ((/* implicit */short) arr_23 [14ULL] [14ULL] [14ULL] [i_4 + 1] [i_8]);
                            arr_25 [i_3] [8ULL] [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_2);
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) var_5);
                            var_29 = ((/* implicit */long long int) ((((_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_1 [i_9]))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_31 = (-(((long long int) arr_0 [i_4 - 1])));
                            var_32 = ((/* implicit */short) ((unsigned long long int) var_0));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_3] [i_4 + 1] [i_11] [i_3]))) + (arr_30 [i_4] [i_2] [i_4 + 2] [i_0] [i_2] [i_0]))));
                            var_34 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) ((short) arr_27 [18ULL] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])))))), (((((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) / (arr_15 [i_0] [i_0] [i_0] [i_0])))));
                            var_35 = ((/* implicit */long long int) (short)21463);
                        }
                    }
                } 
            } 
        }
        for (signed char i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_12] [i_12] [i_0 - 2] [i_12]))));
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_8) / (arr_31 [(_Bool)1] [(_Bool)1] [i_12]))), (9223372036854775784LL)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_12 - 1] [i_12 - 1] [i_12])))));
        }
        for (unsigned char i_13 = 2; i_13 < 18; i_13 += 4) 
        {
            var_38 ^= ((/* implicit */unsigned long long int) ((_Bool) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            var_39 = ((/* implicit */signed char) var_4);
        }
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)-29762))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : (max((var_8), (((/* implicit */long long int) (unsigned char)6))))));
    }
    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_15 = 2; i_15 < 19; i_15 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_14])) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    var_42 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) <= (((((/* implicit */_Bool) arr_41 [i_14])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        var_43 = ((/* implicit */long long int) arr_43 [i_14] [i_14] [i_14]);
                        arr_55 [i_18] [i_14] [i_15] [i_15] [i_14] &= ((/* implicit */long long int) var_11);
                        arr_56 [i_17] [18LL] [i_17] [i_17] [i_18] = ((/* implicit */unsigned int) arr_39 [i_15]);
                    }
                    for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) var_5))));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_15 + 4] [i_15 + 2] [i_15 - 1] [i_15 - 2])) | (((/* implicit */int) arr_46 [i_15 + 4] [i_15 - 2] [i_15 + 1] [i_15 + 2]))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
                    {
                        var_46 += ((/* implicit */unsigned int) var_11);
                        var_47 = ((/* implicit */short) ((signed char) ((short) (short)(-32767 - 1))));
                        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((long long int) var_0)))));
                        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)21)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_6))))) : (var_4)));
                        arr_65 [i_17] [i_20] = ((/* implicit */signed char) ((long long int) var_2));
                    }
                    for (long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        var_50 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))));
                        var_51 |= ((/* implicit */unsigned int) ((signed char) (short)32756));
                    }
                }
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_71 [i_22] [i_15 + 3] [i_15 + 3] [i_22] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((unsigned char) (_Bool)1))), (((arr_61 [i_14] [i_22] [i_22] [i_22] [i_15] [i_22] [i_14]) + (arr_61 [i_14] [i_22] [i_14] [i_14] [i_22] [(unsigned char)1] [i_14]))))) + (((/* implicit */unsigned int) (((+(((/* implicit */int) var_0)))) - (((/* implicit */int) (unsigned char)229)))))));
                var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) ((unsigned int) (-(arr_40 [i_15] [i_15 - 2])))))));
                var_53 = var_10;
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 23; i_23 += 4) 
                {
                    for (short i_24 = 3; i_24 < 22; i_24 += 2) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) var_2))));
                            arr_76 [i_22] [i_15] = ((/* implicit */_Bool) (-(var_7)));
                            var_55 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_62 [i_14] [i_15 - 1] [i_22] [i_15 - 1] [i_15 - 1] [i_24])))), (var_3)));
                            arr_77 [6ULL] [i_22] = ((/* implicit */_Bool) ((short) var_0));
                        }
                    } 
                } 
            }
            var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) (~(((/* implicit */int) max((arr_75 [i_15 + 2] [i_15 - 1] [i_15 + 4] [i_15 - 1] [i_15]), (((/* implicit */unsigned char) var_5))))))))));
            /* LoopNest 3 */
            for (signed char i_25 = 0; i_25 < 23; i_25 += 1) 
            {
                for (unsigned char i_26 = 0; i_26 < 23; i_26 += 4) 
                {
                    for (short i_27 = 0; i_27 < 23; i_27 += 1) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned char) arr_45 [i_15] [i_15 - 2] [i_15 - 2] [i_15 - 2]);
                            var_58 = ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            } 
            var_59 = ((/* implicit */short) var_11);
        }
        for (short i_28 = 2; i_28 < 21; i_28 += 4) 
        {
            var_60 = ((/* implicit */_Bool) arr_59 [i_28] [i_28]);
            arr_88 [i_14] [i_14] [15ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [i_28 - 1] [i_28 - 2] [i_28 - 2] [i_28 + 2] [i_28 + 2]))) + (var_7)))) ? (78261743U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_74 [(short)2] [i_28 + 2] [i_28 + 1] [i_28 + 1] [i_28 + 1] [i_28 + 1] [i_28 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)230)))))));
            arr_89 [i_14] = ((/* implicit */long long int) arr_41 [i_14]);
            var_61 *= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)127)))) ^ (((((/* implicit */_Bool) ((long long int) 2275769757U))) ? (((/* implicit */int) arr_49 [i_28] [i_28 - 2] [i_28 - 2] [i_28 - 1])) : (((((/* implicit */_Bool) arr_50 [(_Bool)1] [i_28] [i_14] [i_14])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))));
            var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_87 [i_14]))) ? (((((((/* implicit */int) (short)-27069)) + (2147483647))) >> (((((/* implicit */int) (short)22391)) - (22381))))) : (((/* implicit */int) ((short) var_5)))))) ? (((long long int) ((((/* implicit */int) var_12)) >> (((arr_79 [i_14] [i_14]) - (3166890535319305737LL)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_28 + 2])) ? (((/* implicit */int) (short)-25646)) : (((/* implicit */int) arr_42 [i_28 - 2])))))));
        }
        arr_90 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) / ((-(var_11)))))) ? ((+(((long long int) var_2)))) : (min((((/* implicit */long long int) arr_52 [i_14] [i_14] [i_14] [i_14])), (var_10)))));
    }
}
