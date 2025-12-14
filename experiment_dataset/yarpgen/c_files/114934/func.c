/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114934
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
    var_20 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14057)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-43))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (-((-(arr_0 [i_0])))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 219065669))) ? (((/* implicit */int) (signed char)-49)) : ((+(((/* implicit */int) (short)32762))))));
            var_22 -= arr_5 [i_0] [i_0];
            arr_6 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -611263073)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) (signed char)-1))))));
            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (unsigned char)255))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_11))));
                        var_26 += ((/* implicit */unsigned long long int) (_Bool)1);
                        var_27 = ((/* implicit */int) min((var_27), (1127197244)));
                    }
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_20 [i_6] [i_0] [i_3 + 1] [i_2] [i_0] = ((/* implicit */long long int) 10337310764286619660ULL);
                        var_28 = ((/* implicit */_Bool) var_8);
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_3] [i_0]))) : (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (-1405845187)));
                    }
                    arr_21 [i_3] [i_0] = ((/* implicit */unsigned int) -5113125);
                    var_30 += ((/* implicit */_Bool) arr_3 [i_4] [i_2]);
                }
            }
            for (int i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                var_31 = ((/* implicit */unsigned int) arr_4 [i_7] [i_7 + 1] [i_7 + 2]);
                arr_25 [i_7] [i_2] [i_7] = ((/* implicit */_Bool) (signed char)32);
            }
            /* LoopSeq 4 */
            for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                var_32 |= ((/* implicit */int) ((4294967279U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109)))));
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                arr_28 [i_0] [7] [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_8 + 1]))));
            }
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                arr_31 [i_0] [i_9] = ((/* implicit */unsigned int) (+((-(-219065678)))));
                arr_32 [i_0] [i_0] [i_0] [10] = ((/* implicit */int) (+(0U)));
            }
            for (int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                var_34 -= ((/* implicit */signed char) ((int) arr_1 [i_0]));
                var_35 = arr_30 [i_0] [i_2] [i_2] [i_2];
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    var_36 = ((/* implicit */int) min((var_36), (var_0)));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_2))));
                }
                /* LoopSeq 2 */
                for (signed char i_12 = 3; i_12 < 19; i_12 += 2) 
                {
                    var_38 = ((/* implicit */_Bool) var_7);
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                    var_40 = ((/* implicit */signed char) ((5197188090850527740LL) << (((1133036453903171224ULL) - (1133036453903171224ULL)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_44 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) : (905820892U)));
                    var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [2LL] [i_10] [8U] [i_0])) ? (((/* implicit */int) arr_30 [i_0] [i_2] [i_10] [i_2])) : (((/* implicit */int) arr_30 [i_0] [i_2] [i_10] [i_2]))));
                }
            }
            for (short i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    var_42 &= ((/* implicit */long long int) arr_42 [i_0] [i_2] [i_2] [i_14] [i_15]);
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0] [i_2] [i_14] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (-219065678)));
                }
                for (int i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    var_44 = ((/* implicit */int) ((signed char) var_0));
                    arr_53 [i_0] [i_2] [i_14] [i_16] [i_2] [i_0] = ((/* implicit */unsigned int) (signed char)-1);
                }
                var_45 = ((/* implicit */long long int) min((var_45), (var_4)));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    for (int i_18 = 1; i_18 < 18; i_18 += 2) 
                    {
                        {
                            var_46 = (+(((/* implicit */int) (short)25314)));
                            arr_59 [i_0] [i_2] [i_18] [i_17] [i_18] = ((/* implicit */unsigned char) arr_55 [i_0] [i_2] [i_18 + 2] [i_2] [i_18] [i_0]);
                        }
                    } 
                } 
                var_47 = ((/* implicit */_Bool) (unsigned char)255);
            }
            /* LoopSeq 3 */
            for (unsigned int i_19 = 4; i_19 < 19; i_19 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_20 = 1; i_20 < 20; i_20 += 2) 
                {
                    var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) -5964407077901572906LL))));
                    var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) var_2))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_22 = 0; i_22 < 21; i_22 += 3) 
                    {
                        var_50 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_2] [4U] [16ULL])) ? (arr_16 [i_2] [i_19] [i_21] [i_22]) : (-219065670)));
                        arr_70 [i_0] [i_2] [i_19 - 4] [i_21] [i_21] [i_19] = ((/* implicit */long long int) (~(arr_61 [i_0] [i_19] [i_19 + 1] [i_19 - 1])));
                        var_51 += ((/* implicit */long long int) var_17);
                    }
                    for (short i_23 = 2; i_23 < 20; i_23 += 2) 
                    {
                        arr_74 [i_0] [i_19] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                        arr_75 [i_0] [i_19] [i_2] = (((~(((/* implicit */int) (_Bool)1)))) / (2147483647));
                        arr_76 [i_0] [i_2] [i_19] [i_21] [i_21] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_30 [i_0] [(signed char)1] [i_19] [i_23]))))));
                    }
                    for (short i_24 = 3; i_24 < 20; i_24 += 3) 
                    {
                        arr_79 [i_2] [i_0] [i_19] [i_21] [i_2] = ((/* implicit */short) var_17);
                        var_52 = (short)-25314;
                        var_53 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))));
                        arr_80 [i_2] [i_2] [i_2] [i_21] [i_24] [i_2] [12] &= ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (354989934240528485ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))));
                    }
                    for (short i_25 = 0; i_25 < 21; i_25 += 1) 
                    {
                        arr_85 [i_0] [i_0] [i_0] [i_19] [i_19] [i_21] [i_25] = ((/* implicit */_Bool) (~(arr_57 [i_0] [i_0] [i_19] [i_21] [i_25] [i_19] [i_19 + 1])));
                        var_54 ^= ((/* implicit */signed char) 7552074085017570075LL);
                    }
                    /* LoopSeq 3 */
                    for (long long int i_26 = 1; i_26 < 17; i_26 += 3) /* same iter space */
                    {
                        arr_88 [i_0] [i_2] [i_19] [i_19 - 3] [i_21] [i_21] [i_26] = ((/* implicit */short) 6280543722827196564LL);
                        var_55 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25343)) ? (((/* implicit */unsigned int) -219065670)) : (var_9)))) ? (arr_19 [i_19 + 2] [i_26] [i_26] [i_26 + 1] [i_26]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
                        var_56 = ((/* implicit */unsigned int) var_17);
                    }
                    for (long long int i_27 = 1; i_27 < 17; i_27 += 3) /* same iter space */
                    {
                        var_57 += ((/* implicit */signed char) arr_51 [i_27] [i_21]);
                        arr_91 [i_27] [i_19] [i_0] [i_19] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) -5113125)))));
                        arr_92 [i_0] [i_0] [i_19] [i_19] [i_21] [i_27] = ((/* implicit */signed char) arr_90 [i_0] [i_0] [i_0] [i_0] [i_19] [i_0] [i_0]);
                    }
                    for (signed char i_28 = 1; i_28 < 19; i_28 += 3) 
                    {
                        var_58 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_68 [i_28 + 2] [i_28] [i_21] [i_19 - 4] [i_19 - 4] [i_19 - 2] [i_0])) | (((((/* implicit */_Bool) (short)-9)) ? (-561459708) : (((/* implicit */int) (signed char)-2))))));
                        arr_96 [19] [i_2] [i_19] [i_19] [6] = ((/* implicit */unsigned int) ((_Bool) (-(var_12))));
                        arr_97 [i_0] [i_0] [i_0] [i_0] [i_0] [i_19] [i_0] = ((/* implicit */signed char) ((int) (short)25303));
                    }
                    arr_98 [i_2] [i_2] [i_19] [i_19] |= ((/* implicit */short) arr_10 [i_0] [i_2]);
                    /* LoopSeq 3 */
                    for (int i_29 = 0; i_29 < 21; i_29 += 3) /* same iter space */
                    {
                        var_59 -= ((short) (signed char)-1);
                        var_60 &= ((/* implicit */unsigned int) arr_51 [i_0] [i_0]);
                    }
                    for (int i_30 = 0; i_30 < 21; i_30 += 3) /* same iter space */
                    {
                        var_61 += ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_12)))));
                        arr_106 [i_19] [i_2] [i_19] [i_19] [i_30] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) 425364127)));
                    }
                    for (int i_31 = 0; i_31 < 21; i_31 += 3) /* same iter space */
                    {
                        var_62 -= ((/* implicit */signed char) arr_13 [i_0]);
                        var_63 |= ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_19 - 2]))));
                        var_64 = ((/* implicit */unsigned long long int) max((var_64), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
                        arr_109 [i_0] [i_0] [i_19] [i_21] [i_0] = arr_33 [i_0];
                    }
                    var_65 = ((/* implicit */unsigned int) max((var_65), (((/* implicit */unsigned int) (signed char)0))));
                }
                var_66 = ((/* implicit */long long int) min((var_66), (((arr_67 [i_19 - 1] [i_19 - 1] [i_19 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_0] [i_0] [i_0] [i_19])))))));
                /* LoopNest 2 */
                for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                {
                    for (long long int i_33 = 0; i_33 < 21; i_33 += 3) 
                    {
                        {
                            var_67 = ((/* implicit */signed char) (-(((/* implicit */int) arr_95 [i_33] [i_19] [20] [i_19] [i_19 - 4]))));
                            arr_114 [i_0] [i_0] [i_19] [i_32] [i_19] = ((/* implicit */short) (~(var_12)));
                        }
                    } 
                } 
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                var_68 = ((/* implicit */unsigned int) max((var_68), (var_14)));
                var_69 -= ((/* implicit */short) (~(var_8)));
                var_70 = arr_107 [i_0] [i_0] [(_Bool)1] [i_2] [i_2] [i_34];
                /* LoopNest 2 */
                for (short i_35 = 0; i_35 < 21; i_35 += 1) 
                {
                    for (short i_36 = 2; i_36 < 19; i_36 += 4) 
                    {
                        {
                            var_71 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_2] [i_34] [i_36] [i_34] [i_2])))))));
                            var_72 = ((/* implicit */_Bool) min((var_72), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
                        }
                    } 
                } 
            }
            for (long long int i_37 = 0; i_37 < 21; i_37 += 2) 
            {
                var_73 = ((/* implicit */unsigned char) arr_49 [i_37] [i_2] [i_0]);
                var_74 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4289)) ? (-641907033) : (-5113143)));
            }
            arr_124 [i_0] |= ((/* implicit */int) ((signed char) 2251799813685247LL));
        }
        var_75 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_86 [(_Bool)1] [i_0] [20] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_33 [i_0])) ? (((/* implicit */unsigned long long int) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (10797844566128923066ULL)))));
    }
    for (int i_38 = 0; i_38 < 11; i_38 += 3) 
    {
        arr_127 [i_38] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_100 [i_38] [i_38] [i_38] [i_38] [i_38]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((long long int) (short)-25334))))) ? (min((arr_0 [i_38]), (((/* implicit */unsigned long long int) (~(-1182579319967834126LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_38]), (((/* implicit */short) (signed char)14)))))))))));
        arr_128 [i_38] = ((/* implicit */int) var_12);
        /* LoopNest 3 */
        for (int i_39 = 4; i_39 < 9; i_39 += 1) 
        {
            for (unsigned int i_40 = 0; i_40 < 11; i_40 += 2) 
            {
                for (int i_41 = 0; i_41 < 11; i_41 += 2) 
                {
                    {
                        var_76 *= ((/* implicit */unsigned int) 15038945756799328033ULL);
                        var_77 = ((/* implicit */short) (~(var_0)));
                    }
                } 
            } 
        } 
    }
    var_78 -= var_14;
    var_79 = ((/* implicit */int) var_13);
    var_80 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)62))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_18))))) : (((((/* implicit */long long int) (~(var_1)))) + (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))))));
}
