/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122896
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
    var_20 = ((/* implicit */_Bool) min((((var_2) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)5891)) || (((/* implicit */_Bool) (short)5906))))) : (((/* implicit */int) var_6)))), ((~(((/* implicit */int) min((var_10), (var_17))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_1 [(unsigned char)14])));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) min((0U), (((/* implicit */unsigned int) -2147483632))));
            var_23 = ((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_0]), (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1153241748)))))))));
            var_24 = ((_Bool) 2147483631);
        }
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_8 [i_0] [i_2] [i_3] |= ((/* implicit */long long int) arr_6 [i_0] [i_2] [i_2]);
                var_25 = ((/* implicit */int) arr_0 [i_3] [i_0]);
            }
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_26 *= ((/* implicit */_Bool) ((unsigned short) (short)(-32767 - 1)));
                        var_27 -= ((/* implicit */unsigned short) max(((unsigned char)154), (arr_14 [i_4])));
                    }
                    var_28 = ((/* implicit */_Bool) ((min(((+(var_18))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [(_Bool)1] [i_4] [i_5] [i_5])))))));
                }
                for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_8 = 1; i_8 < 14; i_8 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [i_2] [i_4] [i_7 + 3] [i_7] = ((/* implicit */unsigned short) (+(var_18)));
                        var_29 ^= ((/* implicit */unsigned long long int) var_13);
                        var_30 ^= ((/* implicit */int) max((((/* implicit */long long int) min((3021067543U), (((/* implicit */unsigned int) (unsigned char)119))))), (((((/* implicit */long long int) 2147483631)) + (-5962935356271353817LL)))));
                        var_31 = ((/* implicit */unsigned short) (short)-5892);
                    }
                    for (short i_9 = 1; i_9 < 14; i_9 += 2) /* same iter space */
                    {
                        var_32 *= ((/* implicit */_Bool) max((((arr_21 [i_9 + 1] [i_7 - 1] [i_4] [i_2] [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9 - 1] [i_4] [i_4] [i_7 + 3] [i_9 - 1] [i_4]))))), (((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9]))));
                        var_33 = ((/* implicit */short) 7432531550929390243LL);
                        var_34 = ((/* implicit */short) (_Bool)0);
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (short)5884)))))));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)-5892))) | (((/* implicit */int) arr_19 [i_2] [i_9] [i_9 - 1] [i_7 - 1] [i_7 + 3] [i_2])))))));
                    }
                    for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_19 [i_2] [i_7 + 1] [i_0] [i_7 + 2] [i_10] [i_10]), (((/* implicit */short) arr_20 [i_7 - 1] [i_4] [i_4] [i_7 + 2] [i_10] [i_10]))))) ? (((long long int) ((unsigned int) (_Bool)0))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                        var_38 -= ((/* implicit */unsigned int) var_1);
                        arr_28 [i_10] [i_10] [(unsigned char)0] [i_4] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_13)), ((unsigned short)48020)))))));
                        var_39 = ((/* implicit */short) var_15);
                        arr_29 [i_10] [i_7 + 2] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */short) arr_20 [i_7] [i_7] [i_7 + 3] [i_7 + 3] [i_7] [(short)9]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_40 = (short)0;
                        var_41 = ((/* implicit */short) var_7);
                        var_42 = ((/* implicit */unsigned long long int) -2147483631);
                    }
                    var_43 *= ((/* implicit */short) arr_13 [i_4] [i_4] [i_2]);
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_35 [i_7] [i_7] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (unsigned char)4);
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_26 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_7 + 3]))))) ? (((/* implicit */int) arr_33 [i_0] [i_0] [(short)4] [i_0] [i_2] [i_12] [i_12])) : (((/* implicit */int) (((~(((/* implicit */int) var_9)))) <= (max((arr_18 [i_7 + 1] [i_2] [i_4] [i_7 - 1] [i_12]), (0)))))))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) (unsigned char)119)) : (-2147483647))))))));
                        arr_38 [i_0] [i_0] [i_4] [i_0] [i_13] [i_7] [i_0] = ((/* implicit */_Bool) var_12);
                    }
                    arr_39 [i_0] [i_2] [i_7] [i_4] [i_7 + 3] [i_7 + 3] = (-9223372036854775807LL - 1LL);
                }
                /* vectorizable */
                for (short i_14 = 2; i_14 < 15; i_14 += 2) 
                {
                    var_46 = ((/* implicit */unsigned char) (unsigned short)17517);
                    /* LoopSeq 1 */
                    for (long long int i_15 = 2; i_15 < 14; i_15 += 4) 
                    {
                        arr_45 [i_2] [i_14 + 1] [i_4] [i_2] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        var_47 ^= ((/* implicit */long long int) ((((((/* implicit */int) var_5)) | (((/* implicit */int) var_16)))) | (((((/* implicit */int) var_17)) ^ (((/* implicit */int) arr_10 [i_2] [i_4] [i_2]))))));
                        var_48 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_14 + 1] [i_15] [i_14 + 1] [i_15] [i_15]))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        {
                            var_49 &= ((/* implicit */unsigned short) arr_27 [i_0] [i_2] [i_4] [i_16] [i_17]);
                            arr_50 [i_17] [i_16] [i_4] &= ((/* implicit */unsigned int) var_0);
                            var_50 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_16] [i_0] [i_16] [i_0] [i_0] [i_0])) / (((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_17] [i_16] [i_4] [i_2] [i_2] [i_0])), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0])))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_18 = 3; i_18 < 15; i_18 += 3) 
                {
                    var_51 = ((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)251), (((/* implicit */unsigned char) (_Bool)0))))) - (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)65514)), (var_1)))))));
                    var_52 = ((/* implicit */unsigned char) (~((((~(arr_9 [i_18 - 1] [i_4] [i_2] [(short)8]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 1; i_19 < 15; i_19 += 1) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned short) var_10);
                        arr_58 [i_0] [i_2] [i_4] [i_4] [i_4] [i_19 - 1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned short)65531)) - (65505))))));
                        var_54 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) / (var_18))), (((/* implicit */unsigned int) arr_55 [i_0] [i_2] [i_2] [i_18] [i_2] [i_18]))));
                    }
                    for (unsigned int i_20 = 1; i_20 < 15; i_20 += 1) /* same iter space */
                    {
                        var_55 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_12))))) != (((arr_7 [i_4] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [13ULL] [i_20]))) : (var_14)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_41 [i_0] [i_0] [i_4] [i_18 + 1] [i_20 - 1]) ? (((/* implicit */int) arr_11 [i_0] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)12))))) && ((((_Bool)0) || (((/* implicit */_Bool) var_3)))))))));
                        arr_63 [i_0] [i_2] [i_2] [8ULL] [i_18 - 3] [i_0] = ((/* implicit */long long int) (unsigned short)65508);
                        var_56 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) != (((/* implicit */int) ((arr_37 [i_2] [i_20 - 1] [i_20] [i_20 + 1] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
                    }
                    var_57 -= ((/* implicit */short) arr_37 [i_0] [i_0] [i_4] [i_0] [i_4]);
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_58 &= var_8;
                        var_59 = ((/* implicit */_Bool) ((arr_32 [i_4] [i_18 - 1]) ? (((/* implicit */int) (short)5)) : ((-2147483647 - 1))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_69 [(unsigned char)11] [(unsigned char)11] [i_2] [i_4] [i_18] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)136))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_42 [i_22] [i_18 - 3] [i_4] [i_0] [i_0] [i_0])) >> (((/* implicit */int) (unsigned char)16))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))));
                        arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned char)10);
                        var_60 = ((/* implicit */_Bool) arr_43 [i_18 - 2] [i_18 - 2] [6U] [i_4] [i_2]);
                    }
                    /* vectorizable */
                    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        var_61 = ((/* implicit */_Bool) ((unsigned int) (unsigned short)44571));
                        var_62 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_2] [i_4] [i_18] [i_23])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_0] [(unsigned short)8] [i_4] [i_18] [i_23])) && (((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) arr_20 [i_0] [i_23] [i_4] [i_18] [i_23] [i_18 - 1]))));
                        var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_57 [i_0] [i_2] [i_4] [i_4] [i_18 - 3] [i_23])) : (((/* implicit */int) arr_57 [i_0] [i_2] [i_4] [i_4] [i_18 - 3] [i_4]))));
                        arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_42 [i_18 + 1] [i_18 - 3] [i_18] [i_18 - 2] [i_18 + 1] [i_18 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_18] [i_2] [i_23] [i_0])) : (((/* implicit */int) (unsigned short)0))))));
                    }
                }
                /* vectorizable */
                for (long long int i_24 = 1; i_24 < 14; i_24 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        var_64 = var_16;
                        var_65 = ((/* implicit */unsigned short) var_3);
                        var_66 = arr_6 [i_0] [i_0] [i_2];
                        arr_80 [i_25 - 1] [i_4] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_6)) * (((/* implicit */int) var_12))))));
                    }
                    arr_81 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */int) arr_36 [i_0] [(short)4] [i_24 + 1] [i_24 - 1] [i_24 + 2] [i_24 + 2] [i_24])) : (((/* implicit */int) arr_36 [i_2] [i_2] [i_24 + 1] [i_24 - 1] [i_24 + 2] [i_24 + 2] [i_24 + 2]))));
                }
                for (unsigned int i_26 = 0; i_26 < 16; i_26 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        arr_88 [i_0] [i_27] [i_4] [i_26] [i_27 - 1] = ((/* implicit */_Bool) ((unsigned short) arr_79 [i_26] [i_2] [i_27 - 1] [i_26] [i_27 - 1]));
                        var_67 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_68 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)0)) == (((/* implicit */int) (unsigned char)119)))))) : (9223372036854775807LL))), (((/* implicit */long long int) arr_49 [i_28] [i_26] [i_4] [i_0] [i_0]))));
                        var_69 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) 7009941989616468871LL)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) var_13)))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_2] [i_2] [i_4] [i_26] [i_28]))))))));
                        var_70 = ((/* implicit */int) (unsigned char)1);
                        arr_92 [(short)12] = var_0;
                    }
                    for (short i_29 = 0; i_29 < 16; i_29 += 1) 
                    {
                        arr_95 [i_0] [i_2] [i_0] [i_26] [i_26] [i_29] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_4]);
                        arr_96 [i_4] [i_29] = ((/* implicit */unsigned char) var_8);
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        arr_100 [i_0] [i_2] [i_4] [i_26] [i_30] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_85 [i_0] [i_2] [i_0] [i_4] [i_26] [(_Bool)1] [(_Bool)1]))) / (arr_66 [i_2])))))) ? (((-7009941989616468865LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_30] [i_30] [i_26] [i_4] [(unsigned char)4] [i_0])))));
                        var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) ((((/* implicit */_Bool) ((var_14) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_30] [i_30]))))))));
                        arr_101 [i_0] [(unsigned char)9] [i_26] [i_26] [i_30] [i_2] [i_26] = ((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_2] [i_4] [i_26] [i_30]);
                        var_72 = ((/* implicit */unsigned int) arr_24 [4U] [i_0] [i_4] [i_4] [i_0] [i_0] [i_0]);
                        var_73 = ((/* implicit */_Bool) arr_14 [i_0]);
                    }
                    /* LoopSeq 3 */
                    for (short i_31 = 0; i_31 < 16; i_31 += 4) 
                    {
                        var_74 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_31])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_57 [i_0] [0ULL] [i_4] [(unsigned char)2] [i_31] [i_0])))));
                        var_75 = ((/* implicit */_Bool) var_16);
                        var_76 = min((var_0), (((unsigned short) (unsigned short)65534)));
                    }
                    /* vectorizable */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        arr_108 [i_0] [i_32] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0]))) : (9223372036854775807LL)));
                        arr_109 [i_0] [i_0] [i_32] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (arr_30 [i_32] [i_4] [i_32] [10U]) : (((/* implicit */int) arr_27 [i_32] [i_0] [i_4] [i_2] [i_0]))));
                    }
                    for (unsigned char i_33 = 0; i_33 < 16; i_33 += 1) 
                    {
                        arr_113 [i_0] [i_2] [i_0] [i_26] [i_0] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)59630)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (_Bool)1))))))));
                        arr_114 [i_0] [(unsigned short)7] [(unsigned short)7] [i_0] [i_33] &= ((min((((var_18) + (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_33] [i_33] [i_26] [i_26]))))), (((/* implicit */unsigned int) arr_49 [i_0] [i_2] [i_4] [i_26] [i_33])))) % (arr_9 [i_0] [(unsigned short)0] [i_4] [i_26]));
                        arr_115 [i_4] = ((/* implicit */unsigned short) var_14);
                        var_77 = ((/* implicit */int) var_14);
                    }
                    var_78 = ((/* implicit */short) var_14);
                    var_79 = ((/* implicit */unsigned int) (_Bool)1);
                    var_80 = ((/* implicit */_Bool) (((+(((/* implicit */int) max((var_7), ((_Bool)0)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))))))));
                }
            }
            var_81 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) + (arr_9 [i_0] [i_0] [i_0] [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (0U)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_73 [i_2] [i_2] [i_2] [i_2] [i_2]))));
            var_82 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3342)) && (((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_79 [i_0] [i_2] [i_2] [i_2] [(unsigned char)12]))))) : (((/* implicit */int) (unsigned char)247)))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_34 = 0; i_34 < 16; i_34 += 1) /* same iter space */
    {
        var_83 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (((((/* implicit */_Bool) arr_66 [i_34])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (~(27))))));
        var_84 = ((/* implicit */unsigned long long int) max((var_84), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_37 [i_34] [i_34] [i_34] [i_34] [0])))) ? (((/* implicit */int) (unsigned short)28432)) : (((/* implicit */int) (_Bool)0)))))));
    }
}
