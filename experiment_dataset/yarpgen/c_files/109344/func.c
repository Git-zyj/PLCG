/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109344
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(882469217))))));
        var_14 = (((~(min((((/* implicit */unsigned int) var_9)), (4294967295U))))) & (((unsigned int) max((var_0), (4294967289U)))));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((var_12), (((/* implicit */int) var_2)))) <= (((/* implicit */int) (!((_Bool)1)))))))) + (var_7)));
    var_16 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((~(480U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)16295), (((/* implicit */unsigned short) (_Bool)1)))))))))));
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_17 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 17U)) ? (arr_0 [i_3] [(unsigned char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [6U])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_18 *= ((/* implicit */unsigned char) arr_2 [i_1]);
                        var_19 = ((/* implicit */unsigned char) (_Bool)1);
                        var_20 = (_Bool)1;
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_18 [i_6] [i_6] [i_3] [(unsigned char)5] [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_6 [i_1]))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_12 [(_Bool)1] [i_1]))) ? (((((/* implicit */_Bool) (unsigned char)204)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58658)))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_12 [i_1] [7U]))));
                    }
                    arr_19 [i_4] [i_3] [i_1] = ((/* implicit */unsigned short) ((_Bool) var_2));
                }
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        arr_25 [i_1] [i_2] [10U] [i_7] [i_8] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_26 [(_Bool)1] [i_7] [4U] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_23 = 4294967285U;
                    var_24 = arr_0 [i_1] [i_2];
                    arr_27 [(_Bool)1] [i_7] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) arr_7 [i_7] [i_3] [i_1]);
                    arr_28 [i_1] [i_2] [i_3] [i_1] = arr_5 [i_3] [i_2];
                }
                for (unsigned short i_9 = 4; i_9 < 10; i_9 += 4) 
                {
                    var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [4U] [i_9]))));
                    var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (arr_20 [i_1] [i_1] [i_3] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))))));
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [11U])) ? (((/* implicit */int) (unsigned short)42367)) : (((/* implicit */int) arr_4 [i_10] [i_2])))) : (((/* implicit */int) (unsigned short)18810))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(4294967282U))))));
                    var_29 = ((/* implicit */unsigned int) var_9);
                    var_30 = ((/* implicit */short) arr_6 [i_1]);
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_31 = (_Bool)1;
                    var_32 = ((/* implicit */unsigned int) (unsigned char)20);
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_2] [(unsigned char)6] [i_3] [i_2] [i_1])))))));
                }
            }
            for (int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                arr_37 [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) arr_30 [i_12] [i_2] [i_2] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) : (4294967288U));
                arr_38 [i_1] [i_1] [i_2] [i_12] = ((/* implicit */_Bool) arr_9 [i_12] [i_2] [i_2] [i_1]);
                arr_39 [i_1] [i_2] = ((_Bool) arr_10 [i_1] [i_1] [(_Bool)1] [i_1]);
                /* LoopSeq 2 */
                for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    arr_42 [i_2] = ((/* implicit */unsigned short) (unsigned char)166);
                    arr_43 [(unsigned short)11] [i_1] [(unsigned char)3] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((arr_17 [i_1] [i_1] [i_1] [i_12] [i_13] [i_13]) + (2147483647))) << (((arr_35 [i_1]) - (691571451U)))));
                    arr_44 [i_13] = ((/* implicit */unsigned char) var_2);
                    var_34 = ((/* implicit */unsigned short) (((_Bool)1) ? (((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159)))));
                    arr_45 [i_12] [i_2] [i_2] [i_13] [2U] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (unsigned char)255))));
                }
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    arr_48 [i_1] [i_2] [i_12] [(_Bool)1] [i_2] |= ((/* implicit */short) ((arr_4 [i_12] [i_2]) ? (((/* implicit */int) arr_4 [i_12] [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_14]))));
                    var_35 = ((/* implicit */unsigned char) arr_23 [i_14] [i_2] [i_2] [(unsigned short)2]);
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((unsigned short) arr_13 [i_2])))));
                }
                arr_49 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)128);
            }
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        {
                            var_37 = ((unsigned int) (-(4228256779U)));
                            arr_58 [i_17] [i_16] [(_Bool)1] [i_2] [i_2] [i_1] = arr_9 [i_15] [i_15] [i_15] [i_16];
                            arr_59 [i_1] [i_15] [i_16] [i_17] = ((/* implicit */short) (+(arr_47 [i_17] [i_16] [i_16] [i_15] [i_2] [i_1])));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_65 [(short)5] [i_2] [i_15] [i_18] [i_19] = ((/* implicit */unsigned char) var_5);
                            var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))));
                            var_40 += ((/* implicit */_Bool) arr_47 [i_1] [(_Bool)1] [i_15] [i_18] [i_18] [i_19]);
                        }
                    } 
                } 
                var_41 = (unsigned char)9;
            }
            arr_66 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_17 [i_1] [(unsigned short)4] [i_1] [i_2] [i_2] [i_1]);
        }
        for (unsigned int i_20 = 3; i_20 < 11; i_20 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_21 = 4; i_21 < 11; i_21 += 4) 
            {
                arr_74 [i_21] [i_21] [i_20 - 1] [i_1] = (((_Bool)1) ? (1851124180U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))));
                var_42 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_20 - 1])) : (((/* implicit */int) arr_29 [i_20 - 1] [(_Bool)1] [i_21 - 2]))))), (var_10)));
                arr_75 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)204))) ? (arr_21 [i_1]) : ((+(arr_21 [i_20])))));
                var_43 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) ((unsigned char) ((arr_23 [i_21] [i_21] [i_1] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_21] [i_1])))))))));
                arr_76 [i_21] [i_20 - 2] [i_1] = ((/* implicit */unsigned char) var_2);
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned char) arr_35 [i_20 - 1]);
                arr_79 [i_22] |= ((/* implicit */_Bool) (-(((/* implicit */int) (short)-26649))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_45 = arr_57 [i_1] [i_1] [i_1] [i_1] [i_1];
                            var_46 |= ((((/* implicit */int) arr_80 [i_23])) <= (((/* implicit */int) var_9)));
                            arr_84 [i_1] [i_1] [i_22] [i_23] [i_23] [i_24] = ((/* implicit */int) arr_5 [i_1] [i_20 - 3]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_26 = 2; i_26 < 9; i_26 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_27 = 0; i_27 < 12; i_27 += 4) 
                    {
                        var_47 -= ((/* implicit */_Bool) 4294967295U);
                        var_48 = ((/* implicit */unsigned char) min((var_48), (arr_83 [i_20] [i_20 + 1])));
                        var_49 -= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)25684));
                        arr_94 [(unsigned char)6] [i_26] [(unsigned short)7] [i_25] [i_25] [(_Bool)1] [i_1] = var_3;
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_28 = 0; i_28 < 12; i_28 += 1) 
                    {
                        var_50 |= ((/* implicit */_Bool) ((unsigned char) (_Bool)0));
                        var_51 = ((/* implicit */unsigned char) (+(arr_36 [i_26 + 1] [i_20 - 3] [i_20 - 2])));
                    }
                    arr_98 [i_1] [i_20] [i_1] [(unsigned char)8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_41 [i_1] [i_20] [i_25] [i_26]))))));
                }
                for (unsigned int i_29 = 0; i_29 < 12; i_29 += 4) 
                {
                    var_52 = ((/* implicit */int) ((unsigned short) arr_83 [i_20 - 2] [i_20]));
                    var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) var_9))));
                    var_54 = ((/* implicit */_Bool) var_7);
                }
                for (short i_30 = 3; i_30 < 11; i_30 += 2) 
                {
                    arr_104 [9U] [i_20 - 3] [i_25] [(unsigned char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_1] [i_25] [i_25] [(unsigned char)0] [i_25] [i_25])) ? (26U) : ((((_Bool)1) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_105 [i_30] [11U] [i_20] [i_1] = ((/* implicit */unsigned short) ((int) arr_87 [i_1] [i_20 - 1] [i_30 + 1]));
                }
                for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_32 = 4; i_32 < 11; i_32 += 2) 
                    {
                        var_55 = ((arr_57 [i_32 - 3] [i_20 - 2] [i_20] [i_31] [i_32]) / (arr_57 [i_31] [i_20 - 2] [i_1] [i_20 + 1] [i_25]));
                        arr_110 [i_1] [i_1] [i_25] [(unsigned char)3] [i_32 - 1] = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) arr_70 [i_1] [i_20] [i_31 + 1])))));
                        arr_111 [i_1] [i_20 - 3] [i_25] [i_31 + 1] [i_31] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    }
                    var_56 = ((/* implicit */unsigned char) (_Bool)1);
                    var_57 = ((/* implicit */_Bool) (-(var_10)));
                }
                /* LoopSeq 2 */
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    var_58 = ((/* implicit */unsigned char) ((unsigned int) (~(17U))));
                    /* LoopSeq 1 */
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        arr_116 [i_34] [i_20] = ((/* implicit */unsigned short) (_Bool)1);
                        var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) (unsigned char)214))));
                        var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_31 [i_1] [i_20] [i_25] [i_20] [1U])) || (((/* implicit */_Bool) arr_46 [i_25])))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned char) arr_3 [i_1]))))))));
                        var_61 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    }
                    arr_117 [(_Bool)1] |= ((/* implicit */_Bool) 1085061003);
                    var_62 = ((/* implicit */unsigned short) var_12);
                }
                for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                {
                    var_63 |= ((/* implicit */unsigned int) ((unsigned char) arr_14 [i_20 - 3] [i_20] [i_20 - 3] [i_20] [i_20 - 2]));
                    var_64 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (unsigned int i_36 = 0; i_36 < 12; i_36 += 4) 
                    {
                        var_65 = ((/* implicit */unsigned char) max((var_65), (((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_90 [i_1])) ? (var_7) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))))))));
                        arr_123 [i_25] [i_25] [1U] [i_25] [i_25] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (unsigned char i_37 = 3; i_37 < 10; i_37 += 2) 
                    {
                        arr_126 [i_20] [(unsigned short)10] [i_25] [9U] [i_37] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)160))))) ^ (var_3)));
                        arr_127 [i_37] [i_35 - 1] [i_25] [i_20] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)100))));
                    }
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                    {
                        var_66 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_20 - 2] [i_20])) >= (((/* implicit */int) (_Bool)1))));
                        var_67 ^= ((/* implicit */int) (+(arr_108 [i_1] [i_1] [i_1] [i_35 - 1] [(unsigned short)8])));
                        var_68 = ((/* implicit */_Bool) max((var_68), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_2))) | ((~(((/* implicit */int) (unsigned short)65508)))))))));
                        var_69 = ((/* implicit */_Bool) min((var_69), (((arr_34 [i_20 - 3] [i_20 - 2] [i_20 - 3] [i_35 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned short i_39 = 0; i_39 < 12; i_39 += 4) 
                    {
                        var_70 = ((/* implicit */unsigned int) max((var_70), (((unsigned int) arr_119 [i_20] [i_20] [i_20 - 3] [i_25] [i_35]))));
                        var_71 += ((/* implicit */unsigned int) arr_7 [i_20 + 1] [i_20 - 3] [i_35 - 1]);
                        arr_134 [i_1] [i_20] [i_25] [i_35 - 1] [i_39] [i_39] = (~(arr_20 [i_20 - 2] [i_25] [i_20 - 2] [i_20] [i_20]));
                    }
                    /* LoopSeq 3 */
                    for (int i_40 = 2; i_40 < 10; i_40 += 1) /* same iter space */
                    {
                        var_72 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5U))));
                        var_73 = ((/* implicit */unsigned char) ((unsigned int) var_2));
                        arr_137 [i_1] [i_1] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                    }
                    for (int i_41 = 2; i_41 < 10; i_41 += 1) /* same iter space */
                    {
                        arr_140 [(unsigned char)2] = ((/* implicit */unsigned char) ((unsigned short) 1365651912U));
                        var_74 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9955)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))));
                        var_75 = ((/* implicit */_Bool) max((var_75), (((/* implicit */_Bool) arr_99 [(_Bool)1] [i_1] [i_25] [(_Bool)1] [i_20] [i_1]))));
                        var_76 = ((/* implicit */unsigned short) min((var_76), (((/* implicit */unsigned short) arr_16 [(_Bool)1] [i_25] [i_25] [(_Bool)1] [(_Bool)1]))));
                    }
                    for (int i_42 = 2; i_42 < 10; i_42 += 1) /* same iter space */
                    {
                        var_77 |= (_Bool)0;
                        var_78 = ((/* implicit */unsigned char) max((var_78), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_17 [i_1] [8] [i_1] [i_1] [i_25] [i_1])))))))));
                    }
                }
                arr_143 [i_1] [i_1] [2U] &= ((unsigned short) arr_31 [i_20 - 2] [i_20] [i_20 + 1] [i_20] [i_20]);
                arr_144 [i_25] [i_25] [i_20] [i_1] = ((/* implicit */unsigned short) var_0);
                /* LoopSeq 1 */
                for (unsigned char i_43 = 0; i_43 < 12; i_43 += 1) 
                {
                    arr_148 [i_25] [4U] [(unsigned short)10] [(unsigned char)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_52 [(_Bool)1] [9U]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((unsigned int) var_5))));
                    /* LoopSeq 2 */
                    for (int i_44 = 0; i_44 < 12; i_44 += 2) /* same iter space */
                    {
                        var_79 -= ((/* implicit */_Bool) arr_78 [(_Bool)1] [i_25] [i_43] [i_44]);
                        var_80 = ((/* implicit */_Bool) (unsigned char)142);
                    }
                    for (int i_45 = 0; i_45 < 12; i_45 += 2) /* same iter space */
                    {
                        var_81 |= ((_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) ^ (((/* implicit */int) var_2))));
                        var_82 -= ((/* implicit */int) ((((int) -2147483642)) == ((+(((/* implicit */int) (unsigned char)11))))));
                        var_83 = ((/* implicit */unsigned short) var_0);
                    }
                }
            }
            arr_157 [i_1] [i_20] [i_1] &= ((/* implicit */int) ((_Bool) arr_13 [i_20 + 1]));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_46 = 0; i_46 < 1; i_46 += 1) 
            {
                arr_161 [i_46] [i_46] [i_46] [i_20] = (~(((((/* implicit */_Bool) arr_60 [i_1] [i_46] [i_46] [i_46])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_1] [i_20] [i_20 - 3] [i_20] [i_46] [i_46] [i_46]))) : (1416257618U))));
                var_84 = ((/* implicit */unsigned int) min((var_84), ((-((-(4294967273U)))))));
                arr_162 [i_46] [i_46] = ((/* implicit */unsigned char) (_Bool)1);
            }
            var_85 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)1669))));
        }
        for (_Bool i_47 = 0; i_47 < 1; i_47 += 1) 
        {
            arr_165 [i_47] = ((/* implicit */unsigned char) -1);
            var_86 = ((/* implicit */unsigned int) max((var_86), (((/* implicit */unsigned int) var_12))));
        }
        var_87 = ((/* implicit */unsigned int) min((var_87), (((/* implicit */unsigned int) (((~(((/* implicit */int) (!((_Bool)1)))))) | ((+((+(2))))))))));
    }
}
