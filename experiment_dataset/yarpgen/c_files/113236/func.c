/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113236
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [7ULL] [i_1]))) + (((18446744073709551595ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) var_8))));
                            var_13 -= ((/* implicit */signed char) max((((long long int) arr_4 [i_3 - 1] [i_3 + 2] [i_0])), (((/* implicit */long long int) max(((-(((/* implicit */int) (short)-25196)))), (((/* implicit */int) var_2)))))));
                            arr_10 [i_3] [i_2 + 2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-108);
                            arr_11 [i_3 + 1] [i_2 - 1] [i_1] [i_1] [i_0] [i_0] = ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) + (arr_4 [i_1] [i_3] [i_1])));
                        }
                    } 
                } 
                var_14 *= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) arr_9 [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [(unsigned char)2] [(unsigned char)2] [i_0] [i_0] [6] [(unsigned char)2])))));
                var_15 = ((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_12 [i_5] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)-22399)))))));
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((short) max((((((/* implicit */int) (signed char)-114)) / (((/* implicit */int) arr_13 [4ULL])))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))));
                                arr_22 [i_8] [(unsigned short)4] [i_6] [(unsigned short)4] [i_5] [i_8] = ((/* implicit */_Bool) arr_19 [i_8] [i_5] [i_5] [i_4]);
                                var_18 = ((((((/* implicit */int) arr_16 [i_8] [i_6] [i_4] [i_4])) | (393216))) >= (min((((/* implicit */int) var_9)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)17108)))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_4] [i_4] = ((/* implicit */signed char) 4249674447U);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
    {
        arr_27 [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (var_3))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65)))));
        var_19 = ((short) 4294967295U);
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
    {
        arr_32 [i_10] = ((/* implicit */signed char) arr_30 [i_10] [i_10]);
        arr_33 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))));
        arr_34 [i_10] = ((/* implicit */short) (signed char)44);
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)1))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (short i_12 = 3; i_12 < 17; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_44 [i_14] [i_14] [(unsigned char)3] [i_13] [i_11] [i_11])) / (var_5)));
                        arr_47 [i_11] [i_12] [(signed char)12] [i_14] = ((/* implicit */short) ((arr_41 [i_12 + 3] [i_13]) ^ (arr_41 [i_11] [i_12 - 2])));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_11] [i_11] [i_11]))));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 4; i_16 < 19; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 19; i_18 += 1) 
                    {
                        {
                            arr_58 [i_11] [i_18] = ((/* implicit */int) arr_37 [i_18] [i_11]);
                            arr_59 [i_18 - 2] [i_18] [(_Bool)1] [i_18] [i_18] [i_18 - 1] = ((/* implicit */signed char) arr_48 [i_18] [i_18] [i_18 - 2]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (short i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                arr_64 [i_11] [i_11] [i_15] [i_11] = ((/* implicit */unsigned int) var_8);
                var_23 = ((/* implicit */long long int) var_7);
                arr_65 [i_11] = ((/* implicit */long long int) ((arr_57 [i_15] [i_11]) == (arr_57 [i_11] [i_11])));
            }
            for (long long int i_20 = 0; i_20 < 20; i_20 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 3) /* same iter space */
                {
                    arr_70 [i_20] [i_21] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_0))) | (((/* implicit */int) (short)-32300))));
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_15] [i_15] [i_15]))));
                    var_25 = ((/* implicit */short) arr_57 [i_15] [i_15]);
                    arr_71 [i_21] [i_15] [i_15] [i_15] = ((/* implicit */short) ((_Bool) arr_63 [i_20]));
                }
                for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 3) /* same iter space */
                {
                    var_26 ^= ((/* implicit */signed char) ((((unsigned long long int) 2147483647)) >> ((((~(((/* implicit */int) var_0)))) + (36)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_23 = 0; i_23 < 20; i_23 += 3) 
                    {
                        arr_78 [i_23] [i_22] [i_20] [i_15] [i_15] [i_11] = arr_68 [i_15] [2] [2] [i_23];
                        arr_79 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) var_7);
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) >= (337334788515896858LL))))));
                    }
                    for (unsigned char i_24 = 1; i_24 < 18; i_24 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) var_1);
                        arr_83 [(short)1] [(short)1] [i_20] [19] [i_22] [(short)1] = ((/* implicit */unsigned int) (-(2663102938029981828ULL)));
                    }
                    arr_84 [i_22] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_73 [i_22])) ^ (((((/* implicit */int) arr_72 [i_22] [i_11] [(unsigned short)9] [i_15] [i_11] [i_11])) & (((/* implicit */int) arr_46 [i_22] [i_20] [i_11] [i_11]))))));
                }
                for (signed char i_25 = 1; i_25 < 18; i_25 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_26 = 0; i_26 < 20; i_26 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) var_0);
                        arr_90 [i_11] [i_15] [i_20] [i_25 - 1] [i_26] = ((/* implicit */short) 4322658376742432693LL);
                    }
                    for (short i_27 = 0; i_27 < 20; i_27 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (~(arr_50 [i_25 + 1] [i_25 + 1] [i_20]))))));
                        var_31 = ((/* implicit */unsigned int) var_9);
                        arr_94 [i_15] [i_20] [i_15] |= ((/* implicit */int) arr_67 [i_15] [i_11]);
                    }
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((unsigned char) (unsigned short)11)))));
                    var_33 = ((/* implicit */short) (signed char)16);
                    arr_95 [i_11] [i_11] [4U] [i_11] [4U] [i_25 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_25 - 1] [8ULL] [i_25 + 2] [i_25] [i_25 + 1] [i_25 - 1])) && (((/* implicit */_Bool) arr_44 [i_25 - 1] [i_25] [i_25 + 2] [i_25 - 1] [i_25 + 1] [i_25 - 1]))));
                    arr_96 [i_11] [i_20] [i_15] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_25 - 1] [i_25 - 1] [i_25] [i_25 + 1] [i_25] [i_25 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_72 [i_25 + 2] [i_25 + 2] [i_25 + 2] [i_25 + 2] [i_25] [i_25]))));
                }
                for (unsigned char i_28 = 0; i_28 < 20; i_28 += 1) 
                {
                    var_34 *= ((/* implicit */unsigned char) (~(var_1)));
                    var_35 ^= ((/* implicit */_Bool) arr_66 [i_20]);
                }
                arr_99 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_73 [i_11]))));
            }
            for (long long int i_29 = 0; i_29 < 20; i_29 += 3) /* same iter space */
            {
                arr_103 [i_11] [i_11] [i_29] = ((/* implicit */unsigned long long int) var_0);
                /* LoopSeq 2 */
                for (unsigned char i_30 = 0; i_30 < 20; i_30 += 3) 
                {
                    arr_108 [i_29] [(_Bool)1] [4U] [i_30] = ((/* implicit */signed char) arr_36 [i_30]);
                    arr_109 [i_30] [i_29] [i_29] [i_29] [i_11] = ((/* implicit */_Bool) ((long long int) arr_57 [i_11] [i_29]));
                }
                for (unsigned short i_31 = 2; i_31 < 18; i_31 += 2) 
                {
                    arr_114 [i_29] [i_29] [i_29] [i_29] [i_11] = ((/* implicit */long long int) var_11);
                    var_36 = ((/* implicit */short) ((int) (signed char)-127));
                }
                arr_115 [i_29] [i_11] [(short)19] [(short)10] = ((/* implicit */short) var_3);
            }
            var_37 = ((/* implicit */short) arr_101 [5U] [(unsigned char)16] [i_15] [i_15]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_32 = 0; i_32 < 20; i_32 += 2) 
        {
            for (unsigned char i_33 = 1; i_33 < 17; i_33 += 1) 
            {
                {
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) arr_119 [i_33 + 1] [i_33 + 1] [i_32]))));
                    arr_121 [i_33] [i_32] = ((/* implicit */signed char) var_0);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_34 = 1; i_34 < 12; i_34 += 4) 
    {
        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0)))))));
        arr_124 [i_34] = ((/* implicit */unsigned long long int) (signed char)-25);
    }
    for (unsigned short i_35 = 0; i_35 < 10; i_35 += 4) 
    {
        arr_127 [i_35] = ((((/* implicit */int) (!(((/* implicit */_Bool) (short)18638))))) >= (((/* implicit */int) ((var_1) != (((/* implicit */int) var_0))))));
        arr_128 [i_35] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_3)))));
        var_40 = ((/* implicit */long long int) arr_74 [i_35] [i_35]);
        var_41 = ((/* implicit */unsigned int) arr_110 [i_35] [i_35]);
    }
    for (unsigned int i_36 = 0; i_36 < 18; i_36 += 4) 
    {
        var_42 = ((/* implicit */unsigned int) arr_112 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36]);
        arr_132 [i_36] [i_36] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_116 [i_36] [i_36]), (arr_116 [i_36] [i_36])))) - (((/* implicit */int) arr_49 [i_36] [i_36] [i_36]))));
        arr_133 [i_36] = min(((+(min((((/* implicit */unsigned long long int) -1616589260)), (18446744073709551615ULL))))), (((unsigned long long int) (-(var_4)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_37 = 1; i_37 < 16; i_37 += 1) 
        {
            var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) arr_57 [i_36] [i_37 + 2]))));
            /* LoopNest 2 */
            for (short i_38 = 1; i_38 < 17; i_38 += 2) 
            {
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    {
                        arr_146 [i_39] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)108))));
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1))));
                        var_45 = ((/* implicit */unsigned char) (~(arr_142 [i_37 - 1])));
                        arr_147 [i_37 + 1] [i_37 - 1] [i_37] [i_37] [8] [8] = ((/* implicit */int) ((unsigned long long int) arr_72 [i_36] [i_36] [i_38 - 1] [i_36] [i_38 - 1] [i_38 - 1]));
                    }
                } 
            } 
        }
    }
    var_46 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) (short)-24560)), (268435456U)))))));
}
