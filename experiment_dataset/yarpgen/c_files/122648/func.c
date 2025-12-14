/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122648
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_2] = ((unsigned char) arr_3 [9U] [i_0]);
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> (((/* implicit */int) ((unsigned char) (short)15)))));
                            var_12 = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                        }
                    } 
                } 
                var_13 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0 - 2] [i_2 + 1] [i_2])) * (((/* implicit */int) arr_8 [i_0 + 3] [i_2 + 1] [i_2]))));
                arr_15 [i_2] = ((/* implicit */short) var_8);
            }
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_5] [i_7] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_7] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) / (((/* implicit */int) var_3))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16579)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 + 2]))) : (634744151346131908LL)));
                            arr_26 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_7] [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_6] [i_7 + 1] [i_7] [i_7] [i_7 - 3]))));
                            arr_27 [i_0] [i_0] [(unsigned char)9] [i_7] [1LL] = arr_20 [i_0] [i_0] [i_0] [i_0];
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */long long int) var_9);
            var_16 = ((/* implicit */short) var_6);
            arr_28 [i_0] = ((/* implicit */short) (~(var_7)));
        }
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_9 = 3; i_9 < 18; i_9 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (arr_6 [i_0] [i_0] [i_9])));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    for (long long int i_11 = 2; i_11 < 15; i_11 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned short) var_7);
                            arr_39 [i_9] [3U] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) arr_30 [i_9]))));
                            arr_40 [i_9] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) var_1);
                            arr_41 [i_8] [i_9] = ((/* implicit */long long int) arr_4 [i_10]);
                            var_19 = (-(arr_37 [i_0] [i_0] [i_0 - 4] [i_9] [i_9 - 2] [i_11 - 1]));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0 + 2] [i_9] [i_0 + 2]))) | (((((-6089137112511574576LL) + (9223372036854775807LL))) >> (((634744151346131912LL) - (634744151346131892LL)))))));
            }
            for (signed char i_12 = 3; i_12 < 18; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_13 = 2; i_13 < 18; i_13 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_0 - 1]));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))))) : (((/* implicit */int) (signed char)-66))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)52)) && (((/* implicit */_Bool) arr_29 [i_12 + 1])))))));
                    arr_46 [i_13] [i_12] [i_12] [i_0] = ((/* implicit */unsigned int) arr_30 [i_0]);
                }
                for (unsigned char i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    arr_49 [i_12] [i_8] [i_12] [i_8] [(short)2] [i_8] = ((/* implicit */unsigned short) var_3);
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 2; i_15 < 17; i_15 += 2) 
                    {
                        var_24 = ((/* implicit */short) var_8);
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2923535861U)) ? (((/* implicit */int) (short)2359)) : (((/* implicit */int) (signed char)123)))) * (((/* implicit */int) (short)7))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16579))) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 4107067797U)) != (-453989419795566533LL))))) : (arr_33 [i_14]))))));
                        var_27 = arr_37 [i_0] [i_8] [i_12] [i_12] [i_14] [i_15 + 1];
                    }
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31995)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_12] [0U] [i_12] [i_12 + 1] [(unsigned char)0])) ? (arr_42 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    }
                    for (unsigned short i_17 = 2; i_17 < 16; i_17 += 2) 
                    {
                        var_30 = ((/* implicit */short) var_1);
                        arr_56 [i_12] [i_14] [i_12] [i_8] [i_0] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                        arr_57 [i_0] [i_8] [(unsigned char)13] [i_8] [i_12] = var_9;
                    }
                }
                for (unsigned char i_18 = 1; i_18 < 16; i_18 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        var_31 += (short)-5090;
                        var_32 = ((/* implicit */unsigned int) ((unsigned char) arr_59 [i_0] [i_8] [i_12] [(short)2] [i_19]));
                    }
                    for (unsigned short i_20 = 1; i_20 < 18; i_20 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65428)) ? (((/* implicit */int) arr_60 [(unsigned char)18] [(unsigned char)18] [i_12] [i_18] [(unsigned char)18] [i_8])) : (((/* implicit */int) (short)2372)))))));
                        var_34 = ((/* implicit */long long int) var_10);
                    }
                    var_35 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)249))));
                    var_36 += ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))));
                }
                var_37 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0 + 1]))));
                var_38 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_9))));
                var_39 *= ((/* implicit */short) (signed char)68);
            }
            for (unsigned int i_21 = 1; i_21 < 18; i_21 += 2) 
            {
                var_40 |= ((/* implicit */long long int) (~(arr_20 [i_21 - 1] [i_0 - 3] [i_0 + 3] [i_0])));
                arr_71 [i_0] [i_21] = ((/* implicit */signed char) (short)18755);
                var_41 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)2368)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                /* LoopSeq 2 */
                for (short i_22 = 0; i_22 < 19; i_22 += 2) 
                {
                    arr_76 [i_0] [2U] [i_21] [8U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_21 + 1] [i_21] [i_21 - 1] [i_21 + 1]))) : (var_0)));
                    var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_66 [4U] [i_21] [i_21] [4U] [i_22])) && (((/* implicit */_Bool) var_2)))))));
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) arr_73 [i_21] [i_0 - 3] [i_21 - 1] [i_0] [i_21])) : (((/* implicit */int) arr_44 [i_0 - 4] [i_0] [i_0 + 2] [i_21] [i_22]))));
                    arr_77 [i_22] [i_21] [i_21] [(unsigned char)10] = var_7;
                }
                for (unsigned int i_23 = 1; i_23 < 18; i_23 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_24 = 0; i_24 < 19; i_24 += 2) /* same iter space */
                    {
                        arr_82 [i_21] [i_8] [i_21] [i_8] [i_23] [i_24] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_8] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_20 [18LL] [i_8] [i_21] [i_24])) ? (7559708120618210583LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-22016)))));
                        arr_83 [i_24] [i_21] [i_8] [12U] [i_21] [i_0] = ((/* implicit */short) (signed char)120);
                    }
                    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */signed char) (-(((/* implicit */int) (short)10114))));
                        var_45 = ((/* implicit */unsigned int) min((var_45), ((((!(((/* implicit */_Bool) arr_44 [i_0] [(signed char)10] [i_21] [i_8] [i_25])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_0] [i_23]))) : (arr_2 [i_8] [i_8])))))));
                        var_46 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) arr_31 [i_21]))));
                    }
                    for (unsigned int i_26 = 0; i_26 < 19; i_26 += 2) /* same iter space */
                    {
                        arr_90 [i_26] [i_21] [i_21] [i_23] [17LL] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_19 [i_26] [i_21] [i_0] [i_0])) | (((/* implicit */int) var_1))))));
                        arr_91 [i_26] [i_23] [i_21] [i_21] [i_21] [i_8] [i_0 + 3] = ((/* implicit */signed char) arr_33 [i_21]);
                    }
                    arr_92 [i_0] [(short)2] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_23 + 1] [i_21] [i_8] [i_21] [5U])) ? (((/* implicit */long long int) arr_78 [i_21] [i_21 - 1] [(short)6] [i_21])) : (arr_47 [i_8] [i_21] [i_8] [i_8] [i_8])));
                }
            }
            var_47 = arr_54 [i_8] [i_0] [i_8] [i_0] [i_0];
            /* LoopNest 2 */
            for (unsigned int i_27 = 0; i_27 < 19; i_27 += 2) 
            {
                for (long long int i_28 = 1; i_28 < 15; i_28 += 2) 
                {
                    {
                        var_48 = ((unsigned int) (signed char)-121);
                        /* LoopSeq 2 */
                        for (short i_29 = 1; i_29 < 18; i_29 += 2) 
                        {
                            var_49 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_101 [(short)13] [i_28] [i_27] [i_28] [i_0 - 1]))));
                            arr_102 [i_28] [i_28] [i_28] [i_8] [i_28] = var_0;
                        }
                        for (unsigned char i_30 = 1; i_30 < 17; i_30 += 2) 
                        {
                            var_50 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_70 [i_8] [i_28] [i_8])) + (((/* implicit */int) arr_8 [i_8] [(unsigned char)8] [i_8]))))) ? (((/* implicit */long long int) 11U)) : (var_7)));
                            var_51 = ((/* implicit */signed char) var_8);
                            arr_106 [(unsigned short)5] [i_28] [i_27] [i_27] [i_28] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-12191)) | (((/* implicit */int) (short)-6))));
                        }
                        arr_107 [i_0] [i_28] [i_0] = ((/* implicit */unsigned int) var_10);
                    }
                } 
            } 
        }
        arr_108 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_45 [i_0]))));
        arr_109 [i_0] [i_0] = ((/* implicit */signed char) ((arr_75 [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0]) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [i_0])))))));
        var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) (-(((/* implicit */int) var_4)))))));
    }
    var_53 &= (short)-2375;
    var_54 = (~((((-(2078867143U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    for (unsigned int i_31 = 0; i_31 < 18; i_31 += 2) 
    {
        var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21261))) : (var_2)))), (var_7))))));
        var_56 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_70 [i_31] [(short)0] [i_31])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-9983)) < (((/* implicit */int) arr_8 [i_31] [i_31] [i_31]))))) : (((/* implicit */int) (short)-9000))))) ? ((~(((arr_68 [i_31] [i_31] [(short)18] [i_31]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_93 [(short)7] [i_31] [(short)7]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) arr_35 [i_31] [i_31] [i_31])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_32 = 1; i_32 < 17; i_32 += 2) 
        {
            arr_115 [i_32] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)15408))))) ? ((+(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) var_6))))));
            arr_116 [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_99 [i_31] [i_31] [i_32] [i_31]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_31] [i_32] [i_32] [i_32])))))) ? (arr_47 [i_32] [i_32] [8LL] [i_32] [i_32 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)3889)))));
        }
    }
    /* vectorizable */
    for (unsigned int i_33 = 3; i_33 < 22; i_33 += 2) 
    {
        var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_118 [i_33])) / (((/* implicit */int) arr_117 [i_33])))) : (((((/* implicit */_Bool) arr_117 [i_33])) ? (((/* implicit */int) (short)-24)) : (((/* implicit */int) arr_118 [i_33]))))));
        /* LoopNest 3 */
        for (short i_34 = 0; i_34 < 25; i_34 += 2) 
        {
            for (unsigned int i_35 = 0; i_35 < 25; i_35 += 2) 
            {
                for (unsigned short i_36 = 1; i_36 < 23; i_36 += 2) 
                {
                    {
                        var_58 = (short)-2375;
                        /* LoopSeq 1 */
                        for (short i_37 = 0; i_37 < 25; i_37 += 2) 
                        {
                            arr_131 [i_33] [i_33] [i_35] [i_33] [i_33] = ((/* implicit */unsigned int) var_5);
                            arr_132 [i_33] [i_33] [i_35] [(unsigned char)22] [i_33] [i_35] = ((/* implicit */short) (-(((/* implicit */int) (short)18))));
                        }
                        var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) var_9))));
                    }
                } 
            } 
        } 
        var_60 = ((((/* implicit */_Bool) var_1)) ? (((unsigned int) (signed char)17)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))));
        /* LoopNest 2 */
        for (short i_38 = 0; i_38 < 25; i_38 += 2) 
        {
            for (unsigned int i_39 = 3; i_39 < 23; i_39 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_40 = 0; i_40 < 25; i_40 += 2) 
                    {
                        arr_141 [i_33] [i_33] [(short)22] [17U] [i_39] [i_40] = ((/* implicit */short) (-(((/* implicit */int) (short)9013))));
                        /* LoopSeq 1 */
                        for (unsigned char i_41 = 0; i_41 < 25; i_41 += 2) 
                        {
                            var_61 ^= ((/* implicit */long long int) (-(arr_120 [i_41] [i_39 + 1] [i_39 + 1])));
                            arr_146 [i_33] [i_33] [i_33] [i_40] [i_41] = ((/* implicit */short) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) arr_124 [(signed char)5] [i_33] [i_39 - 3])) : (((/* implicit */int) var_10))));
                            arr_147 [i_33] [i_38] [i_39] [i_33] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_122 [i_33]) : (arr_122 [i_33])));
                        }
                    }
                    var_62 = var_3;
                    arr_148 [i_33] [21U] [i_33] = ((/* implicit */long long int) (~(((/* implicit */int) arr_144 [i_39 - 2] [i_33] [i_33 + 1] [i_33] [i_33]))));
                }
            } 
        } 
        var_63 = ((/* implicit */short) ((unsigned int) arr_117 [i_33]));
    }
}
