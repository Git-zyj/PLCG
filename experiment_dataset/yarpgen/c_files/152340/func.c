/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152340
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) var_5);
        arr_3 [6U] |= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) << ((((+(((/* implicit */int) (signed char)-64)))) + (64)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_6))))))) : ((+(arr_2 [i_0 - 1]))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) min((max((arr_5 [i_1]), (((/* implicit */long long int) (~(var_9)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])))))));
        arr_8 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) arr_5 [i_1 - 1])))), (var_6))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) var_4);
    }
    for (long long int i_2 = 2; i_2 < 9; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] [i_2 + 2] = arr_10 [i_2];
        /* LoopSeq 1 */
        for (long long int i_3 = 4; i_3 < 10; i_3 += 1) 
        {
            arr_17 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (+(var_2)));
            arr_18 [i_3] [i_2] [i_2] |= ((/* implicit */int) (~(-3938462639368421372LL)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                arr_22 [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5641149634060389128LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (var_8)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & ((~(arr_6 [i_2])))));
                            arr_29 [i_4] [i_3] [i_4] [i_3] [i_6] = ((/* implicit */int) arr_27 [2ULL] [i_5] [2ULL]);
                        }
                    } 
                } 
                arr_30 [i_4] [i_3] [i_4 + 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
                var_19 = (i_4 % 2 == 0) ? (((/* implicit */_Bool) ((arr_28 [i_4] [i_4] [i_4] [i_2] [i_4] [i_2] [i_2]) >> ((((~(((/* implicit */int) var_4)))) + (24)))))) : (((/* implicit */_Bool) ((((arr_28 [i_4] [i_4] [i_4] [i_2] [i_4] [i_2] [i_2]) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) var_4)))) + (24))))));
                arr_31 [i_2 - 2] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_2] [i_4 + 2] [i_4] [i_4] [i_4] [i_4 - 1]))));
            }
            /* LoopSeq 4 */
            for (signed char i_7 = 1; i_7 < 7; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)21628)));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_33 [i_2] [i_2] [i_7 + 3])) != (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [(short)8] [8]))))), ((+(((/* implicit */int) var_4))))))) ? (((arr_39 [i_2] [i_7 + 2] [i_8]) / (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_5))))));
                            arr_40 [i_2] [i_3] [i_7] [i_8] [(unsigned char)2] [i_8] = ((/* implicit */signed char) 692692328);
                            arr_41 [i_9] [i_7] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_2]))))))))));
                            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_15)))) && (((max((((/* implicit */unsigned int) var_6)), (var_10))) <= (var_10)))));
                        }
                    } 
                } 
                arr_42 [i_7] [i_7] = ((/* implicit */unsigned int) var_9);
            }
            /* vectorizable */
            for (unsigned char i_10 = 2; i_10 < 10; i_10 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 6058341)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-30432))))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (((!(arr_37 [i_10] [i_10 - 1] [i_10] [i_3] [i_2]))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) arr_13 [i_2])) ? (var_15) : (var_15))))))));
            }
            for (unsigned char i_11 = 2; i_11 < 10; i_11 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) ((unsigned long long int) (((~(((/* implicit */int) (short)30417)))) % (((/* implicit */int) min(((short)30431), (((/* implicit */short) var_4))))))));
                arr_47 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_2);
            }
            for (int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                var_26 *= ((/* implicit */signed char) (~((~((-(((/* implicit */int) arr_26 [i_2] [i_3 - 4] [i_3 - 4] [i_3 - 4] [i_12]))))))));
                arr_52 [i_12] = ((/* implicit */signed char) (+(arr_19 [i_12])));
                var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_2]))));
            }
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                var_28 = ((/* implicit */long long int) ((unsigned long long int) max((min((var_11), (((/* implicit */unsigned long long int) arr_32 [i_2] [i_2])))), (((/* implicit */unsigned long long int) arr_48 [i_2] [i_2])))));
                arr_56 [i_13] [i_3] [i_13] = ((/* implicit */_Bool) arr_26 [i_13] [i_3] [i_2] [i_2] [i_2 - 2]);
                var_29 = ((/* implicit */int) var_15);
            }
            for (long long int i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_15 = 1; i_15 < 10; i_15 += 3) /* same iter space */
                {
                    arr_62 [i_14] [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_8))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_33 [i_15] [i_14 - 1] [i_3 - 4]))))))), (max((((/* implicit */unsigned int) (unsigned char)255)), (1178040627U)))));
                    var_30 = ((/* implicit */signed char) arr_1 [i_2 + 1]);
                    var_31 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16996)) << (((((/* implicit */int) (signed char)124)) - (114)))));
                }
                for (unsigned char i_16 = 1; i_16 < 10; i_16 += 3) /* same iter space */
                {
                    arr_67 [i_14] [i_3 - 2] [i_3] [(unsigned short)1] = min((((((/* implicit */_Bool) ((int) arr_64 [(short)3] [i_3 + 1] [i_14 + 2] [i_14] [i_16]))) ? (((arr_2 [i_14]) >> (((var_10) - (4237617773U))))) : ((~(arr_35 [i_16 + 1]))))), (((/* implicit */unsigned long long int) (~((~(504521837)))))));
                    arr_68 [i_14] [i_16] [i_14] [i_2] [i_2] [i_14] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))))) - (((((/* implicit */long long int) ((/* implicit */int) var_6))) - (arr_32 [i_2] [i_3]))))));
                    arr_69 [i_2] [i_2] [i_14] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [9U])) ? (((((/* implicit */_Bool) arr_23 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */int) arr_4 [i_14 + 2])) : (((/* implicit */int) arr_4 [i_3])))) : (((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) arr_58 [i_2] [i_3] [i_2] [i_16 + 1])))))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (+((-(max((arr_19 [i_2]), (((/* implicit */unsigned long long int) var_5)))))))))));
                }
                for (unsigned int i_17 = 4; i_17 < 7; i_17 += 2) 
                {
                    arr_72 [i_14] [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_65 [i_2] [i_3] [i_14 + 1] [i_17])), (var_10)));
                    arr_73 [i_2] [i_2] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_14])))))) * (max((((/* implicit */unsigned int) var_4)), (arr_66 [i_2] [i_3] [i_3] [i_14] [i_2] [i_17])))))) ? (((6058341) + (((/* implicit */int) (!((_Bool)1)))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) 903276575)) || (((/* implicit */_Bool) 3207942960U)))))))));
                    arr_74 [i_2] [i_2 - 2] [i_2] [i_2] [i_14] [i_2 + 2] = ((/* implicit */short) arr_60 [i_2] [6U] [(signed char)4] [i_2]);
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    arr_77 [10ULL] [i_3 - 4] [i_14] [i_2] |= ((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned int) var_13))));
                    var_33 = ((/* implicit */short) arr_23 [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 1]);
                    var_34 = ((/* implicit */unsigned int) (((~(min((((/* implicit */int) (short)-2015)), (var_13))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2 - 2]))) : (var_2)))) ? ((~(var_8))) : (max((((/* implicit */int) arr_58 [i_2] [i_3 - 4] [i_14] [i_18])), (var_13)))))));
                }
                var_35 = (((+(((var_12) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) max((arr_24 [i_14 - 1] [i_14] [i_3] [i_3] [i_14] [i_2]), (arr_24 [i_2 + 2] [i_3] [i_14 - 1] [i_14] [i_14] [i_3])))));
            }
        }
        arr_78 [i_2] = (-((+(((/* implicit */int) arr_10 [i_2 + 1])))));
    }
    for (long long int i_19 = 2; i_19 < 9; i_19 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            for (unsigned char i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                {
                    var_36 ^= ((/* implicit */unsigned int) (-((~(max((var_11), (((/* implicit */unsigned long long int) var_13))))))));
                    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [(unsigned short)3] [i_21] [i_20] [i_19] [i_19 + 2]))) - (((((/* implicit */_Bool) arr_85 [i_19] [i_19] [i_21])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [(_Bool)1] [i_20] [i_20] [i_20]))))))))));
                    arr_88 [i_19] [(unsigned short)2] [i_21] [i_20] = ((/* implicit */signed char) (((+(arr_64 [i_19] [i_20] [i_20] [i_19] [i_21]))) / (((arr_64 [i_19 - 1] [i_19] [i_19] [i_21] [i_21]) / (arr_64 [i_19] [i_19 + 2] [i_20] [i_19] [i_20])))));
                }
            } 
        } 
        arr_89 [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_23 [i_19] [i_19] [i_19] [i_19])) ? (arr_35 [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) - (42)))));
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((arr_84 [i_19 + 2] [i_19]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_25 [i_19] [i_19] [i_19] [i_19]) : (arr_36 [i_19] [i_19] [i_19] [6U])))) ? (((/* implicit */int) ((unsigned short) arr_46 [i_19] [i_19] [i_19] [i_19]))) : ((~(((/* implicit */int) arr_63 [i_19]))))))))))));
        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) ((((var_6) ? (arr_83 [i_19] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_19] [i_19] [i_19] [i_19]))))) > (((/* implicit */unsigned long long int) ((var_15) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))) ^ (((/* implicit */int) var_5)))))));
        /* LoopSeq 3 */
        for (unsigned int i_22 = 2; i_22 < 9; i_22 += 3) 
        {
            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) arr_36 [i_19] [i_22] [i_22] [i_22 + 1]))));
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), ((unsigned short)18356)))))));
            arr_92 [i_22] [i_22] [i_19] = ((/* implicit */long long int) arr_86 [i_19] [i_22]);
            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) arr_38 [i_19] [i_22 + 2] [i_19] [i_19 - 2] [i_22 + 1] [i_22 + 2] [i_19])), (arr_5 [i_19]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_90 [i_22])) ? (var_10) : (var_10))))))) ? (((/* implicit */int) min((arr_59 [i_19] [i_19] [i_22] [i_19 + 1]), (((/* implicit */signed char) (!(var_12))))))) : (-1867054327)));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            arr_95 [i_19] [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_19] [5] [i_19])) != (((/* implicit */int) var_16))))), (arr_54 [i_19])))) > (max((max((var_0), (var_8))), (((/* implicit */int) arr_43 [i_19] [i_23] [i_19 + 2]))))));
            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) arr_90 [i_19 - 2]))));
            /* LoopNest 2 */
            for (unsigned char i_24 = 2; i_24 < 10; i_24 += 2) 
            {
                for (signed char i_25 = 0; i_25 < 11; i_25 += 4) 
                {
                    {
                        var_44 ^= ((/* implicit */short) ((unsigned int) arr_98 [i_24 - 2]));
                        var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_8))))));
                        arr_101 [(unsigned short)9] [i_23] [i_19 - 2] = ((/* implicit */signed char) (~((+(var_13)))));
                    }
                } 
            } 
            arr_102 [i_19] [i_23] = arr_50 [i_23] [i_19 - 1] [i_19] [i_19 - 1];
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            arr_106 [i_26] [i_26] [i_26] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (signed char)-59)))));
            var_46 -= ((/* implicit */_Bool) (-(((var_6) ? ((~(var_13))) : (((/* implicit */int) ((arr_36 [i_19] [i_19] [(unsigned short)7] [i_19]) < (((/* implicit */int) arr_24 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))))))));
            arr_107 [i_26] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_34 [i_19 - 2] [i_19 - 2] [i_19 + 2] [i_19] [i_19 - 2]))), (((((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) arr_50 [i_26] [(_Bool)1] [i_19] [i_19]))))) << (((((/* implicit */int) var_1)) - (69)))))));
            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_70 [i_26] [i_26] [i_19] [i_19] [i_19]), (((/* implicit */signed char) var_3)))))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_84 [i_19] [i_26]))))))))));
        }
    }
    /* LoopNest 2 */
    for (int i_27 = 0; i_27 < 19; i_27 += 1) 
    {
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 19; i_29 += 3) 
                {
                    for (signed char i_30 = 4; i_30 < 18; i_30 += 3) 
                    {
                        {
                            arr_117 [i_27] [i_28] = ((/* implicit */signed char) ((_Bool) 5819919520243231507ULL));
                            arr_118 [i_27] [i_27] [i_27] = ((/* implicit */unsigned int) (short)2004);
                        }
                    } 
                } 
                arr_119 [i_27] = ((/* implicit */unsigned short) arr_116 [i_27]);
                var_48 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_116 [2]))))) << (((var_11) - (3920865981728749425ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_31 = 4; i_31 < 21; i_31 += 1) 
    {
        for (unsigned int i_32 = 2; i_32 < 22; i_32 += 2) 
        {
            {
                arr_125 [i_31] [i_31] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_124 [i_32 + 1]))))) ? (var_13) : (((((/* implicit */int) min((var_1), (((/* implicit */signed char) var_12))))) ^ ((-(var_0)))))));
                arr_126 [i_31] [i_31] &= ((/* implicit */signed char) min((55342075), (((/* implicit */int) (short)-2004))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_33 = 4; i_33 < 21; i_33 += 2) 
    {
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            for (unsigned int i_35 = 3; i_35 < 20; i_35 += 2) 
            {
                {
                    arr_134 [i_33 - 2] [i_33] [i_34] [i_34] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned char)247)) != (arr_132 [i_34]))))) ? (((((/* implicit */int) arr_120 [i_33])) << ((((~(arr_121 [i_35]))) - (2874062726U))))) : (((/* implicit */int) arr_129 [i_34])));
                    arr_135 [i_35] [i_34] [i_34] [i_33] = ((/* implicit */signed char) 134217727LL);
                }
            } 
        } 
    } 
}
