/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177744
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((long long int) 3786645739U))) ? (-8484637317770263608LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18966))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_14))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((-8484637317770263608LL) == (8484637317770263593LL))))))))));
                    var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) -8484637317770263608LL)) ? (((/* implicit */int) (unsigned short)0)) : (499267106)))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24552))) : (-5761230210859269419LL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_11 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5))));
                        var_22 += (-(((/* implicit */int) (!(((/* implicit */_Bool) -8484637317770263610LL))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            arr_14 [(_Bool)1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4234)) && (((/* implicit */_Bool) -8484637317770263609LL))));
                            var_23 = ((/* implicit */int) -8484637317770263614LL);
                            arr_15 [i_3] [i_0] = ((/* implicit */int) ((long long int) arr_2 [i_4 + 1]));
                            var_24 ^= arr_3 [i_2];
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            arr_19 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) var_3);
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) (+(5761230210859269419LL)));
                            var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) -8484637317770263608LL)))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */long long int) ((unsigned int) arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((-(1393656671))) * (((/* implicit */int) (_Bool)0))))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)51067)) * (((/* implicit */int) var_13))))), (-921935626715197402LL)))));
                        var_27 ^= ((/* implicit */unsigned short) arr_17 [i_6] [i_2] [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)61)), (var_0)))) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0]))))) >> (((3455102880U) - (3455102851U)))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) 8484637317770263609LL))));
        /* LoopSeq 3 */
        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
        {
            arr_27 [i_0] [i_0] = 764664012;
            var_29 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8484637317770263609LL)) ? (1) : (((/* implicit */int) (short)-1))))), ((-(var_3))))) << (((/* implicit */int) (short)5))));
        }
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_9 = 2; i_9 < 16; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    arr_36 [i_0] [i_9 - 2] [i_9] [i_10] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_9 + 2] [i_8] [i_0]))) ? (1267312467U) : (var_15));
                    var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_9 - 2] [4U] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_8] [i_9 - 2] [i_9] [(_Bool)1] [i_10]))) : (2076043313U)))) : ((-(10365555889558093194ULL)))));
                    arr_37 [i_0] [i_8] [i_9] [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) arr_8 [i_0] [i_8] [i_9] [i_10 + 2]);
                    arr_38 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_9 [i_10 + 1] [i_10 + 1] [i_0] [i_0]))));
                }
                for (unsigned short i_11 = 4; i_11 < 17; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        arr_43 [i_0] [i_8] [i_0] [i_11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3027654825U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41728))))) : (((/* implicit */int) (unsigned char)195))));
                        arr_44 [i_0] [i_8] = ((/* implicit */short) ((unsigned short) arr_5 [i_9 - 1] [i_11 - 2] [i_11 - 4]));
                    }
                    var_31 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
                    arr_45 [i_0] [i_9 + 2] [i_11] = var_8;
                }
                /* LoopSeq 2 */
                for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 4; i_14 < 17; i_14 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) ((arr_51 [i_0] [i_13] [i_9 - 1] [i_8] [i_0]) && (((/* implicit */_Bool) var_16))));
                        arr_53 [i_0] [i_14] &= ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_13] [i_8] [i_14]))) < (arr_22 [i_0] [i_14] [i_9])))));
                    }
                    arr_54 [(unsigned char)3] [i_0] [i_9] [i_9] [i_0] [i_9 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) 3027654829U)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (short)-19995))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_59 [i_0] = ((((/* implicit */int) (unsigned short)41728)) << (((16864516622623936197ULL) - (16864516622623936190ULL))));
                    arr_60 [i_0] [i_9 - 2] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_0] [2LL] [i_9] [i_15] [i_9 - 1] [i_0] [i_8])) >> (((7604691245245108833ULL) - (7604691245245108829ULL)))));
                }
                arr_61 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((((var_12) || (((/* implicit */_Bool) -1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_9 + 1] [i_9 + 1] [i_9 + 2]))) : (((((/* implicit */_Bool) 8081188184151458422ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1267312467U)))));
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((unsigned char) arr_30 [i_9 - 2] [10ULL] [10ULL])))));
                arr_62 [i_9] [6U] [6U] [i_0] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
            }
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                arr_67 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_0] [i_0]))));
                var_34 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_8] [i_16])) % (((/* implicit */int) (unsigned short)41728))));
                arr_68 [i_0] = ((/* implicit */unsigned int) (unsigned short)20520);
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_72 [i_0] [i_8] = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) var_0))))))))));
                /* LoopSeq 4 */
                for (long long int i_18 = 2; i_18 < 17; i_18 += 3) /* same iter space */
                {
                    arr_75 [i_17] [i_0] [7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((10842052828464442775ULL) % (((/* implicit */unsigned long long int) 1187134932U)))), (((/* implicit */unsigned long long int) 1187134932U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)226))))), (min((((/* implicit */unsigned char) var_10)), (var_4))))))) : (var_16)));
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 4; i_19 < 17; i_19 += 1) 
                    {
                        arr_78 [i_0] [i_0] [i_17] [i_18] [17ULL] = (i_0 % 2 == zero) ? (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32767))))) ? (((((/* implicit */int) arr_64 [i_0] [i_8])) << (((arr_55 [i_0] [i_8] [i_17] [(unsigned short)6] [i_19]) + (3378377322841268618LL))))) : (((arr_23 [i_0] [i_0] [i_0] [i_17] [i_18 - 2] [i_19]) ? (((/* implicit */int) arr_1 [i_0] [i_8])) : (((/* implicit */int) arr_77 [i_0] [i_0] [i_17] [i_18] [(unsigned short)10])))))))))) : (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32767))))) ? (((((/* implicit */int) arr_64 [i_0] [i_8])) << (((((arr_55 [i_0] [i_8] [i_17] [(unsigned short)6] [i_19]) + (3378377322841268618LL))) + (4506841295695050763LL))))) : (((arr_23 [i_0] [i_0] [i_0] [i_17] [i_18 - 2] [i_19]) ? (((/* implicit */int) arr_1 [i_0] [i_8])) : (((/* implicit */int) arr_77 [i_0] [i_0] [i_17] [i_18] [(unsigned short)10]))))))))));
                        arr_79 [i_0] [i_18] [i_17] [i_8] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [4LL] [i_17] [i_18 - 1] [i_19 - 1]))) ^ (var_5))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((int) (-((-(368684425)))))))));
                        var_36 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)195)))))));
                        arr_82 [i_0] [i_0] [i_17] [i_17] [i_18 - 2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_77 [i_18 + 1] [i_0] [i_18 - 1] [i_0] [i_18 - 1])) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_77 [i_18 + 1] [i_0] [i_18 - 2] [i_0] [i_18 + 1])))))) : (((long long int) arr_77 [i_18 + 1] [i_0] [i_18 - 1] [i_0] [i_18 - 2]))));
                        arr_83 [i_0] [i_8] [i_8] [0] [i_20] = ((/* implicit */int) ((_Bool) ((unsigned short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_18] [i_18] [i_18] [i_18] [i_18 + 1])))))));
                    }
                    arr_84 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8081188184151458417ULL)) ? (((unsigned long long int) -116816423986392063LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_55 [i_0] [i_18 - 2] [i_18 - 2] [i_18 + 1] [i_18 + 1]))))));
                    arr_85 [i_0] [i_0] [i_8] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)84)))))) || ((!(((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)12] [i_0] [i_18 - 1]))))));
                }
                for (long long int i_21 = 2; i_21 < 17; i_21 += 3) /* same iter space */
                {
                    arr_88 [16ULL] [(_Bool)1] &= min((((((/* implicit */int) ((((/* implicit */_Bool) 8081188184151458411ULL)) && (((/* implicit */_Bool) var_8))))) ^ (((/* implicit */int) arr_77 [i_21 - 2] [16] [i_21 - 2] [i_21 - 2] [i_21 - 2])))), ((-(((/* implicit */int) (unsigned short)50839)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_22 = 2; i_22 < 15; i_22 += 3) 
                    {
                        arr_92 [i_0] [i_8] [i_8] [i_21 + 1] [6ULL] [i_0] = ((/* implicit */long long int) (!(arr_25 [i_22 + 3] [i_22 - 1] [i_22 - 1])));
                        arr_93 [i_0] = ((/* implicit */int) ((unsigned long long int) ((long long int) (_Bool)0)));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((unsigned short) 1067842648U)))));
                    }
                }
                for (long long int i_23 = 2; i_23 < 17; i_23 += 3) /* same iter space */
                {
                    arr_96 [i_0] [i_8] [i_17] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)23817))))));
                    arr_97 [i_0] [i_0] [i_17] [i_23] = ((((/* implicit */_Bool) ((int) var_5))) || (((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) (unsigned char)14)), (arr_89 [i_0] [i_8] [i_17] [i_17] [i_23] [i_0]))))));
                }
                for (signed char i_24 = 0; i_24 < 18; i_24 += 3) 
                {
                    arr_100 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                    arr_101 [i_0] = ((/* implicit */unsigned short) min((((17413153558847870500ULL) >> (((((/* implicit */int) (unsigned short)23817)) - (23797))))), (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) var_4))))))));
                    var_38 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)-10269)) ? (3255429555U) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) -1238248177)))))))))));
                    var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-10013)) <= (-510409081)));
                }
                var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) arr_99 [i_0] [i_8] [6ULL] [6]))));
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
            {
                arr_106 [15ULL] [i_0] [i_25] [i_25] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) min(((unsigned short)23813), (((/* implicit */unsigned short) var_6))))) : (((int) -5)))));
                arr_107 [i_25] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_8 [i_25] [i_8] [i_8] [i_0]), (arr_8 [i_0] [i_8] [i_25] [i_25])))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_0]))) + (15240808536770261619ULL)))));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_27 = 0; i_27 < 18; i_27 += 1) 
                {
                    arr_112 [i_0] [i_8] [i_26] [i_27] [(signed char)10] = ((/* implicit */unsigned char) ((1213266985U) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    arr_113 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -510409065))));
                }
                arr_114 [i_0] [i_26] [i_26] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) -874932142)))) - (((1340512234U) & (((/* implicit */unsigned int) var_9))))))) ? ((-(arr_111 [i_0] [i_8] [i_26] [i_26]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_12))))));
                /* LoopNest 2 */
                for (short i_28 = 0; i_28 < 18; i_28 += 3) 
                {
                    for (int i_29 = 1; i_29 < 16; i_29 += 1) 
                    {
                        {
                            arr_122 [i_0] [i_0] [i_26] [i_28] [i_28] = ((/* implicit */short) ((((unsigned int) ((((/* implicit */int) (short)8191)) < (((/* implicit */int) (short)-8179))))) != (max((((/* implicit */unsigned int) (unsigned char)175)), (((((/* implicit */_Bool) (short)8179)) ? (3255429529U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23817)))))))));
                            var_41 = ((/* implicit */unsigned char) -4506968484943910526LL);
                        }
                    } 
                } 
            }
        }
        for (int i_30 = 0; i_30 < 18; i_30 += 3) 
        {
            arr_127 [i_0] [i_0] = (_Bool)1;
            /* LoopNest 2 */
            for (long long int i_31 = 2; i_31 < 17; i_31 += 3) 
            {
                for (long long int i_32 = 0; i_32 < 18; i_32 += 2) 
                {
                    {
                        arr_133 [i_0] [i_31] [i_32] = ((/* implicit */int) (_Bool)1);
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_55 [i_32] [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31 + 1])), (arr_4 [16] [16] [i_31] [i_32]))) & (((/* implicit */unsigned long long int) (~(((arr_42 [i_0] [i_0] [i_30] [i_31] [i_31] [i_32] [i_32]) ? (arr_120 [i_32] [i_31] [i_31] [i_32] [i_32] [i_31] [i_30]) : (((/* implicit */int) var_10))))))))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_0] [i_30] [i_0] [i_30])) ? (((/* implicit */int) arr_73 [i_0] [i_0] [i_0] [i_0])) : (arr_46 [i_0] [i_0] [i_0] [i_0])))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (1210532115U)))));
        }
    }
}
