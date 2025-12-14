/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12939
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
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_10 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_11 -= ((/* implicit */int) (unsigned short)38811);
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [5]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [18] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6797768463914826225LL)) ? (4084464876161317721ULL) : (((/* implicit */unsigned long long int) 1762964673))));
                    arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -594375421)) ? (87001296326238338ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))));
                    var_12 ^= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [18U])) : (((/* implicit */int) arr_3 [(short)6])));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_1] [4LL] [i_3] = ((/* implicit */unsigned char) (~(((unsigned long long int) var_8))));
                        arr_17 [i_2] [(signed char)7] [i_2] [i_0] = ((((/* implicit */_Bool) 3949512754U)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (unsigned short)0)));
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_3] = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) + (((unsigned int) arr_3 [i_0])));
                        var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -8693107035949268290LL)) ^ (9152898758410495527ULL)));
                    }
                }
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (short i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_30 [i_4] [(unsigned char)5] [i_4] = ((/* implicit */unsigned int) ((short) arr_24 [i_4] [i_4] [i_6]));
                        arr_31 [i_4] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) arr_3 [i_4]))));
                        arr_32 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_4 - 1] [i_4] [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_23 [i_4])) : (((/* implicit */int) var_7))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_15 = (+(arr_14 [i_4 + 1] [i_4] [i_4 - 1] [i_8]));
                            var_16 = (+(((/* implicit */int) arr_23 [i_4])));
                        }
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            arr_37 [i_4 + 1] [i_4] [i_6] [i_7] [i_4] = ((/* implicit */unsigned int) arr_10 [i_4] [i_5] [i_6]);
                            var_17 = ((/* implicit */unsigned char) arr_34 [i_4 + 1] [i_5] [i_6] [0LL] [i_7] [(short)7] [i_9]);
                            var_18 ^= ((/* implicit */_Bool) arr_10 [i_7] [i_6] [i_4]);
                            arr_38 [i_4 - 1] [i_4] [i_4] [i_4] = ((/* implicit */int) ((unsigned int) var_6));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            arr_41 [i_4] [i_5] [i_4] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? (((/* implicit */int) arr_40 [i_4] [i_4 + 1] [i_4 - 1] [i_10] [(unsigned char)2])) : ((+(((/* implicit */int) arr_33 [i_4] [i_6]))))));
                            arr_42 [i_4 - 1] [i_4] [i_4] [i_5] [i_6] [(_Bool)1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4 + 1])) ? (arr_36 [5U] [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 1]) : (((/* implicit */long long int) 536870848U))));
                            var_19 += ((/* implicit */short) ((arr_28 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4 + 1])) ? (8156354264892144622LL) : (arr_10 [i_5] [i_5] [i_4]))))));
                            var_20 += ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_10] [i_4 - 1] [i_4 + 1] [i_10]))));
                        }
                    }
                    for (unsigned short i_11 = 2; i_11 < 8; i_11 += 3) /* same iter space */
                    {
                        arr_45 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */int) ((unsigned char) var_1));
                        var_21 = ((/* implicit */short) arr_33 [i_4] [i_5]);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_4])) + (((((/* implicit */_Bool) arr_20 [i_11 - 2])) ? (((/* implicit */int) arr_8 [i_6])) : (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_40 [i_11 + 2] [i_6] [9] [i_5] [i_4 + 1]))))))));
                        arr_46 [i_4] [i_5] [i_6] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_4] [i_5] [i_5] [4] [5U]))) / ((-(arr_9 [i_4] [i_5] [i_6] [15])))))) : ((-(min((((/* implicit */unsigned long long int) -16)), (9152898758410495527ULL)))))));
                    }
                    for (unsigned short i_12 = 2; i_12 < 8; i_12 += 3) /* same iter space */
                    {
                        var_23 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_10 [i_12] [i_5] [i_6]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [0])) && (arr_40 [i_4] [i_4] [i_5] [i_4] [i_12])))))))));
                        arr_49 [i_4 - 1] [i_4] [(signed char)7] = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 2; i_13 < 9; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53775))) & (9293845315299056089ULL)))) ? (((arr_9 [i_4] [i_4] [i_4] [(signed char)11]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_4 - 1] [i_4 - 1] [i_4] [i_12]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)211)))), (((/* implicit */int) arr_23 [0ULL])))))));
                        }
                        for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_10 [19] [19] [(signed char)12]);
                            var_27 = ((/* implicit */int) ((unsigned char) arr_10 [i_4 - 1] [i_4 + 1] [i_12 - 1]));
                            var_28 *= ((/* implicit */unsigned int) arr_20 [i_12]);
                            var_29 += ((/* implicit */int) (unsigned char)68);
                            arr_55 [i_4] [i_6] = 4294967295U;
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 2; i_16 < 9; i_16 += 1) 
                        {
                            {
                                arr_60 [i_4] [i_5] [i_5] [i_6] [i_15] [i_16 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_4) % (var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4 - 1] [i_5] [i_6] [i_4]))) : (max((7U), (arr_54 [(_Bool)1] [i_4] [i_4] [i_4 + 1] [(_Bool)1] [i_4] [1])))));
                                arr_61 [i_4] [i_5] [i_6] [i_15] [i_16] = ((/* implicit */_Bool) var_5);
                                var_30 = ((/* implicit */unsigned short) ((arr_34 [i_4 + 1] [i_16 - 2] [i_4 + 1] [5U] [i_16 - 2] [i_16 + 1] [3]) ^ ((+(arr_34 [i_4 - 1] [i_16 - 2] [i_16] [i_16] [i_16 - 2] [i_16 - 1] [i_16])))));
                                var_31 += ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) 
    {
        var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_62 [i_17] [i_17]))) ? (((/* implicit */int) arr_62 [i_17] [20ULL])) : (((/* implicit */int) ((((/* implicit */int) arr_62 [i_17] [i_17])) > (((/* implicit */int) arr_62 [i_17] [i_17])))))));
        var_33 = ((/* implicit */unsigned char) 9293845315299056089ULL);
        arr_64 [i_17] [i_17] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (unsigned char)211))))) ? (-97097120) : (((/* implicit */int) (unsigned short)65530))))));
        /* LoopNest 2 */
        for (signed char i_18 = 3; i_18 < 24; i_18 += 2) 
        {
            for (unsigned char i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) 1610612736U)) && (((/* implicit */_Bool) arr_65 [i_19] [i_18])))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_65 [i_19] [i_18])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((unsigned int) arr_62 [i_17] [i_17]))))))))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_18] [i_18])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_17] [12LL] [i_18] [i_17]))) * (arr_70 [i_17] [i_18] [i_18] [i_19]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1200586252)) ? (((/* implicit */int) arr_68 [i_17] [i_17] [i_18] [(unsigned short)1])) : (arr_66 [i_18]))))))) ? (((/* implicit */int) arr_62 [i_17] [i_18])) : (var_6)));
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        arr_76 [i_17] [i_18] [i_18] [i_20] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_67 [i_18] [i_18 - 2]))))) ? (((((/* implicit */_Bool) arr_67 [i_18] [i_18 - 2])) ? (((/* implicit */int) arr_67 [i_18] [i_18 + 1])) : (((/* implicit */int) arr_67 [i_18] [i_18 + 1])))) : (((((/* implicit */int) arr_63 [i_18 + 1] [i_18 - 2])) / (var_0)))));
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_3))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_21 = 2; i_21 < 23; i_21 += 2) 
                    {
                        var_37 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_70 [i_17] [(short)0] [i_17] [i_21])) ? (((/* implicit */unsigned int) arr_66 [i_19])) : (arr_79 [i_17]))));
                        arr_81 [i_18] [i_19] [i_18 - 3] [24] [i_18] = ((/* implicit */unsigned int) arr_67 [i_18] [i_18]);
                        /* LoopSeq 3 */
                        for (unsigned short i_22 = 0; i_22 < 25; i_22 += 4) 
                        {
                            arr_85 [i_18] = ((/* implicit */unsigned char) ((arr_77 [i_17] [i_21 - 2] [i_18] [(unsigned char)14]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_18] [i_21 - 2] [i_18] [i_22])))));
                            var_38 += ((/* implicit */int) ((unsigned int) (_Bool)1));
                            arr_86 [i_18] [i_18] = ((/* implicit */_Bool) var_8);
                            arr_87 [i_17] [i_17] [i_18 + 1] [i_19] [i_21] [(unsigned char)4] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            arr_88 [i_18] [i_18 - 3] = ((/* implicit */unsigned char) (+(var_0)));
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((short) arr_77 [i_23] [i_21] [i_21] [i_17])))));
                            arr_91 [i_23] [22U] [i_18] [i_18] [i_21] = ((/* implicit */long long int) ((((/* implicit */int) arr_62 [i_21 - 1] [i_18 - 2])) ^ ((+(arr_66 [i_18])))));
                            arr_92 [i_17] [i_18] [i_19] [i_18] [i_23] = ((/* implicit */int) arr_84 [i_17] [(unsigned char)3] [i_19] [i_23]);
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_82 [i_17] [i_17] [i_19] [i_21 + 2] [i_17] [i_24])) ? (((/* implicit */unsigned long long int) -971024953)) : (((arr_84 [i_17] [i_18 - 1] [(short)1] [(unsigned char)9]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            var_41 = ((/* implicit */unsigned char) ((short) arr_70 [(unsigned short)0] [i_21] [i_19] [i_17]));
                            arr_95 [i_17] [i_18] [i_24] = ((/* implicit */int) ((unsigned long long int) ((int) 9293845315299056065ULL)));
                        }
                        arr_96 [i_21] [i_18 + 1] [i_18] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) 971024929)) ? (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_18] [i_21 + 1]))) : (arr_79 [9U]))) : (((((/* implicit */_Bool) arr_66 [i_18])) ? (arr_72 [i_21] [i_18] [i_19] [i_18] [i_18] [i_17]) : (arr_82 [i_17] [i_17] [i_17] [4] [i_19] [i_19])))));
                    }
                    arr_97 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (+(arr_69 [i_17] [i_18] [i_19]))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)115)) + (((/* implicit */int) arr_93 [i_17] [i_18] [i_18] [(_Bool)1] [i_18] [i_19]))))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [(_Bool)1] [i_19]))) + (var_5))), (((/* implicit */unsigned long long int) var_6))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_25 = 1; i_25 < 24; i_25 += 3) 
        {
            for (short i_26 = 0; i_26 < 25; i_26 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_27 = 0; i_27 < 25; i_27 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_28 = 0; i_28 < 25; i_28 += 2) 
                        {
                            var_42 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (min((arr_103 [i_25 + 1] [i_25] [i_25 + 1] [i_25 - 1] [i_25 + 1]), (arr_103 [i_25 + 1] [i_25] [i_25 - 1] [i_25 - 1] [i_28])))));
                            arr_106 [i_28] [i_25] [i_26] [i_25] [i_28] [i_26] [i_28] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_67 [i_17] [i_17])) ? (-7168418441974209527LL) : (((/* implicit */long long int) -971024930)))) ^ (((/* implicit */long long int) ((int) (unsigned char)1)))));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) : (3769696378443599094LL)));
                        }
                        arr_107 [i_17] [i_25 + 1] [i_17] [19ULL] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_70 [i_17] [i_25] [i_25] [(signed char)2])) ? (((/* implicit */long long int) var_0)) : (7337201150677563637LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_26] [(unsigned char)8])))))));
                        arr_108 [i_17] [(_Bool)1] [i_26] [i_27] = ((/* implicit */short) (+(((/* implicit */int) arr_75 [i_17]))));
                    }
                    for (unsigned char i_29 = 4; i_29 < 24; i_29 += 1) 
                    {
                        arr_111 [i_17] [i_29] = ((/* implicit */short) min(((signed char)-115), (((/* implicit */signed char) (_Bool)1))));
                        var_44 ^= ((/* implicit */unsigned char) arr_70 [i_17] [i_17] [i_17] [i_17]);
                    }
                    arr_112 [(short)21] [i_25] [i_26] = ((/* implicit */unsigned int) arr_77 [10U] [i_26] [i_26] [(_Bool)0]);
                    var_45 = ((/* implicit */signed char) ((unsigned char) var_5));
                    /* LoopSeq 2 */
                    for (unsigned short i_30 = 2; i_30 < 22; i_30 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_31 = 0; i_31 < 25; i_31 += 1) 
                        {
                            var_46 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3825044790U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_99 [i_17] [i_25 - 1] [i_26]))) : (var_5))) | (((/* implicit */unsigned long long int) ((int) var_4)))));
                            arr_117 [i_17] [i_17] [i_17] [(_Bool)1] [i_30] [i_30] [i_17] = ((/* implicit */short) arr_72 [i_17] [i_26] [i_17] [i_30] [i_30] [i_30]);
                        }
                        arr_118 [i_30] [i_25] [(signed char)12] [i_30] = ((/* implicit */unsigned char) (+(arr_115 [i_26] [i_26])));
                        var_47 ^= ((/* implicit */unsigned int) arr_89 [i_30] [i_26] [(unsigned short)22] [i_17] [i_26] [i_17]);
                    }
                    /* vectorizable */
                    for (long long int i_32 = 0; i_32 < 25; i_32 += 2) 
                    {
                        arr_121 [i_17] [i_17] [i_25 - 1] [i_17] [i_32] = ((/* implicit */unsigned int) ((signed char) arr_63 [i_25 - 1] [i_25 + 1]));
                        var_48 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_69 [i_17] [i_25] [i_25 - 1]))));
                        arr_122 [i_17] [i_25 - 1] [i_26] [i_32] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (arr_69 [17ULL] [i_25] [i_25 - 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)226)))))));
                    }
                    arr_123 [i_26] [i_25] [i_25 + 1] [i_17] = ((/* implicit */int) (~(min((arr_73 [7] [i_25] [i_25 - 1] [7] [7]), (arr_73 [i_25 - 1] [(short)6] [i_25 + 1] [i_17] [(short)6])))));
                }
            } 
        } 
    }
}
