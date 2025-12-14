/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153622
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (-(var_10)));
        var_18 += ((/* implicit */unsigned char) ((unsigned short) var_17));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            var_19 = ((/* implicit */long long int) (short)24226);
            arr_5 [i_0 - 2] [(signed char)3] = ((/* implicit */unsigned int) arr_1 [(signed char)8] [i_1]);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_3] [i_0] [(unsigned short)10] [i_0] [i_0 - 2] = ((/* implicit */short) arr_1 [i_0] [3ULL]);
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(((/* implicit */int) arr_12 [i_0 + 1] [(unsigned char)8])))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_3] [i_2] [i_3] [i_5] = ((/* implicit */short) (unsigned char)72);
                        arr_17 [i_3] [17U] [i_3] [(unsigned short)10] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_11 [(_Bool)1] [i_3] [i_2] [i_3] [i_5])))) >> (((/* implicit */int) arr_1 [i_2] [i_1]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        arr_20 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_18 [i_1] [10U]) : (((/* implicit */unsigned long long int) 691700917017937807LL))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_7 [12] [12] [12]))) & (6714298634239516620LL))) : (((/* implicit */long long int) (~(arr_3 [i_2]))))));
                        arr_21 [i_0] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)24226)) ? (((/* implicit */int) (unsigned short)32301)) : (((/* implicit */int) arr_4 [17LL]))))));
                    }
                }
                arr_22 [i_1] [i_1] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_8 [i_2] [i_2] [i_0])))) ? (((((/* implicit */_Bool) 458189942960589991LL)) ? (((/* implicit */int) (short)-24226)) : (((/* implicit */int) arr_14 [(short)4] [i_0] [i_2] [i_2] [i_2])))) : (((/* implicit */int) ((unsigned short) (unsigned short)6869)))));
                arr_23 [19LL] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_0 - 1]))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_27 [i_7] [i_7] [i_1] [i_0] = (+(((/* implicit */int) arr_9 [i_0])));
                arr_28 [1LL] [1LL] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_19 [i_0 - 2]))));
                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65535))));
                arr_29 [i_0] [i_1] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)5))));
            }
        }
        arr_30 [i_0 + 1] = ((/* implicit */signed char) (unsigned short)19);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58644)) + (((/* implicit */int) arr_12 [i_0 + 2] [i_0])))))));
    }
    /* vectorizable */
    for (short i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
    {
        arr_35 [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_24 [i_8 + 1] [i_8 - 1])) ^ (((/* implicit */int) ((_Bool) (_Bool)0)))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))))))))));
        arr_36 [10U] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) 1222449581U)))));
        arr_37 [i_8] [i_8] = ((/* implicit */unsigned int) ((int) (_Bool)1));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((int) arr_1 [i_9] [i_9]))) & (arr_34 [i_9])))));
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
        {
            arr_43 [i_9] [i_10] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) arr_4 [i_9])))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 1; i_11 < 17; i_11 += 1) 
            {
                arr_46 [i_9] [8U] [7LL] [i_11] = ((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */_Bool) arr_42 [i_9] [i_10] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_9] [15ULL] [i_9]))) : (3518605075U))), (((/* implicit */unsigned int) (unsigned short)6892)))));
                arr_47 [(signed char)12] [i_11] [i_11] [i_9] = (!(((/* implicit */_Bool) arr_11 [i_11 + 2] [i_11] [i_11] [i_9] [i_9])));
            }
            arr_48 [(short)17] [(unsigned short)16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_9]))))) >= ((-(((/* implicit */int) (short)-24217))))));
            var_25 = ((/* implicit */unsigned long long int) ((arr_15 [i_9] [i_10] [i_10]) / (min((min((((/* implicit */unsigned int) (unsigned short)2243)), (arr_38 [i_10] [i_9]))), (((/* implicit */unsigned int) ((arr_41 [(signed char)11] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) (unsigned short)58644)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (signed char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
        {
            arr_51 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_10 [i_9] [i_9] [i_9] [6U] [i_9] [i_12]), (arr_10 [i_9] [i_12] [i_9] [9LL] [i_9] [i_12])))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_7 [i_9] [(_Bool)1] [17]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_14 = 2; i_14 < 18; i_14 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-27900))));
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 19; i_15 += 3) /* same iter space */
                    {
                        arr_59 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_15 [(signed char)17] [(unsigned short)12] [i_14]))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_12]))) : (((/* implicit */int) (short)-24217))));
                        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58637)) - (((/* implicit */int) (unsigned char)148))))) ? ((-(((/* implicit */int) (unsigned short)6896)))) : (((/* implicit */int) ((_Bool) 876450292U)))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((arr_44 [i_15] [i_13] [i_12]) | (((/* implicit */long long int) ((/* implicit */int) (short)-24239))))))));
                        arr_60 [i_12] = ((/* implicit */unsigned short) ((((_Bool) 776362225U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27908))) : (arr_57 [7LL] [14] [i_13] [i_13] [i_13] [0LL])));
                        arr_61 [i_13] [6ULL] [i_12] [i_14] [i_13] = ((/* implicit */signed char) (unsigned short)51558);
                    }
                    for (int i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
                    {
                        var_29 *= ((/* implicit */unsigned char) ((short) arr_57 [i_14 - 1] [i_12] [i_14] [i_14 + 1] [i_14] [i_14 + 1]));
                        var_30 -= ((/* implicit */unsigned char) arr_50 [i_14] [i_12] [i_14]);
                        arr_64 [i_12] [(unsigned short)9] [(unsigned short)0] [i_12] [i_12] = ((/* implicit */unsigned char) arr_6 [i_16]);
                    }
                    arr_65 [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_12] [i_14 - 1] [i_14 - 2] [(_Bool)1] [i_14 - 1] [i_12]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        arr_69 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_14 + 1] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_9]))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((unsigned short) arr_15 [(_Bool)1] [i_14 - 1] [i_14])))));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11)))) | (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                    }
                }
                var_33 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((_Bool) 3518605044U))))), (((((/* implicit */_Bool) arr_34 [0LL])) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_9] [14ULL] [i_12] [8U] [i_13] [i_13] [i_12])))))));
                arr_70 [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) (short)24249);
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) * (((unsigned int) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 3; i_20 < 17; i_20 += 2) 
                    {
                        arr_78 [i_12] [(unsigned short)8] [i_12] [i_12] [i_12] [15] = ((/* implicit */_Bool) ((unsigned short) (-2147483647 - 1)));
                        arr_79 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_9])) & (((/* implicit */int) arr_68 [i_20 + 1] [(signed char)9] [(signed char)3] [13U] [18U] [(short)7] [4]))));
                    }
                    for (unsigned int i_21 = 1; i_21 < 18; i_21 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((((((/* implicit */_Bool) arr_24 [(unsigned short)1] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58644))) : (arr_38 [i_12] [i_21]))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_73 [i_9] [i_12])) & (var_5))))))));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (-(arr_76 [i_9] [i_21] [i_21] [i_21 + 1] [i_21 + 1] [i_9]))))));
                        arr_82 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)232)) ? (((((/* implicit */_Bool) arr_32 [(signed char)7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (short)-24239))))));
                    }
                    /* LoopSeq 4 */
                    for (int i_22 = 0; i_22 < 19; i_22 += 1) 
                    {
                        arr_86 [i_9] [(unsigned short)8] [(signed char)11] [i_19] [i_12] = ((/* implicit */unsigned long long int) 727009957U);
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58646))) | (arr_15 [i_12] [(unsigned short)14] [i_12]))))))));
                    }
                    for (unsigned int i_23 = 3; i_23 < 16; i_23 += 3) 
                    {
                        arr_90 [i_9] [(unsigned short)18] [i_9] [i_18] [i_9] [i_12] = ((/* implicit */unsigned long long int) arr_71 [i_12]);
                        arr_91 [i_12] [i_18] [(unsigned short)4] [i_19] [i_23] = ((/* implicit */short) ((1530737199) + (((/* implicit */int) arr_62 [i_12] [i_12] [5LL] [i_19] [i_23 - 2]))));
                    }
                    for (unsigned int i_24 = 0; i_24 < 19; i_24 += 2) 
                    {
                        var_38 += arr_74 [i_24] [i_19] [(unsigned short)6];
                        var_39 = ((/* implicit */long long int) (short)24226);
                        var_40 += ((((/* implicit */_Bool) (unsigned short)10702)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24239)));
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_9] [i_24])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_12] [i_12]))))))));
                        var_42 -= ((/* implicit */unsigned int) (-(arr_75 [i_18] [i_19])));
                    }
                    for (unsigned long long int i_25 = 2; i_25 < 17; i_25 += 2) 
                    {
                        arr_99 [(signed char)5] [i_19] [i_12] [i_12] [i_12] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((unsigned char) var_3));
                        var_43 -= ((/* implicit */unsigned short) ((unsigned int) arr_72 [i_25 + 2] [i_19] [i_18] [i_12]));
                        arr_100 [i_9] [i_12] [i_18] [i_12] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3260493310U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58646))) : (-7422741137242491810LL)));
                        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((/* implicit */int) arr_56 [6U] [(_Bool)1] [i_25 - 2])) & (((/* implicit */int) var_0)))))));
                    }
                    arr_101 [i_9] [(_Bool)1] [(_Bool)1] [i_12] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_9] [i_12] [16U])) ? (((/* implicit */int) (_Bool)1)) : (arr_75 [18] [18]))) ^ (var_7)));
                }
                for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_27 = 0; i_27 < 19; i_27 += 1) 
                    {
                        var_45 += ((/* implicit */unsigned short) ((((((/* implicit */int) (short)24260)) - (((/* implicit */int) (short)-24239)))) << (((var_4) - (1768440842U)))));
                        arr_108 [i_12] [(unsigned char)5] = ((((/* implicit */int) arr_92 [i_27] [4U] [i_12] [(_Bool)1] [i_27] [6])) / (((/* implicit */int) arr_103 [12U] [i_12] [i_18] [i_12] [i_12] [i_27])));
                        var_46 = ((/* implicit */short) (-(((int) var_10))));
                        var_47 = ((/* implicit */_Bool) ((unsigned short) (((_Bool)0) ? (arr_0 [i_27] [16]) : (((/* implicit */unsigned int) -773642523)))));
                    }
                    for (int i_28 = 0; i_28 < 19; i_28 += 2) /* same iter space */
                    {
                        arr_112 [6U] [1ULL] [i_18] [i_26] [i_12] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_9] [i_9] [12LL] [i_9] [17U]))) | (((((/* implicit */_Bool) (short)-24217)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_54 [i_12] [i_12] [i_12] [i_12] [i_12]))));
                        arr_113 [i_12] [i_12] [i_18] [4U] [i_28] = ((((((/* implicit */_Bool) (unsigned short)18985)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_93 [11U] [11U] [i_18] [i_26] [i_28]))) & (((/* implicit */unsigned int) ((((/* implicit */int) (short)15360)) ^ (((/* implicit */int) arr_97 [18U] [18U] [18U] [i_26] [i_28] [i_9] [6U]))))));
                        var_48 &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)50))));
                    }
                    for (int i_29 = 0; i_29 < 19; i_29 += 2) /* same iter space */
                    {
                        arr_118 [i_12] [i_12] = ((/* implicit */_Bool) arr_104 [i_9] [i_12] [i_18] [i_26] [i_29] [(_Bool)0] [i_9]);
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((_Bool) arr_52 [i_26] [i_9] [i_9] [i_9])))));
                        var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6892))))) ? ((~(((/* implicit */int) (short)-24207)))) : (((((/* implicit */int) arr_87 [i_9])) ^ (((/* implicit */int) (unsigned short)13986)))))))));
                        arr_119 [(_Bool)1] [i_12] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_109 [i_9] [i_26] [i_18] [(unsigned char)2] [i_29] [(_Bool)1]);
                        var_51 = ((/* implicit */unsigned int) (short)-24234);
                    }
                    arr_120 [i_9] [i_12] [2LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_15))) ? (((((arr_76 [i_12] [i_18] [i_18] [i_12] [i_12] [i_12]) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) 21ULL)))));
                    arr_121 [i_9] [i_12] [(unsigned short)8] [i_18] [(unsigned short)12] = ((long long int) (unsigned short)58644);
                    arr_122 [i_12] = (~(((/* implicit */int) (unsigned char)242)));
                }
                arr_123 [i_12] [i_12] [13U] = ((/* implicit */unsigned short) ((3739779507384973584LL) << ((((((-(((/* implicit */int) arr_117 [(_Bool)1] [i_12] [i_18] [(signed char)8] [i_18])))) + (4))) - (3)))));
                arr_124 [i_12] = ((/* implicit */_Bool) ((unsigned short) arr_74 [i_9] [i_9] [9ULL]));
            }
            arr_125 [i_12] = ((/* implicit */unsigned short) ((unsigned int) ((((var_2) + (((/* implicit */long long int) ((/* implicit */int) (signed char)61))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (arr_54 [i_12] [(unsigned short)10] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        }
        arr_126 [(short)18] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)58656))));
        arr_127 [i_9] [i_9] = ((/* implicit */long long int) arr_109 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    var_52 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_4)))));
}
