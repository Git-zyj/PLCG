/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17196
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
    var_18 = ((/* implicit */int) min(((+(((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30637)) + (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0 - 1] [i_0])), (var_10)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_16)) : (1551777536)))), (((((/* implicit */_Bool) (unsigned short)55333)) ? (5167395224989896062ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))))))) : (((/* implicit */unsigned long long int) -1))));
        arr_4 [i_0] [(short)8] &= ((/* implicit */short) ((unsigned short) (unsigned char)56));
        var_20 = ((/* implicit */signed char) arr_0 [i_0] [i_0 - 1]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_8 [(signed char)11] [i_1] [i_1] |= ((/* implicit */unsigned short) min((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))), (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_1 [i_0 - 1])))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (arr_6 [i_0 - 1] [i_0]) : (((/* implicit */int) (unsigned char)177))))));
            var_21 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-23956)) - (732921167)))))));
        }
        /* LoopSeq 4 */
        for (short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                arr_14 [i_0] [(short)0] = ((long long int) ((long long int) 4759861420000216200ULL));
                arr_15 [i_0] [i_2] [i_0] [i_0 - 1] = ((/* implicit */short) ((9223372036854775807LL) == (1428194036279931810LL)));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
            {
                arr_18 [i_4] [i_4] [i_4] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) != (var_6)));
                arr_19 [i_0] [(unsigned char)14] [i_0] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_14))))));
            }
            for (short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_25 [i_0] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)232))) ? (((((/* implicit */_Bool) (short)17848)) ? (((/* implicit */long long int) 0U)) : (3378195557156513305LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_24 [i_6] [i_5] [(_Bool)1] [i_0])), (arr_20 [i_0] [i_0] [i_0] [i_0 - 1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 - 1] [i_2 + 3] [i_5] [i_6]))) : (min((arr_11 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)252)) > (((/* implicit */int) var_2))))))));
                    var_22 = ((/* implicit */short) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)48)) ? (16769024) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_0]))) : (arr_22 [i_0] [i_2] [i_6] [i_6] [i_6]))))), (min((((/* implicit */long long int) 32505856U)), (9223372036854775807LL)))));
                }
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_0 - 1] [i_0 - 1] [i_0]) % (((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [i_2] [i_2 - 1]))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-6782)) + (2147483647))) << (((((-6LL) + (12LL))) - (6LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)55688)))))))));
            }
            arr_26 [i_0 - 1] [i_2] = ((/* implicit */signed char) min((arr_11 [i_0]), (((/* implicit */unsigned int) var_8))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 3; i_7 < 16; i_7 += 2) 
            {
                arr_29 [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_7 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_7])) ? (((/* implicit */int) arr_10 [i_7])) : (((/* implicit */int) (short)-6235))))) : (((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_2 + 4] [i_7 - 3] [i_2])))))));
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_7 - 1] [i_0 - 1] [i_2 + 2])) : (((((/* implicit */_Bool) var_16)) ? (arr_6 [i_8] [i_0]) : (((/* implicit */int) var_16))))));
                    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_35 [i_9] [i_2 + 3] [i_7] [i_0] [i_7] [i_2 + 2] = arr_22 [i_0 - 1] [i_0] [i_0] [11ULL] [i_0 - 1];
                    arr_36 [i_9] [i_9] [i_7] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                    arr_37 [i_9] [i_9] [6LL] [i_2 + 3] [i_0 - 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24439)) ? (((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1] [i_7] [i_9])) : (((/* implicit */int) var_3))))) ? (((unsigned long long int) var_13)) : (arr_28 [i_9])));
                }
                arr_38 [i_7] [i_7] [i_7 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_7 - 3] [i_2 + 4] [i_7] [i_0 - 1]))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    arr_45 [i_0] [i_2] [1U] [1U] [i_0] = var_8;
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)227)) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 1])) ? (9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_9 [i_10 - 1] [3]))))))));
                        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])))) ? (arr_34 [i_10 + 1] [i_12] [i_12] [i_11] [i_10 + 1] [i_10]) : (((var_11) | (arr_34 [i_0 - 1] [i_2] [i_10 - 1] [i_11] [i_12] [i_12])))));
                        arr_48 [i_0 - 1] [i_2 + 2] [i_2 + 2] [i_11] [i_11] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)-23942)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4611681620380876800LL))) : (((arr_34 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11])))))));
                        arr_49 [i_0] [i_0] [i_0 - 1] [i_0 - 1] &= ((int) (unsigned char)173);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) var_16))) : (arr_30 [i_11] [i_2 + 3] [i_10] [i_10 + 1])));
                    }
                    for (unsigned char i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        arr_52 [i_0] = ((/* implicit */short) arr_30 [i_0] [i_2] [i_2] [15]);
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((short) arr_28 [i_0 - 1])))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_1 [i_0]))));
                        arr_53 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_0] [6] [i_0 - 1]))))) ? (((/* implicit */int) (short)-4)) : (arr_6 [i_0 - 1] [i_0])));
                        var_31 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) < (arr_42 [i_0] [i_0])));
                    }
                    for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        var_32 |= ((/* implicit */int) -7596647704724459890LL);
                        var_33 &= ((/* implicit */unsigned int) ((unsigned char) var_12));
                    }
                }
                for (int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        var_34 -= ((((/* implicit */_Bool) 2147418112LL)) ? (((/* implicit */long long int) arr_58 [i_0] [i_0] [i_10 + 1] [(unsigned char)17] [i_0] [i_0])) : (arr_2 [i_15] [i_16]));
                        var_35 &= ((long long int) arr_1 [i_10 + 1]);
                    }
                    for (int i_17 = 1; i_17 < 15; i_17 += 2) 
                    {
                        arr_65 [i_0 - 1] [i_2] [i_15] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_13 [i_0] [i_10 - 1] [i_17])) : (arr_51 [i_0] [i_2 - 1] [i_10] [i_10 - 1] [i_17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_9 [i_15] [i_0 - 1])));
                        arr_66 [i_17] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */int) arr_10 [i_10 + 1])) != (((int) var_10))));
                        arr_67 [15U] [i_2] = ((/* implicit */unsigned long long int) -2449265450424658682LL);
                    }
                    for (int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        var_36 -= ((/* implicit */int) ((((/* implicit */_Bool) 602373300)) ? (((((/* implicit */_Bool) (short)32767)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_18] [i_15] [i_0 - 1] [i_2] [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2 + 1] [i_0 - 1] [i_10 - 1])))));
                        arr_71 [i_10 - 1] [i_10 - 1] [i_15] [i_10 - 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        var_37 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_0 [i_10] [i_10])))) % (((((/* implicit */int) arr_24 [i_0 - 1] [i_2] [i_2] [i_2])) << (((arr_39 [i_2]) - (5532719316163666332ULL)))))));
                        var_38 = ((/* implicit */short) arr_51 [i_0 - 1] [i_0 - 1] [i_18] [i_15] [i_18]);
                    }
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_10])) >= (arr_11 [i_10 + 1]))))));
                }
                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [(short)6] [i_10] [i_0]))) == (arr_44 [i_0 - 1] [i_0 - 1] [i_2] [i_10 - 1] [i_10])))) : (((/* implicit */int) arr_32 [i_10] [(short)13] [i_10] [(short)13] [i_2 + 4]))));
            }
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_41 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)19778)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21175))) : (2221095216438415195ULL))), (((/* implicit */unsigned long long int) ((unsigned char) min((arr_39 [i_0 - 1]), (((/* implicit */unsigned long long int) 5704297433819840437LL))))))));
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (var_6)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_72 [i_19]))))) ? (((/* implicit */int) arr_43 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_14))));
        }
        for (long long int i_20 = 0; i_20 < 18; i_20 += 2) 
        {
            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_54 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_20] [i_20]), (arr_54 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_20])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_0] [i_0 - 1] [i_0 - 1] [i_20] [i_20]))) != (arr_51 [i_0] [i_0] [i_0 - 1] [i_0] [i_20])))) : (((((/* implicit */int) arr_54 [i_0] [7U] [i_0 - 1] [i_0] [i_0])) << (((((/* implicit */int) arr_54 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) - (75)))))));
            arr_77 [i_0] [i_20] [i_0] = ((/* implicit */unsigned char) arr_42 [i_20] [i_0]);
        }
        for (long long int i_21 = 0; i_21 < 18; i_21 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_22 = 2; i_22 < 15; i_22 += 2) /* same iter space */
            {
                var_44 = ((/* implicit */int) var_17);
                /* LoopSeq 1 */
                for (unsigned char i_23 = 1; i_23 < 14; i_23 += 2) 
                {
                    var_45 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0]))) % (var_6))))), (((unsigned long long int) -6LL))));
                    var_46 = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_3 [i_0])))));
                }
                /* LoopSeq 1 */
                for (long long int i_24 = 0; i_24 < 18; i_24 += 1) 
                {
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) ((_Bool) (signed char)111))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_86 [i_24] [i_24]))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_21] [i_22] [i_22 + 3]))) % (var_11))) : (min((((((/* implicit */_Bool) 7843808157187292023LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24439))))), (((/* implicit */long long int) var_14))))));
                    var_48 &= ((/* implicit */unsigned char) ((-4677419370644883639LL) < (((/* implicit */long long int) 1552838397))));
                    var_49 = arr_30 [i_0] [(short)10] [13LL] [i_24];
                    arr_89 [i_0 - 1] [i_24] [i_24] [i_24] [i_21] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_70 [i_0 - 1] [i_21] [i_22] [i_22] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) arr_72 [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_22] [i_21] [i_22] [i_21]))) : (((((/* implicit */_Bool) (unsigned char)177)) ? (2147418097LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))))))));
                }
                var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) min((((((/* implicit */_Bool) -1771042963)) ? (-1271982647342832851LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))))))));
            }
            for (int i_25 = 2; i_25 < 15; i_25 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_26 = 0; i_26 < 18; i_26 += 2) 
                {
                    var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((long long int) arr_3 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) min((arr_70 [i_21] [i_0 - 1] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_3 [i_0])))))))))));
                    var_52 += ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */short) var_8)), (arr_84 [i_0] [i_21] [i_25] [i_25]))))));
                    var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_82 [i_25 - 2] [i_21] [i_0])) ? (((/* implicit */int) arr_82 [i_0] [i_21] [i_25 + 1])) : (((/* implicit */int) arr_82 [i_0 - 1] [i_21] [i_0 - 1]))))))));
                }
                var_54 |= ((/* implicit */signed char) ((((unsigned int) (signed char)-74)) == (((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (arr_88 [i_0 - 1] [i_21]))))));
                arr_96 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) arr_12 [i_0 - 1] [(short)7] [i_25]);
            }
            /* LoopSeq 3 */
            for (unsigned short i_27 = 0; i_27 < 18; i_27 += 3) 
            {
                arr_101 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((min((arr_58 [i_0 - 1] [i_0 - 1] [i_21] [i_21] [i_21] [i_27]), (arr_58 [i_0] [1] [i_21] [i_27] [i_27] [i_0]))), (((((/* implicit */_Bool) (unsigned char)59)) ? ((+(arr_69 [i_0] [i_27] [i_27] [i_0] [i_0] [i_27]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7))))))));
                var_55 = ((/* implicit */unsigned char) min((min((min((((/* implicit */long long int) arr_70 [i_0] [i_21] [i_0] [i_0] [i_27])), (var_11))), (((/* implicit */long long int) ((0ULL) <= (arr_28 [i_0])))))), (((((long long int) (_Bool)0)) + (((var_9) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172)))))))));
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                arr_104 [i_0] [i_21] [i_28] [(unsigned short)4] = ((/* implicit */long long int) min((((int) 9080684557650808837LL)), (((/* implicit */int) var_13))));
                var_56 = ((/* implicit */unsigned int) min((((long long int) min(((_Bool)1), (var_12)))), (((/* implicit */long long int) arr_11 [i_0 - 1]))));
                arr_105 [i_0] [i_28] [i_28] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) << (((((/* implicit */int) min((arr_50 [i_21]), (var_16)))) + (24533)))));
                var_57 = min((((long long int) min((var_0), (((/* implicit */long long int) (signed char)116))))), (min((((/* implicit */long long int) arr_21 [(short)10] [i_0 - 1] [i_28] [i_28])), (((((/* implicit */_Bool) var_1)) ? (arr_31 [i_28] [i_28] [i_0] [i_21] [7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0]))))))));
            }
            for (unsigned char i_29 = 0; i_29 < 18; i_29 += 2) 
            {
                var_58 = ((/* implicit */_Bool) var_9);
                var_59 = ((/* implicit */short) (-(arr_92 [i_0] [i_21] [i_29] [(short)10])));
            }
        }
    }
}
