/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11397
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
    var_16 = max((max((((/* implicit */long long int) var_6)), (var_5))), (var_5));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max(((short)4514), ((short)512)));
        var_17 = ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (short)512)), (arr_1 [i_0]))), (max((arr_1 [i_0]), (((/* implicit */long long int) var_15))))))) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1)));
        var_18 = ((/* implicit */unsigned short) max(((signed char)0), (((/* implicit */signed char) ((((/* implicit */int) var_15)) <= (((/* implicit */int) (short)510)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) ? ((+(((/* implicit */int) (short)17644)))) : ((-(((/* implicit */int) (unsigned char)192))))));
        var_19 = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */short) (signed char)-3)), ((short)-511)))) + (2147483647))) >> ((((~(arr_2 [i_0] [i_0]))) - (347087398)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_18 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_2] [i_3 - 1] [i_2])) >= (((/* implicit */int) var_15))));
                        var_20 &= ((/* implicit */signed char) (-(((/* implicit */int) (short)512))));
                        arr_19 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 - 1])) ? (var_9) : (((/* implicit */int) arr_7 [i_3 - 1]))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1]))));
            arr_20 [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */long long int) (((~(arr_10 [i_2] [(_Bool)1] [(short)15]))) << (((((arr_16 [i_1] [i_1] [i_1] [14] [i_1] [i_2]) ^ (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2] [i_1] [(unsigned short)11])))) - (2168512056464004129ULL)))))) : (((/* implicit */long long int) (((~(arr_10 [i_2] [(_Bool)1] [(short)15]))) << (((((((arr_16 [i_1] [i_1] [i_1] [14] [i_1] [i_2]) ^ (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2] [i_1] [(unsigned short)11])))) - (2168512056464004129ULL))) - (11072928845548805293ULL))))));
            var_22 += ((/* implicit */short) arr_14 [i_1] [i_1] [i_1] [i_2] [i_2]);
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            var_24 &= (~(max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_5 - 1] [i_1])), (max((((/* implicit */unsigned long long int) var_5)), (var_14))))));
            var_25 = ((/* implicit */unsigned long long int) ((8174816126674617959ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_26 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (short)8308))))) ? (max((var_0), (((/* implicit */long long int) arr_13 [i_1])))) : (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) -460254638)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_27 &= ((/* implicit */_Bool) (+(5986900543911434889ULL)));
                            var_28 += ((/* implicit */short) arr_8 [i_5]);
                            var_29 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_30 [i_1] [i_5 - 2] [i_5] [i_1] [i_8])) : (((/* implicit */int) arr_26 [i_8] [i_7] [i_5 - 1] [11ULL]))))))), ((-(arr_11 [i_1] [i_5] [i_1])))));
                        }
                    } 
                } 
                arr_31 [i_1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)-1)), (-2814321035240163085LL)));
                var_30 = ((/* implicit */_Bool) max(((short)510), (((/* implicit */short) (_Bool)0))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    var_31 = (short)-513;
                    arr_37 [i_1] [4ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(4294967295U)));
                    var_32 = ((/* implicit */unsigned long long int) (short)27594);
                    arr_38 [i_1] [(_Bool)1] [i_9] [(_Bool)1] = ((/* implicit */long long int) ((arr_23 [i_5] [(short)15] [i_5 + 3]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_27 [i_1] [i_9] [i_11] [i_11] [i_9] [i_11]))));
                    var_34 |= ((/* implicit */int) (-((+(arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                }
                for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
                {
                    var_35 = (-(((unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_12])) || (((/* implicit */_Bool) arr_7 [i_9]))))));
                    var_36 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)52785))));
                }
                var_37 += ((/* implicit */unsigned int) ((int) arr_22 [i_9] [i_1]));
                /* LoopNest 2 */
                for (long long int i_13 = 2; i_13 < 21; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        {
                            var_38 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)52790)) || (((((/* implicit */_Bool) 1LL)) || (((/* implicit */_Bool) (signed char)9)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (max((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) var_7))))), (((arr_48 [i_1] [i_5] [i_1] [i_5] [i_14] [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [(unsigned short)7] [i_1])))))))));
                            arr_49 [i_1] [i_5 + 1] [i_5 + 1] [i_1] [i_1] [i_13] = var_0;
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                arr_54 [i_1] [14] [i_15] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (max((((var_0) | (((/* implicit */long long int) arr_47 [i_15] [i_15] [i_15] [i_5] [i_5] [i_1] [i_1])))), (((/* implicit */long long int) var_9))))));
                arr_55 [i_1] [i_1] [(short)19] = ((/* implicit */int) ((unsigned char) 4294967291U));
                var_39 &= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) max((arr_12 [i_1] [i_1] [i_1] [(short)11]), (((/* implicit */int) arr_23 [(_Bool)1] [i_15] [3ULL]))))), (max((((/* implicit */unsigned long long int) arr_36 [(_Bool)1])), (var_12))))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)12731)))))));
            }
        }
        /* vectorizable */
        for (short i_16 = 1; i_16 < 23; i_16 += 3) 
        {
            var_40 ^= ((/* implicit */_Bool) var_12);
            /* LoopNest 2 */
            for (short i_17 = 1; i_17 < 23; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    {
                        var_41 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-8263)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) arr_9 [i_1] [i_16] [i_16])))))) : ((+(arr_58 [i_1] [i_16 - 1] [i_16])))));
                        arr_64 [i_16] [i_1] [i_17 - 1] = ((/* implicit */_Bool) var_15);
                        var_42 = ((/* implicit */_Bool) var_3);
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10976937)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))));
                        arr_65 [i_1] [i_1] [i_16] [i_17] [i_18] [i_16] = ((/* implicit */_Bool) (~(var_12)));
                    }
                } 
            } 
            var_44 += ((/* implicit */_Bool) var_11);
            /* LoopSeq 2 */
            for (unsigned long long int i_19 = 3; i_19 < 23; i_19 += 3) 
            {
                var_45 = ((/* implicit */short) arr_69 [i_16]);
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        {
                            arr_76 [i_1] [i_16] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-8309))));
                            var_46 = ((/* implicit */_Bool) 0ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    for (long long int i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (arr_36 [i_19 - 2])));
                            var_48 = ((/* implicit */unsigned long long int) (unsigned char)155);
                            var_49 = ((/* implicit */signed char) (-(var_3)));
                        }
                    } 
                } 
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_25 = 3; i_25 < 20; i_25 += 3) /* same iter space */
                {
                    var_50 = ((/* implicit */long long int) var_15);
                    var_51 = ((/* implicit */unsigned short) (-((-(10976937)))));
                    var_52 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15855353179153799017ULL)) ? (((/* implicit */int) (short)516)) : (((/* implicit */int) (unsigned char)0)))))));
                }
                for (signed char i_26 = 3; i_26 < 20; i_26 += 3) /* same iter space */
                {
                    var_53 -= ((/* implicit */unsigned char) (~(-1)));
                    /* LoopSeq 2 */
                    for (int i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((/* implicit */_Bool) -3623845828726599951LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_33 [i_26] [i_16 - 1] [i_27] [i_16 + 1])))))));
                        arr_92 [i_1] [i_16] [i_16 - 1] [i_24] [i_24] [i_26] [i_27] = ((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1]);
                        arr_93 [i_1] [i_24] [(short)1] [i_16] = (short)-976;
                    }
                    for (unsigned long long int i_28 = 1; i_28 < 23; i_28 += 2) 
                    {
                        var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) var_8))));
                        var_56 = ((/* implicit */int) ((((/* implicit */_Bool) (~(15855353179153799017ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_16] [i_26 - 2] [i_16]))) : (((((arr_62 [i_1] [i_24] [9LL]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)90)) - (51)))))));
                    }
                    var_57 = ((/* implicit */long long int) (unsigned char)0);
                    var_58 = ((/* implicit */unsigned int) ((arr_63 [i_26 + 3] [i_26] [i_26 + 4] [i_26 + 1] [i_26] [i_26]) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_16 - 1] [22] [i_26] [i_26 + 1])))));
                }
                for (signed char i_29 = 3; i_29 < 20; i_29 += 3) /* same iter space */
                {
                    var_59 += ((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) var_15)) - (245)))));
                    var_60 += (short)516;
                    arr_100 [i_1] [i_16 - 1] [i_16] [i_29] = ((/* implicit */unsigned char) (short)510);
                    arr_101 [i_1] [i_16] [21LL] [i_29] [i_16] [i_24] = ((/* implicit */unsigned char) arr_97 [i_16]);
                    var_61 = var_13;
                }
                var_62 = ((/* implicit */unsigned long long int) -152452171);
                arr_102 [i_16] [i_1] [i_16] = var_12;
            }
            var_63 = ((/* implicit */unsigned char) (~(arr_59 [i_16 + 1] [i_1] [i_1])));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_30 = 3; i_30 < 23; i_30 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_31 = 0; i_31 < 24; i_31 += 3) /* same iter space */
            {
                arr_109 [i_31] [i_31] [i_31] [i_31] = ((/* implicit */unsigned char) (!(arr_50 [i_30 + 1] [i_30 + 1] [i_30 + 1] [i_30])));
                var_64 *= ((/* implicit */_Bool) var_5);
            }
            for (unsigned char i_32 = 0; i_32 < 24; i_32 += 3) /* same iter space */
            {
                arr_113 [i_1] [i_32] [i_32] = ((/* implicit */unsigned char) (-(15677270538630429671ULL)));
                arr_114 [i_1] [i_30 - 2] [(_Bool)1] |= ((/* implicit */signed char) var_15);
                var_65 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_112 [i_30 + 1] [i_32] [(_Bool)1])) ? ((+(var_14))) : (var_12)));
                var_66 = ((/* implicit */unsigned long long int) var_4);
            }
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                var_67 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_33])) >> (((((((/* implicit */unsigned long long int) var_6)) * (var_14))) - (17076800262481219842ULL)))));
                /* LoopSeq 3 */
                for (long long int i_34 = 0; i_34 < 24; i_34 += 3) /* same iter space */
                {
                    arr_120 [i_33] = var_8;
                    var_68 = ((/* implicit */_Bool) (+(var_6)));
                    var_69 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-118)) && (((/* implicit */_Bool) 0))));
                }
                for (long long int i_35 = 0; i_35 < 24; i_35 += 3) /* same iter space */
                {
                    var_70 = ((/* implicit */unsigned int) var_11);
                    arr_123 [i_33] [i_30] [i_33] [i_30] = ((/* implicit */short) ((((((var_5) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)32767)) - (32760))))) > (((/* implicit */long long int) -192915214))));
                }
                for (unsigned short i_36 = 2; i_36 < 23; i_36 += 2) 
                {
                    var_71 = ((/* implicit */int) var_6);
                    arr_127 [i_33] [i_33] [i_30] [i_33] = ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)0))))));
                    var_72 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) << (((arr_48 [i_1] [i_30 - 3] [15LL] [i_33] [i_36] [i_36 - 2]) - (4101908934507763580ULL)))));
                }
                var_73 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_30 - 2] [(_Bool)1] [i_30 + 1])) ? (((/* implicit */int) arr_44 [i_30] [i_30 - 1] [i_30 + 1] [i_30 - 2] [i_30 - 1] [i_30 - 1])) : (((/* implicit */int) arr_44 [i_30] [i_30] [i_30 + 1] [i_30] [i_30 - 1] [i_30 - 1]))));
            }
            var_74 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_30] [14ULL]))));
        }
    }
    /* vectorizable */
    for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_38 = 0; i_38 < 16; i_38 += 3) /* same iter space */
        {
            var_75 = ((/* implicit */unsigned long long int) arr_24 [i_37]);
            var_76 = ((/* implicit */unsigned long long int) arr_40 [i_37]);
        }
        for (long long int i_39 = 0; i_39 < 16; i_39 += 3) /* same iter space */
        {
            var_77 = ((/* implicit */signed char) max((var_77), (((/* implicit */signed char) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned char)155)))))));
            /* LoopNest 3 */
            for (int i_40 = 1; i_40 < 15; i_40 += 2) 
            {
                for (unsigned short i_41 = 2; i_41 < 12; i_41 += 3) 
                {
                    for (unsigned short i_42 = 0; i_42 < 16; i_42 += 1) 
                    {
                        {
                            var_78 = ((/* implicit */_Bool) (short)26647);
                            var_79 = ((/* implicit */long long int) (_Bool)1);
                            var_80 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31744))) < (var_12)));
                        }
                    } 
                } 
            } 
            var_81 -= arr_15 [i_37] [i_37 - 1] [i_39] [8ULL] [i_39];
            var_82 = ((/* implicit */unsigned short) var_8);
        }
        for (long long int i_43 = 0; i_43 < 16; i_43 += 3) /* same iter space */
        {
            var_83 = ((/* implicit */int) max((var_83), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
            var_84 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) arr_74 [i_37 - 1] [i_37] [i_37 - 1] [i_37] [i_37 - 1]))));
            arr_142 [i_37] [i_37] [i_43] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
        }
        var_85 = ((/* implicit */unsigned long long int) var_0);
    }
}
