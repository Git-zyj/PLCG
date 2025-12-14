/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148515
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_18 -= ((/* implicit */int) ((short) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)21448)))))));
        arr_3 [i_0] [i_0] = ((int) min((((/* implicit */int) var_3)), (((((/* implicit */int) (unsigned short)44087)) ^ (((/* implicit */int) arr_0 [i_0]))))));
        var_19 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)21440)) / (((/* implicit */int) (unsigned short)21448))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 4]))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_9 [i_1]);
                        var_21 = ((/* implicit */signed char) var_7);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_4] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_8)) - (14183)))))) ? (((/* implicit */int) (!(arr_1 [i_4])))) : (var_11)))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                        var_22 -= ((((/* implicit */int) var_15)) >= (((/* implicit */int) (short)-1713)));
                        var_23 -= ((/* implicit */_Bool) -885828462772194752LL);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_0] [i_5] = ((((/* implicit */_Bool) arr_19 [i_2] [i_1 + 2] [i_2])) ? (arr_19 [i_5] [i_1 - 1] [i_2]) : (arr_19 [i_5] [i_1 + 4] [i_2]));
                        arr_22 [i_1] [i_2] [i_1] [i_1] = ((((/* implicit */int) arr_5 [i_0] [i_1 + 2] [(short)10])) * (((/* implicit */int) arr_5 [i_5] [i_1 + 4] [i_1])));
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1 + 4] [i_1]))));
                        var_25 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_11 [i_0] [i_1 + 1] [i_2] [i_2] [i_2]))) - (((/* implicit */unsigned long long int) (-(var_5))))));
                    }
                    for (short i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_23 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_23 [i_1] [i_1 + 4] [i_1])) : (((/* implicit */int) arr_23 [i_1] [i_1 + 1] [i_1])))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_0] [i_1 + 1] [i_6] = ((/* implicit */unsigned char) 100663296U);
                            arr_28 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) -885828462772194752LL);
                            var_27 -= ((/* implicit */_Bool) var_6);
                        }
                    }
                    arr_29 [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
                    var_28 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_10 [i_2] [i_0])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-71)) : (((((/* implicit */_Bool) 885828462772194751LL)) ? (var_16) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 4) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */signed char) arr_24 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8]);
        var_29 ^= (((_Bool)1) ? (((/* implicit */int) (unsigned short)44088)) : (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_9 [(unsigned short)8]))));
            var_31 = ((/* implicit */unsigned int) arr_8 [i_9] [i_8]);
        }
        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_32 = ((/* implicit */unsigned char) arr_1 [0ULL]);
            var_33 = ((/* implicit */short) -2619054531494336535LL);
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        arr_46 [i_8] = (+(((((/* implicit */_Bool) arr_43 [i_8 + 1])) ? (((/* implicit */int) arr_8 [i_11] [i_8])) : ((~(var_1))))));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((_Bool) (_Bool)1)) ? (arr_38 [i_8] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) != (((/* implicit */int) ((((/* implicit */int) (signed char)115)) < (((/* implicit */int) var_8)))))))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_35 ^= ((/* implicit */_Bool) (-((-(arr_11 [i_8] [i_8 + 3] [i_8 + 1] [i_8 + 2] [i_12])))));
                            var_36 = ((/* implicit */_Bool) var_5);
                        }
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_14])) ? (arr_26 [i_8]) : (((/* implicit */int) ((_Bool) arr_49 [i_14] [i_14] [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8])))));
                            var_38 = ((/* implicit */int) ((((/* implicit */int) arr_15 [(signed char)1] [i_8] [i_8 + 1] [12U])) > (((/* implicit */int) arr_15 [i_8] [i_8] [i_8 + 3] [i_8]))));
                            var_39 = ((/* implicit */unsigned int) ((short) (_Bool)1));
                        }
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            var_40 = var_5;
                            arr_54 [i_8] [i_8] [i_10] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                            var_41 = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_8]))) >= (((((/* implicit */_Bool) arr_12 [i_15] [i_12] [i_12] [i_11] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) : (var_5)))))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (short i_17 = 1; i_17 < 8; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_62 [i_8] [i_8] [i_8] [(short)2] [i_18] = var_5;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_42 ^= ((/* implicit */unsigned int) arr_7 [i_19] [(unsigned short)5] [i_16] [(unsigned short)5]);
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_17)) == (((/* implicit */int) arr_61 [i_8] [i_17]))))))))));
                            arr_65 [i_17] [i_8] [i_18] = ((/* implicit */_Bool) var_8);
                        }
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (1134381035U) : (((/* implicit */unsigned int) arr_58 [i_16] [i_20] [i_20]))))) ? (min((var_12), (((/* implicit */unsigned int) (short)-13625)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */int) (_Bool)1)))))))) - (((((/* implicit */_Bool) var_4)) ? (arr_57 [i_8] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7))))))));
                arr_68 [i_20] [i_8] = ((/* implicit */unsigned int) arr_31 [i_8]);
                var_45 = ((/* implicit */unsigned int) arr_52 [i_8] [i_16] [i_20] [i_20]);
            }
            for (short i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                arr_73 [i_21] [i_16] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_61 [i_21] [i_21])) : (((/* implicit */int) (short)-27332))));
                var_46 = ((/* implicit */unsigned char) min((max(((+(arr_60 [i_8] [i_16] [i_21]))), (((/* implicit */long long int) (unsigned short)17098)))), (((/* implicit */long long int) (+(-1632493985))))));
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 10; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_80 [i_8] [i_8] = ((/* implicit */unsigned char) arr_10 [11] [i_16]);
                            var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [6U])), (((((long long int) arr_30 [i_8] [i_21])) | (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                            var_48 -= ((/* implicit */unsigned short) (-(min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (short)-32759))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_24 = 0; i_24 < 10; i_24 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_25 = 0; i_25 < 10; i_25 += 1) 
                {
                    arr_86 [i_8] [i_8] [i_16] [i_8] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)23547)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_20 [i_8] [15ULL])), (arr_43 [i_16]))))) : (min((((/* implicit */unsigned int) (short)-27332)), (var_12))))) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_48 [i_25] [i_25] [9] [i_25] [i_25] [i_25])))))));
                    var_49 -= ((/* implicit */short) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_14))));
                }
                for (unsigned short i_26 = 1; i_26 < 9; i_26 += 3) 
                {
                    var_50 ^= ((/* implicit */unsigned char) arr_20 [i_24] [i_8]);
                    arr_89 [i_8] [i_16] [(short)4] [i_8] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (arr_75 [i_16] [i_8 + 3] [i_8] [i_8])))));
                    var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) min((arr_25 [(short)0] [i_16] [i_16] [i_24] [i_26 - 1] [i_26]), (min((((116897005U) & (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14184)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)39213))))))))))));
                    var_52 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)230))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18095))) : (1461354524U))))));
                    var_53 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
                }
                arr_90 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) min(((+(arr_53 [i_24] [i_16 - 1] [i_8] [i_8 - 1] [i_8 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)44087)), (var_13)))) ? (((/* implicit */int) (short)5823)) : (((((/* implicit */_Bool) arr_58 [i_8] [i_16] [i_8])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (_Bool)0)))))))));
                var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_16] [i_16 - 1] [i_8])) >> (((/* implicit */int) arr_56 [i_24] [i_8] [i_8]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_56 [i_16 - 1] [i_16 - 1] [8U])) - (((/* implicit */int) arr_56 [i_8] [i_24] [i_24]))))) : (min((6149382438167853514LL), (((/* implicit */long long int) (_Bool)1))))));
            }
            /* vectorizable */
            for (unsigned int i_27 = 2; i_27 < 9; i_27 += 3) 
            {
                var_55 ^= ((/* implicit */unsigned int) ((short) arr_72 [i_8] [i_16] [i_8]));
                arr_93 [i_8] [i_8] [i_27 - 2] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_32 [i_16]))))) & (arr_24 [i_8] [(_Bool)0] [i_8] [(short)0] [i_8])));
            }
        }
        /* vectorizable */
        for (unsigned short i_28 = 0; i_28 < 10; i_28 += 4) 
        {
            var_56 = ((/* implicit */short) var_10);
            arr_96 [(unsigned char)2] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-27332)) : (((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */int) (short)-8066)) : (((/* implicit */int) (short)-8066))));
            var_57 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_94 [i_8])) ? (((/* implicit */int) arr_52 [i_8] [i_28] [i_28] [i_28])) : (((/* implicit */int) (unsigned short)64334)))) & (((/* implicit */int) (short)-10687))));
            var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) ((((/* implicit */int) (short)-3187)) >= (((/* implicit */int) (signed char)-105)))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            var_59 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_79 [i_8] [i_8] [i_8] [(short)5] [i_29])))) ? ((-(((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21448))))))) : (((((/* implicit */_Bool) arr_4 [i_8 + 2])) ? (arr_70 [i_29] [i_8 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
            /* LoopSeq 1 */
            for (long long int i_30 = 0; i_30 < 10; i_30 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_31 = 1; i_31 < 6; i_31 += 1) 
                {
                    for (long long int i_32 = 0; i_32 < 10; i_32 += 4) 
                    {
                        {
                            arr_105 [i_8] = ((/* implicit */short) var_10);
                            var_60 ^= ((/* implicit */int) min((((/* implicit */long long int) (short)3186)), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_32]))) : (arr_99 [i_30]))), (((/* implicit */long long int) var_7))))));
                            var_61 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_41 [(unsigned char)0] [i_8] [i_8 + 3])) ^ (((/* implicit */int) arr_41 [i_8] [i_8] [i_8 - 1])))))));
                            var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) arr_55 [i_30]))));
                        }
                    } 
                } 
                arr_106 [i_8] [i_8] = ((/* implicit */signed char) 2736294798U);
            }
        }
        /* vectorizable */
        for (unsigned int i_33 = 2; i_33 < 6; i_33 += 4) 
        {
            var_63 = ((/* implicit */int) arr_6 [i_8 + 2]);
            var_64 -= ((/* implicit */short) ((arr_66 [i_8] [i_33] [i_8] [i_33 + 3]) <= (((/* implicit */int) (short)-1208))));
            var_65 = ((/* implicit */int) ((1518213002U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-19702)))));
        }
    }
    var_66 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_34 = 0; i_34 < 16; i_34 += 3) 
    {
        arr_114 [i_34] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) & ((~(((/* implicit */int) (unsigned short)21448))))));
        arr_115 [i_34] [(unsigned short)1] = (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44087))) : (18446744073709551615ULL));
    }
    for (long long int i_35 = 0; i_35 < 10; i_35 += 3) 
    {
        arr_118 [i_35] [i_35] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (short i_36 = 2; i_36 < 9; i_36 += 2) 
        {
            for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
            {
                for (int i_38 = 0; i_38 < 10; i_38 += 4) 
                {
                    {
                        var_67 = ((/* implicit */unsigned short) max((var_67), (((/* implicit */unsigned short) arr_124 [i_36] [i_36] [i_36 - 2]))));
                        arr_127 [i_35] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) arr_103 [i_35] [i_35] [i_36] [8] [i_35] [i_36 + 1])))))), (arr_103 [i_35] [i_35] [i_36] [i_36 - 2] [i_35] [i_36 - 1])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_39 = 0; i_39 < 17; i_39 += 4) 
    {
        var_68 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_39]))));
        var_69 ^= ((/* implicit */int) arr_131 [i_39]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_40 = 1; i_40 < 15; i_40 += 1) 
    {
        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_42 = 3; i_42 < 14; i_42 += 2) 
                {
                    for (signed char i_43 = 3; i_43 < 13; i_43 += 4) 
                    {
                        for (unsigned int i_44 = 1; i_44 < 16; i_44 += 3) 
                        {
                            {
                                var_70 = ((/* implicit */signed char) arr_144 [i_41] [i_43] [i_44]);
                                arr_145 [(unsigned short)7] [i_40] [i_40] [i_40] [i_40] = ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -2109763013)) : (1518213002U)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_45 = 4; i_45 < 14; i_45 += 3) 
                {
                    for (unsigned long long int i_46 = 1; i_46 < 14; i_46 += 2) 
                    {
                        {
                            var_71 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_143 [i_40] [i_40 + 1] [i_40] [i_40] [i_40]))));
                            var_72 = arr_15 [i_40] [i_40] [i_40] [i_45 - 2];
                        }
                    } 
                } 
            }
        } 
    } 
}
