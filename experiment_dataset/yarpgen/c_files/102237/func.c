/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102237
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [(unsigned char)2] = (-(((/* implicit */int) var_14)));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (arr_1 [3U]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_1] [i_1] [i_1] [i_3 - 1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((int) arr_9 [i_0] [i_1 - 1] [i_1] [i_3 + 2]))) : ((-(max((var_5), (arr_7 [i_0] [i_1])))))));
                        arr_12 [i_0] [i_1 - 1] [(short)4] [i_1] [i_2] = ((/* implicit */short) max((arr_9 [i_3] [i_0] [i_1] [i_3 + 1]), (max((arr_0 [i_1 - 1] [i_1 - 1]), (arr_5 [i_1 - 1] [i_1])))));
                        var_19 = ((/* implicit */_Bool) (unsigned char)236);
                        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [(signed char)1] [(signed char)1] [(_Bool)1] [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_4 + 3] [i_1] [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_4 + 3] [i_1] [i_1 - 1]))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((short) var_5)))));
                        arr_16 [5] [i_1] [i_1] [(unsigned char)11] [i_1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_1] [i_1])))) <= (((/* implicit */int) arr_11 [i_4 + 2] [i_4 + 2] [i_4] [i_1] [i_4]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_7 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3158565059541851668LL)) ? (arr_14 [i_1] [i_1 - 1] [i_0] [i_1] [i_1]) : (((/* implicit */int) var_12))))))));
                                var_23 = ((/* implicit */signed char) max((((((/* implicit */int) arr_10 [i_1])) & (((/* implicit */int) var_12)))), (((/* implicit */int) arr_10 [i_1]))));
                                var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_1 - 1] [i_0]))) | (-3158565059541851670LL)))), (((((/* implicit */_Bool) (~(3158565059541851667LL)))) ? (((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) 3570292123U)) : (arr_19 [i_6] [i_5] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_7] [i_8] [i_9] [i_9] [i_7] [(short)1] = ((/* implicit */unsigned char) var_8);
                                var_25 = var_9;
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */unsigned short) arr_29 [i_8 - 1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 11; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_27 += arr_30 [(_Bool)1] [(short)11] [i_8] [i_8];
                                arr_41 [(_Bool)1] [i_7] [i_7] [i_7] [i_8] [(short)8] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [i_12]))) * (var_17)))) ? (((/* implicit */unsigned int) (~(((int) arr_32 [i_0]))))) : (((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_11 - 1] [i_11] [i_11 - 3])) ? (arr_35 [i_11 - 2] [i_11 + 1] [i_11] [i_11 + 1] [9ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) && (((/* implicit */_Bool) 4294967295U))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_13 = 1; i_13 < 19; i_13 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 1; i_15 < 16; i_15 += 4) 
            {
                for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    {
                        var_28 ^= ((/* implicit */short) min(((+(arr_48 [i_13] [(unsigned char)9] [i_14]))), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (arr_44 [i_14]))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_42 [(unsigned char)2] [i_14])) : (((/* implicit */int) arr_51 [i_13] [i_14] [(unsigned short)16] [(short)14])))))))));
                        arr_52 [i_16] [i_14] [i_15] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (arr_47 [i_13 + 1] [i_13] [i_13 + 1] [i_13]) : ((+(((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) (-(var_5)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_50 [i_13] [i_16] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_13]))) : (((((/* implicit */_Bool) 4895645586976771903ULL)) ? (((/* implicit */unsigned long long int) 3158565059541851682LL)) : (arr_44 [i_13]))))));
                        var_29 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_43 [i_14]))))), (var_12))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_17 = 2; i_17 < 19; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_62 [i_17] [i_17] [i_19] = ((/* implicit */unsigned int) (+(((var_6) ? (min((arr_55 [i_19] [i_18] [i_17] [i_14]), (((/* implicit */unsigned long long int) arr_50 [(unsigned char)16] [i_17] [(unsigned char)16] [i_18 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)2))))))))));
                            var_31 = ((/* implicit */unsigned int) max(((~(arr_57 [i_13] [i_14] [i_17] [i_17] [i_18 + 1] [(signed char)5]))), (max((((/* implicit */long long int) arr_59 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1])), (((((/* implicit */_Bool) arr_45 [i_17 - 2])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_13] [i_13] [i_13])))))))));
                            var_32 &= ((/* implicit */unsigned long long int) var_16);
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31316)) ? (((/* implicit */long long int) arr_59 [i_13] [15ULL] [(short)5] [i_13] [i_13])) : (-3068151392911685764LL)));
                            arr_65 [i_13] [i_13] [i_17] [i_18] [i_20] [i_13 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(3199386553735379717LL)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)69))));
                        }
                        arr_66 [i_13] [i_13 - 1] [11U] [11U] [0] = ((/* implicit */signed char) (unsigned short)698);
                        var_34 -= ((/* implicit */unsigned short) (~((+(arr_64 [i_18 + 1] [i_17 - 1] [10] [i_13 - 1] [i_13])))));
                    }
                } 
            } 
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                for (unsigned int i_23 = 0; i_23 < 20; i_23 += 4) 
                {
                    for (unsigned char i_24 = 1; i_24 < 19; i_24 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) arr_51 [i_13 - 1] [i_13 + 1] [(short)16] [i_24])), (arr_48 [i_13 - 1] [i_13 + 1] [i_22])))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_13 - 1] [i_13 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_24 + 1] [i_23] [i_22] [i_13]))) : ((+(max((-3158565059541851668LL), (((/* implicit */long long int) arr_75 [i_13] [i_13] [i_13] [17]))))))));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)32767)), (((((/* implicit */int) arr_67 [i_24 + 1] [i_24 - 1] [i_13 - 1])) / (((/* implicit */int) arr_67 [i_24 - 1] [i_24 + 1] [i_13 - 1])))))))));
                            var_38 ^= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (~(arr_59 [i_24] [i_23] [14LL] [14LL] [3LL])))), (((var_7) & (3068151392911685785LL))))) / (((/* implicit */long long int) (-(arr_61 [i_24 + 1] [i_24 + 1] [i_24 - 1] [i_24 + 1] [i_24]))))));
                            arr_79 [i_13] [i_21] [i_21] [i_24] [i_23] [i_13] [i_24] = ((/* implicit */unsigned long long int) max((arr_46 [i_13 + 1]), (arr_46 [i_13 - 1])));
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_69 [i_13 + 1] [i_13 + 1]), (arr_69 [i_13 + 1] [i_13])))), (min((((var_2) | (arr_64 [i_21] [i_13] [i_13] [i_21] [i_13 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13362188466858239475ULL)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_21] [i_13 + 1] [i_13] [i_13]))))))))));
            arr_80 [i_13 + 1] [i_13] [i_13 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_49 [i_21] [i_13 - 1] [(short)11]))));
        }
        /* vectorizable */
        for (unsigned long long int i_25 = 3; i_25 < 17; i_25 += 4) 
        {
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_76 [i_25] [i_25])) ? (((/* implicit */int) arr_67 [i_13 - 1] [(short)5] [i_25 - 1])) : (((/* implicit */int) arr_67 [i_13 - 1] [i_13] [i_25 - 1]))));
            /* LoopNest 2 */
            for (unsigned short i_26 = 1; i_26 < 16; i_26 += 1) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 20; i_27 += 3) 
                {
                    {
                        arr_89 [i_25] [i_27] [i_26 + 2] [i_25] [i_25] = ((/* implicit */signed char) (~(((/* implicit */int) arr_56 [i_13 + 1] [19LL] [i_25 - 3]))));
                        arr_90 [(signed char)0] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((signed char) var_14));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_28 = 0; i_28 < 20; i_28 += 3) /* same iter space */
            {
                arr_94 [i_13] [i_13] [i_25] = ((/* implicit */unsigned char) var_7);
                /* LoopSeq 2 */
                for (unsigned char i_29 = 0; i_29 < 20; i_29 += 3) 
                {
                    var_41 = ((((/* implicit */int) arr_42 [i_13 + 1] [i_25 + 2])) / (arr_95 [i_25] [i_25]));
                    var_42 -= ((/* implicit */unsigned int) var_7);
                    var_43 = var_5;
                }
                for (unsigned short i_30 = 0; i_30 < 20; i_30 += 4) 
                {
                    var_44 *= ((/* implicit */unsigned char) arr_82 [i_13] [(short)12] [i_30]);
                    var_45 = ((/* implicit */int) (+(arr_87 [i_13 - 1] [i_25] [i_25] [i_30])));
                    arr_100 [i_25] = ((/* implicit */unsigned short) 5084555606851312159ULL);
                }
                arr_101 [i_25] [i_25] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3012990030520536798LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (1073741568) : (((/* implicit */int) (_Bool)1))))) : (arr_99 [i_13 + 1] [i_25 - 1] [i_28] [i_13 + 1])));
                var_46 = ((/* implicit */long long int) (+(arr_55 [i_13 + 1] [i_25] [i_25] [i_25])));
                arr_102 [i_25] [i_13] [i_25 - 1] [i_28] = ((/* implicit */signed char) (~(((/* implicit */int) arr_70 [12LL] [i_25 - 1] [2ULL]))));
            }
            for (unsigned char i_31 = 0; i_31 < 20; i_31 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    for (signed char i_33 = 3; i_33 < 19; i_33 += 2) 
                    {
                        {
                            arr_109 [i_13] [i_13] [i_25 - 3] [i_13] [i_32] [i_25] = ((/* implicit */long long int) arr_84 [12LL] [i_25] [i_25]);
                            var_47 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [(signed char)11] [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_25 + 2] [i_13 - 1]))) : (var_17)));
                            var_48 = ((/* implicit */int) var_2);
                        }
                    } 
                } 
                var_49 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_69 [i_31] [i_13]))))) ? (((((/* implicit */_Bool) (short)-1)) ? (var_10) : (((/* implicit */int) (unsigned char)168)))) : (((/* implicit */int) arr_54 [i_13 - 1] [i_13 + 1] [i_13 - 1]))));
                arr_110 [i_25] [i_25] = ((/* implicit */unsigned short) arr_92 [i_13] [i_25 - 1] [i_31]);
                /* LoopNest 2 */
                for (unsigned char i_34 = 0; i_34 < 20; i_34 += 1) 
                {
                    for (unsigned int i_35 = 0; i_35 < 20; i_35 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_81 [i_13 - 1] [i_25] [i_31])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_88 [i_13 - 1] [i_13] [i_13] [i_13])))))));
                            arr_117 [i_13] [i_25] [7ULL] [i_34] [i_34] [i_35] = arr_69 [17U] [i_34];
                        }
                    } 
                } 
            }
        }
        arr_118 [(short)7] = ((/* implicit */unsigned char) max((5084555606851312184ULL), (((/* implicit */unsigned long long int) (short)-32762))));
    }
    /* LoopNest 2 */
    for (short i_36 = 1; i_36 < 16; i_36 += 4) 
    {
        for (long long int i_37 = 4; i_37 < 17; i_37 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_38 = 0; i_38 < 0; i_38 += 1) 
                {
                    for (unsigned int i_39 = 2; i_39 < 16; i_39 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_36 - 1]))));
                            arr_128 [(unsigned char)6] [i_37] [i_38] [i_39 - 1] = ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned long long int) 3731719332069740418LL)) | (arr_115 [(unsigned char)18] [(unsigned char)18] [i_38] [i_39] [7LL] [i_39] [(short)6]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)699))))))) << (((max((((/* implicit */unsigned long long int) 3199386553735379708LL)), (arr_124 [i_39] [i_38] [i_37] [i_36]))) - (17257674773209683007ULL)))));
                            var_52 = ((/* implicit */unsigned long long int) arr_105 [i_39 + 2] [i_39 - 2] [i_37] [i_39 - 1] [i_39 - 1]);
                        }
                    } 
                } 
                arr_129 [i_36] [i_36] [i_36] = ((/* implicit */short) -3068151392911685759LL);
                var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) ((short) arr_54 [(signed char)13] [i_37 - 1] [i_37])))));
            }
        } 
    } 
}
