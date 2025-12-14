/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127986
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) (unsigned char)144))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))));
            arr_4 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_0 [i_1])) ? (((2494494330774520261LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))));
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_1 [(signed char)7])))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_2))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_15 = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_2] [i_2] [i_3]))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_15 [i_4] [i_4] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_6))))));
                            arr_16 [i_4] [(short)9] [i_4] [i_5] = ((/* implicit */unsigned char) 15028511127390085041ULL);
                            arr_17 [5ULL] [i_5] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)18]))) : (((((/* implicit */_Bool) arr_8 [i_3] [i_2] [15U])) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_4] [(signed char)9])))))));
                            arr_18 [i_5] [i_5] [i_2] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)43039))));
                            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)0))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-3)) & (((/* implicit */int) arr_13 [i_0] [i_3] [i_3] [(unsigned char)0] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_3])) : (var_8)));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((unsigned short) (+(arr_11 [i_0] [i_3] [i_0] [i_7]))));
                            arr_24 [i_7] [i_6] [i_3] [i_2] [i_2] [3LL] [i_0] = ((/* implicit */unsigned char) (+(((arr_11 [i_2] [i_0] [i_6] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)101)) ? (-1182327562715066979LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_2] [i_8] [i_8])))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (2768331313U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22282)))));
                /* LoopSeq 3 */
                for (long long int i_9 = 1; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    arr_29 [i_9] [i_9] [i_2] [i_2] [i_9] = ((/* implicit */short) (_Bool)1);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_8] [i_0]))));
                }
                for (long long int i_10 = 1; i_10 < 17; i_10 += 3) /* same iter space */
                {
                    var_21 *= ((/* implicit */unsigned long long int) (signed char)22);
                    arr_32 [i_0] [i_0] [(signed char)15] [i_0] [i_0] = ((/* implicit */int) arr_14 [i_0] [2] [i_8] [i_0] [(unsigned char)8]);
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((_Bool) 5792573846735756822LL)) ? ((-(((/* implicit */int) arr_0 [(unsigned char)13])))) : ((-(((/* implicit */int) (unsigned short)15)))))))));
                    arr_33 [i_8] [i_8] = ((/* implicit */short) (!(arr_28 [i_0] [i_2] [i_10 + 2])));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_10 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_0))))) : (arr_23 [i_10 - 1] [i_10 - 1] [i_2] [i_10 - 1] [i_10]))))));
                }
                for (long long int i_11 = 1; i_11 < 17; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)16990)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0] [i_2] [i_8] [i_8] [i_11]))))));
                        arr_39 [i_11] [i_2] [i_8] [i_2] [i_8] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_2] [i_11 + 1])) ? (arr_38 [i_11 - 1] [i_11] [(signed char)8] [i_11 + 2] [i_12]) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_38 [i_2] [i_11] [i_2] [i_11 + 2] [i_12]) : (((/* implicit */long long int) 394849297))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11])) ? (((/* implicit */int) arr_25 [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11])) : (((/* implicit */int) (_Bool)1))));
                    arr_40 [i_8] [i_2] [i_11] [i_11 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_11])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_34 [14LL] [i_8] [i_8] [i_0])))) : ((-(((/* implicit */int) arr_1 [i_8])))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_4))))) < ((-(((/* implicit */int) arr_25 [i_0] [i_2] [i_8] [i_13]))))));
                            var_28 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_41 [i_0] [i_2] [i_8] [i_13])) ? (((/* implicit */unsigned long long int) arr_9 [i_14])) : (arr_5 [i_13] [i_14])))));
                            var_29 = ((/* implicit */short) arr_37 [i_14] [i_13] [i_14] [i_14] [i_2] [i_0]);
                        }
                    } 
                } 
                var_30 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)14690))));
            }
            arr_45 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1526635982U)))) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_0] [i_2] [i_0]))))))));
        }
    }
    for (long long int i_15 = 1; i_15 < 23; i_15 += 2) 
    {
        arr_49 [i_15] = ((/* implicit */unsigned short) var_3);
        var_31 = ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)0)))) & (((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41769))) : ((-(1905336062U))));
        var_32 = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)23788)) ^ (((/* implicit */int) (signed char)-1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1080863910568919040LL)) ? (((/* implicit */int) arr_47 [i_15] [i_15])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_48 [i_15])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_7))))))));
        arr_50 [i_15] [i_15] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_48 [i_15])) ? (arr_48 [i_15]) : (arr_48 [i_15])))));
    }
    for (unsigned char i_16 = 0; i_16 < 16; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((unsigned short) var_6));
                        arr_62 [i_16] [i_18 + 1] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) ((726108495212536740ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)0] [i_16] [(unsigned char)12]))))))));
                        arr_63 [i_16] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))))) : (arr_59 [i_16] [i_17] [i_18])));
                        var_34 = ((/* implicit */short) 4096U);
                        arr_64 [i_19] [i_16] [i_18] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_18] [i_16] [i_18 - 1] [i_19])) ? (((/* implicit */int) (unsigned short)60523)) : (((/* implicit */int) arr_34 [i_18 + 3] [i_16] [i_18 - 1] [i_17]))));
                    }
                    arr_65 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */short) (!(((((/* implicit */_Bool) -1320332882)) && ((_Bool)0)))));
                }
            } 
        } 
        arr_66 [i_16] [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_26 [i_16] [i_16] [i_16] [i_16]))));
    }
    var_35 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
    {
        for (unsigned short i_21 = 0; i_21 < 22; i_21 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_23 = 0; i_23 < 22; i_23 += 3) 
                    {
                        arr_79 [i_20] [i_22] [i_20] = (~(((/* implicit */int) (_Bool)1)));
                        arr_80 [i_21] [i_21] [i_21] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_78 [i_22] [i_21])) ? (arr_48 [i_21]) : (arr_48 [i_21])));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))));
                        var_37 = ((/* implicit */int) var_4);
                        /* LoopSeq 3 */
                        for (unsigned char i_24 = 0; i_24 < 22; i_24 += 4) 
                        {
                            arr_84 [i_22] [i_23] = ((/* implicit */unsigned long long int) ((arr_83 [i_23] [i_24]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_20])))));
                            arr_85 [i_24] [i_21] [i_22] [i_21] [i_20] = (+(((/* implicit */int) arr_47 [i_22] [i_21])));
                            arr_86 [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_20] [i_22])) ? (((/* implicit */int) arr_67 [i_24] [i_23])) : (((/* implicit */int) arr_76 [i_24] [i_23] [i_22] [i_21]))));
                            arr_87 [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_70 [i_20] [i_22])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_46 [i_20])))) : (((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (unsigned short)32768)) - (32768)))))));
                        }
                        for (unsigned long long int i_25 = 2; i_25 < 21; i_25 += 3) 
                        {
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (unsigned short)59709))));
                            arr_91 [i_25] [i_25] [i_25] [i_20] = ((((/* implicit */_Bool) arr_83 [i_25 + 1] [i_25 - 1])) ? (arr_83 [i_25 - 1] [i_25 + 1]) : (arr_83 [i_25 - 1] [i_25 + 1]));
                        }
                        for (short i_26 = 0; i_26 < 22; i_26 += 2) 
                        {
                            arr_95 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_70 [i_26] [i_26])) ? (((/* implicit */int) arr_70 [i_21] [i_22])) : (((/* implicit */int) arr_70 [i_21] [i_26]))));
                            var_39 = ((/* implicit */long long int) arr_71 [i_23] [i_20] [i_21]);
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (5792573846735756837LL) : (((/* implicit */long long int) 4294967286U))));
                            arr_96 [i_26] [i_23] [i_22] [i_21] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((arr_83 [i_22] [i_23]) != (arr_83 [i_20] [i_20])));
                        }
                    }
                    for (unsigned int i_27 = 0; i_27 < 22; i_27 += 3) 
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (signed char)0))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_93 [i_20])) - (((/* implicit */int) arr_47 [i_27] [i_21]))));
                    }
                    var_43 = ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (long long int i_28 = 0; i_28 < 22; i_28 += 2) 
                    {
                        arr_102 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 805306368U)) ? (3392930900U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)117)) >= (((/* implicit */int) (unsigned char)21))));
                        var_45 = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_103 [i_22] [i_22] [i_22] [i_22] = (+(((/* implicit */int) var_5)));
                    }
                }
                arr_104 [i_20] [i_21] [i_21] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_76 [i_20] [i_21] [i_21] [i_20])), (var_9))))))));
            }
        } 
    } 
}
