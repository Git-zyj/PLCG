/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113372
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
    var_16 ^= ((/* implicit */short) var_12);
    var_17 *= ((/* implicit */_Bool) ((unsigned short) var_6));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] [i_2 - 1] = ((/* implicit */unsigned char) arr_2 [i_1] [(unsigned char)17]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [(unsigned char)7] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1])) + (((/* implicit */int) arr_1 [i_2 + 1] [i_1]))))));
                        arr_12 [i_3] = ((/* implicit */unsigned int) arr_3 [i_0] [17LL] [i_0]);
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(661632574U)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_6] [i_6])) ? (((/* implicit */int) (short)24415)) : (((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_4 - 1] [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47704))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [2U] [2U] [i_0]))))))), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_5] [i_5])))) && (((/* implicit */_Bool) 2047)))))));
                        arr_23 [i_6] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */int) (~((~(661632570U)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_19 &= ((/* implicit */unsigned long long int) 3633334715U);
                        arr_31 [i_0] [i_7] = ((/* implicit */unsigned int) (+((-(arr_26 [i_0] [i_0])))));
                    }
                } 
            } 
            var_20 = ((short) ((((/* implicit */int) (unsigned short)63573)) + (((/* implicit */int) (unsigned char)242))));
        }
    }
    for (short i_10 = 1; i_10 < 11; i_10 += 4) 
    {
        var_21 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(arr_22 [i_10] [10] [i_10 - 1] [i_10] [i_10 + 1])))))) ? (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)55)))) != (((/* implicit */int) min(((signed char)58), (((/* implicit */signed char) (_Bool)0)))))))) : ((-(arr_27 [i_10] [i_10 + 2] [i_10] [i_10 + 2])))));
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) (((~(8938186949697471178ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_10 + 1])) ? (((/* implicit */int) arr_37 [i_10])) : (((/* implicit */int) arr_37 [i_10 + 2])))))));
            var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)22695)), ((+(4294967295U)))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
        }
        for (short i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            var_25 |= ((/* implicit */short) arr_35 [(signed char)12]);
            arr_42 [i_10 + 1] [i_12] [i_10] = ((/* implicit */short) arr_29 [i_10 - 1] [i_10 - 1] [i_10]);
        }
        var_26 += ((/* implicit */unsigned char) max((arr_20 [i_10 + 1] [2U] [i_10 + 1] [i_10]), ((~(arr_20 [i_10 - 1] [18ULL] [i_10 + 2] [i_10 + 1])))));
        var_27 = ((/* implicit */unsigned int) arr_41 [(short)8] [i_10]);
    }
    /* LoopSeq 2 */
    for (int i_13 = 0; i_13 < 22; i_13 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            arr_48 [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) ((((unsigned long long int) -2133613480)) <= (((/* implicit */unsigned long long int) arr_44 [i_13] [i_14])))))));
            arr_49 [i_13] [i_13] = max((((((/* implicit */_Bool) (unsigned short)32044)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1U))))) : (((/* implicit */int) (unsigned char)15)))), (((/* implicit */int) (unsigned char)170)));
            var_28 = ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_45 [i_13])))) | (((/* implicit */int) arr_43 [i_14]))))) ? (((-1) / (((/* implicit */int) arr_45 [i_14])))) : (((((/* implicit */int) (unsigned char)55)) + (-11))));
            var_29 = ((/* implicit */_Bool) ((unsigned short) (signed char)-37));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                var_30 = (-((~(((/* implicit */int) (unsigned char)188)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 4) 
                {
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_56 [i_17 - 1] [(unsigned char)15] [i_16 - 1] [i_17 + 1] [i_16 - 1] [i_17 + 1]))));
                    arr_59 [13U] [i_15] [i_16] [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_57 [i_13] [i_16 - 1] [i_17 + 1])) ? (arr_57 [(unsigned char)15] [i_16 - 1] [i_17 - 1]) : (arr_57 [i_13] [i_16 - 1] [i_17 + 1]))) - (((arr_57 [i_13] [i_16 - 1] [i_17 - 1]) * (arr_57 [i_17 - 1] [i_16 - 1] [i_17 - 1])))));
                    arr_60 [i_13] [i_13] [i_15] [7LL] [i_16 - 1] [i_17 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_53 [i_15] [i_15] [(unsigned char)4]))))), (max((arr_54 [i_15] [i_16] [i_15]), (((/* implicit */unsigned int) arr_53 [i_15] [i_13] [i_16]))))));
                    var_32 = ((/* implicit */short) arr_53 [i_15] [i_16 - 1] [i_15]);
                    var_33 = (+((+(((/* implicit */int) arr_56 [i_13] [i_13] [i_15] [i_13] [i_16] [i_17 - 1])))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    var_34 ^= min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) (_Bool)0)) * (-2133613487))));
                    var_35 = (+(((/* implicit */int) (_Bool)1)));
                    arr_65 [i_13] [i_15] [i_16] [i_15] = ((/* implicit */long long int) (-(((/* implicit */int) arr_61 [i_13] [i_16 - 1] [i_16] [i_15] [(_Bool)1] [i_16 - 1]))));
                    arr_66 [i_15] [(unsigned char)14] [i_16 - 1] [i_15] [i_15] = ((/* implicit */unsigned char) ((unsigned short) max((721642275753383624ULL), (18446744073709551615ULL))));
                }
                for (signed char i_19 = 2; i_19 < 21; i_19 += 4) 
                {
                    arr_69 [i_15] [i_19 - 1] = ((((/* implicit */int) min((arr_55 [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_16 - 1]), (arr_55 [i_19 + 1] [i_19 - 2] [i_16 - 1] [i_16 - 1])))) / (((((/* implicit */_Bool) arr_55 [i_19 + 1] [i_19 - 1] [i_16 - 1] [i_16 - 1])) ? (((/* implicit */int) arr_55 [i_19 - 1] [i_19 - 1] [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_63 [i_19 - 2] [i_19 - 1] [i_16 - 1] [i_16 - 1])))));
                    arr_70 [i_15] [i_15] [i_15] = ((/* implicit */short) 661632570U);
                    var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))));
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 2; i_20 < 20; i_20 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 7720710523587772010ULL))));
                        arr_75 [i_20] [(unsigned char)3] [i_16] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_68 [i_19] [i_19 - 2] [i_19 - 2] [i_19 - 2] [i_19])), (((long long int) 1354647034U))))) - (((((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [i_15] [i_15] [i_16]))))) ? ((+(6827426340674750336ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)14745))))))));
                        var_38 = (i_15 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) (short)1233)) >> (((((/* implicit */int) arr_74 [i_15] [19U] [i_16 - 1] [i_19 - 2] [i_20] [i_20 + 1])) + (8547)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (short)1233)) >> (((((((/* implicit */int) arr_74 [i_15] [19U] [i_16 - 1] [i_19 - 2] [i_20] [i_20 + 1])) + (8547))) - (31540))))));
                        arr_76 [i_15] [(unsigned short)15] [i_15] [i_15] = ((/* implicit */int) (-((~(11393633476283412546ULL)))));
                    }
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_74 [i_19] [i_15] [i_15] [i_15] [i_15] [i_15])))))));
                }
            }
            for (signed char i_21 = 1; i_21 < 21; i_21 += 1) 
            {
                arr_80 [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)121)), ((unsigned short)22695)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((((/* implicit */long long int) arr_77 [i_21 + 1] [i_21 + 1] [i_15])), (arr_72 [i_13] [(unsigned char)6] [i_21] [i_13] [i_13] [i_21 + 1] [i_15])))));
                var_40 -= ((/* implicit */unsigned short) (-(((unsigned long long int) arr_58 [i_21 + 1] [i_21 + 1]))));
                var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned char)254))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_21] [i_21 - 1] [i_21] [i_15] [i_15] [i_13] [i_13])))))) : (min((arr_72 [i_13] [i_13] [i_13] [i_15] [i_13] [i_21 + 1] [i_21 - 1]), (((/* implicit */long long int) (_Bool)1)))))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                for (unsigned short i_23 = 2; i_23 < 18; i_23 += 4) 
                {
                    {
                        arr_89 [i_13] [i_13] [2] [i_15] [i_23 - 1] = ((/* implicit */signed char) (unsigned short)0);
                        var_42 = ((/* implicit */_Bool) arr_84 [i_13] [i_15] [i_15]);
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 2; i_24 < 20; i_24 += 3) 
                        {
                            arr_92 [i_13] [i_15] [i_15] [i_23 + 3] [i_15] = ((/* implicit */int) arr_45 [i_13]);
                            arr_93 [i_24] [i_23] [i_15] [i_15] [i_13] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_81 [i_24 + 1] [i_24 + 2] [i_23 + 2] [i_23])))))));
                            var_43 = ((/* implicit */unsigned int) (~(7053110597426139068ULL)));
                            arr_94 [i_15] [i_15] [i_22] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_91 [i_13] [i_15] [(unsigned char)16] [i_22] [i_24 - 2] [i_22]))))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33487))) + (10067257872297599338ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_15] [i_15] [i_22] [i_23] [i_23 - 2] [(_Bool)0])))));
                            arr_95 [i_15] [i_15] [i_15] [16U] [(unsigned char)1] = ((/* implicit */unsigned short) arr_45 [i_13]);
                        }
                    }
                } 
            } 
            arr_96 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((arr_85 [i_15] [i_15] [i_15] [i_15] [i_13]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) & (((/* implicit */long long int) ((int) arr_43 [i_13])))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_100 [i_13] [i_25] [i_25] = ((/* implicit */signed char) arr_86 [i_13] [i_13] [(short)16] [(unsigned short)8]);
            /* LoopSeq 2 */
            for (unsigned long long int i_26 = 2; i_26 < 19; i_26 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
                {
                    for (unsigned char i_28 = 2; i_28 < 19; i_28 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 16822290595484623268ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_101 [i_28 + 2] [i_26 - 1] [i_25])))));
                            var_45 = ((/* implicit */unsigned long long int) arr_97 [i_28]);
                            arr_108 [17LL] [i_25] [i_26] [i_25] [17] = ((/* implicit */unsigned char) arr_45 [i_13]);
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */int) arr_88 [i_13] [i_25] [i_13] [i_27])) < (((/* implicit */int) ((7053110597426139070ULL) != (((/* implicit */unsigned long long int) arr_52 [i_25]))))))))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_13] [i_26 + 2])) * (((((/* implicit */int) arr_68 [i_13] [i_25] [i_25] [i_26 - 1] [(short)3])) ^ (((/* implicit */int) arr_68 [i_13] [i_13] [i_25] [i_25] [i_13]))))));
            }
            for (int i_29 = 1; i_29 < 20; i_29 += 3) 
            {
                arr_111 [i_13] [i_25] [i_13] |= ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) 1736191983)))) ? (((((/* implicit */_Bool) arr_104 [i_13] [i_25] [i_29] [i_29])) ? (((/* implicit */int) arr_53 [i_13] [i_25] [i_13])) : (((/* implicit */int) (unsigned short)7373)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40785)))))))));
                var_48 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_51 [i_25] [i_25]), (((/* implicit */unsigned char) (!(arr_67 [21ULL] [i_25] [i_25] [i_25] [i_25] [i_29])))))))) / (((unsigned long long int) 8379486201411952263ULL))));
                /* LoopSeq 1 */
                for (long long int i_30 = 0; i_30 < 22; i_30 += 3) 
                {
                    arr_114 [i_13] [i_13] [i_25] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_88 [i_29 - 1] [i_25] [i_29 + 2] [i_29 + 1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_88 [i_29 - 1] [i_25] [i_25] [i_30]))))) : (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned long long int) 15)) : (6660885738028933811ULL))));
                    arr_115 [i_30] [i_25] [i_13] = (((~(((/* implicit */int) arr_47 [i_29 - 1])))) & (((((/* implicit */int) arr_47 [i_29 - 1])) ^ (((/* implicit */int) arr_47 [i_29 + 1])))));
                    var_49 = ((/* implicit */unsigned long long int) arr_77 [i_13] [i_25] [i_25]);
                    var_50 = ((/* implicit */unsigned char) (~(1631694031)));
                    var_51 = ((/* implicit */signed char) (~(((/* implicit */int) arr_83 [9ULL] [9ULL] [i_29] [(unsigned short)10]))));
                }
            }
        }
        arr_116 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_51 [i_13] [(signed char)18])), (-6680271770592840994LL)))) ? (5557526134582043451LL) : (((/* implicit */long long int) 661632570U))));
        var_52 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-9712)) ? (16888498602639360ULL) : (10067257872297599366ULL)));
    }
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
    {
        var_53 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(arr_18 [i_31] [i_31] [i_31])))), (8379486201411952260ULL)));
        var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_61 [i_31] [i_31] [4] [4] [i_31] [i_31])))))));
    }
    var_55 |= ((/* implicit */unsigned char) ((int) (unsigned char)250));
}
