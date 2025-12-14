/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169923
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] [i_0] [(unsigned char)2] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15074)))))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) ((unsigned short) (signed char)16))))));
            arr_6 [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_0])))) * (((-1) / (((((/* implicit */int) (unsigned char)205)) / (((/* implicit */int) arr_1 [(unsigned char)1]))))))));
            var_20 = ((/* implicit */long long int) (signed char)-10);
        }
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            var_21 ^= (+((+(((/* implicit */int) arr_2 [6ULL] [i_2 + 1] [i_2 + 1])))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_2 [6LL] [i_2] [(unsigned char)0]))));
        }
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (signed char)-25))))))));
    }
    for (int i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        var_24 = (-(max((983040), (arr_9 [i_3 + 2] [i_3]))));
        arr_12 [i_3] = ((/* implicit */int) arr_10 [i_3] [i_3]);
        var_25 = ((/* implicit */_Bool) 1);
    }
    for (short i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        arr_16 [8] [8] = ((/* implicit */unsigned char) ((min((((((/* implicit */long long int) ((/* implicit */int) (signed char)18))) - (-1LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 591615160U))))))) - (((/* implicit */long long int) arr_9 [5LL] [i_4 + 2]))));
        var_26 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_13 [i_4 + 1] [12LL])))) | (((/* implicit */int) ((_Bool) 23LL)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_5 = 4; i_5 < 15; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (int i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_26 [i_4 + 1] [i_4] [i_7] [i_4] = ((/* implicit */int) (!(arr_17 [i_4 + 1])));
                        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)9))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((long long int) arr_11 [i_4 + 1])))));
                    }
                } 
            } 
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(signed char)13] [i_4])) && (((/* implicit */_Bool) (~(arr_24 [(signed char)4] [(signed char)4] [i_5 - 3] [i_5]))))));
            var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)5))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_31 = ((/* implicit */long long int) ((_Bool) arr_23 [i_4] [i_4] [i_4] [(unsigned char)2] [i_4 + 1] [i_8]));
            arr_30 [i_4] [i_4] [6U] = ((_Bool) (!(((/* implicit */_Bool) (short)-4096))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (9223370937343148032ULL)));
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)105))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((long long int) (unsigned char)100)) ^ (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4 + 1] [i_4 + 2] [i_9] [i_4 + 2] [i_11] [i_11] [(_Bool)1]))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_13 = 1; i_13 < 13; i_13 += 2) 
                {
                    var_35 = (!(((/* implicit */_Bool) arr_39 [(unsigned short)8] [i_4 + 2] [i_10] [i_13 - 1] [i_13 + 1])));
                    arr_45 [i_4 + 2] [i_4] [i_4] [i_10] [i_4 + 2] [i_4] = ((/* implicit */signed char) 6570624893207520480LL);
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    var_36 = ((/* implicit */signed char) (-(-7428551431805293301LL)));
                    arr_50 [i_4 - 1] [i_4] [2ULL] [(signed char)0] [i_14] [i_4] |= ((/* implicit */long long int) arr_46 [(unsigned short)15] [(short)5] [i_9] [i_4]);
                    arr_51 [i_10] [i_10] [(unsigned short)1] [i_14] = (~(((((/* implicit */int) (unsigned char)145)) ^ (((/* implicit */int) (signed char)-16)))));
                }
            }
            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        {
                            var_37 ^= ((/* implicit */signed char) (-(arr_34 [i_15] [i_4 + 2])));
                            var_38 -= ((int) arr_14 [i_4]);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    arr_65 [i_18] [i_18] [i_18] [i_4] = ((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (short)4069))));
                    var_39 |= ((unsigned long long int) (-(((/* implicit */int) (signed char)-25))));
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((unsigned char) 9075505064027529937ULL)))));
                    var_41 = ((/* implicit */long long int) min((var_41), ((((((~(13LL))) + (9223372036854775807LL))) << ((((((~(848854754))) + (848854806))) - (51)))))));
                    var_42 -= ((/* implicit */_Bool) arr_55 [i_15] [i_15] [i_9] [i_4]);
                }
                for (signed char i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                {
                    var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)101))));
                    arr_70 [i_4 + 1] [i_9] [i_9] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1218877245))));
                    /* LoopSeq 1 */
                    for (signed char i_20 = 3; i_20 < 14; i_20 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (signed char)1))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) arr_9 [8] [i_9]))));
                    }
                }
                for (signed char i_21 = 0; i_21 < 16; i_21 += 4) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned long long int) 1974170339);
                    var_47 = ((/* implicit */unsigned short) (signed char)-32);
                    var_48 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)-75)))) >> ((((~(((/* implicit */int) (unsigned char)109)))) + (116)))));
                }
                for (unsigned char i_22 = 1; i_22 < 15; i_22 += 2) 
                {
                    var_49 = ((/* implicit */signed char) 38481296);
                    arr_78 [i_15] [(short)9] = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) (unsigned char)174)))));
                    var_50 = ((/* implicit */int) ((unsigned char) arr_27 [i_4 + 1]));
                }
                var_51 = ((/* implicit */int) ((_Bool) (+(arr_75 [i_4 + 1]))));
                var_52 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-99)))))));
                arr_79 [i_4] [i_9] [i_9] [i_15] = ((_Bool) 9223373136366403599ULL);
            }
            for (int i_23 = 1; i_23 < 15; i_23 += 2) 
            {
                var_53 &= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)153))));
                var_54 ^= ((/* implicit */int) arr_20 [i_4 + 2]);
            }
        }
        /* vectorizable */
        for (short i_24 = 3; i_24 < 15; i_24 += 4) 
        {
            var_55 -= ((/* implicit */unsigned char) (+(9223370937343148033ULL)));
            arr_84 [i_24] = ((/* implicit */int) ((_Bool) arr_14 [i_4 - 1]));
        }
    }
    var_56 = var_14;
    /* LoopSeq 3 */
    for (long long int i_25 = 0; i_25 < 24; i_25 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_26 = 0; i_26 < 24; i_26 += 3) /* same iter space */
        {
            var_57 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
            /* LoopSeq 4 */
            for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
            {
                arr_91 [i_25] [i_25] [i_27] = ((/* implicit */unsigned char) (-(arr_87 [i_27 - 1])));
                var_58 = ((/* implicit */long long int) min((var_58), (9LL)));
                var_59 = ((/* implicit */_Bool) (~((+(arr_87 [i_25])))));
                arr_92 [(_Bool)1] [(_Bool)1] [i_26] [i_27] = ((/* implicit */signed char) ((unsigned char) (~(6866595257284884249ULL))));
            }
            for (unsigned long long int i_28 = 3; i_28 < 20; i_28 += 3) 
            {
                var_60 -= ((/* implicit */long long int) ((((/* implicit */int) arr_90 [i_28 + 4] [i_28 + 4] [i_28 + 3])) - (((/* implicit */int) (unsigned char)234))));
                arr_95 [16LL] = ((/* implicit */short) ((unsigned char) arr_89 [i_28 + 2] [i_28 + 4] [i_28 + 4]));
            }
            for (unsigned short i_29 = 0; i_29 < 24; i_29 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_30 = 0; i_30 < 24; i_30 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_31 = 2; i_31 < 21; i_31 += 3) 
                    {
                        var_61 = ((/* implicit */_Bool) min((var_61), (((/* implicit */_Bool) (-(((/* implicit */int) arr_102 [i_25] [i_31] [i_31 + 1] [i_31 + 2] [i_25])))))));
                        var_62 = ((/* implicit */unsigned long long int) ((long long int) arr_98 [i_29]));
                        var_63 = ((/* implicit */long long int) arr_86 [i_29]);
                        var_64 ^= ((/* implicit */int) ((arr_97 [i_31 + 3] [i_25]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7)))));
                    }
                    for (int i_32 = 1; i_32 < 21; i_32 += 1) 
                    {
                        var_65 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_105 [i_29] [i_29] [i_29] [i_29] [i_29])))));
                        var_66 -= ((/* implicit */unsigned long long int) ((short) (short)5308));
                        var_67 &= ((/* implicit */long long int) ((((/* implicit */int) arr_104 [i_26] [i_26] [i_25])) + ((-(((/* implicit */int) (unsigned char)225))))));
                    }
                    for (signed char i_33 = 0; i_33 < 24; i_33 += 2) 
                    {
                        arr_108 [i_25] [i_26] [12U] &= ((/* implicit */unsigned char) (+(-8507970509812875981LL)));
                        var_68 = ((/* implicit */long long int) (+(((/* implicit */int) arr_94 [i_25] [i_26] [i_29] [i_30]))));
                        var_69 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-7))));
                    }
                    for (signed char i_34 = 0; i_34 < 24; i_34 += 4) 
                    {
                        var_70 = ((/* implicit */int) (!(arr_90 [i_26] [i_30] [i_34])));
                        var_71 = ((/* implicit */unsigned char) max((var_71), (((/* implicit */unsigned char) (~(arr_87 [i_26]))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_35 = 1; i_35 < 23; i_35 += 4) 
                    {
                        var_72 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)2))));
                        var_73 = ((/* implicit */_Bool) (short)-22457);
                    }
                    var_74 = ((/* implicit */long long int) min((var_74), ((+(arr_99 [i_25] [i_25] [i_25] [i_25] [i_25])))));
                }
                for (long long int i_36 = 1; i_36 < 23; i_36 += 1) 
                {
                    var_75 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_97 [i_36 + 1] [i_29]))));
                    var_76 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)10))));
                }
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    var_77 = ((/* implicit */unsigned short) max((var_77), (((/* implicit */unsigned short) (~(arr_119 [i_29] [i_25] [i_25]))))));
                    arr_120 [i_29] [i_29] [(unsigned char)17] [i_29] = ((/* implicit */signed char) arr_89 [(_Bool)1] [i_26] [i_25]);
                    var_78 = ((/* implicit */_Bool) (-(((unsigned long long int) (unsigned char)7))));
                }
                var_79 = ((/* implicit */long long int) arr_107 [i_25] [i_25] [i_25] [i_25] [4LL] [1]);
            }
            for (int i_38 = 3; i_38 < 21; i_38 += 1) 
            {
                arr_124 [i_38] = ((/* implicit */int) (signed char)1);
                var_80 = ((/* implicit */_Bool) max((var_80), (((/* implicit */_Bool) 549755797504LL))));
                var_81 &= ((int) (unsigned short)13630);
                var_82 = ((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)61031))))));
            }
            arr_125 [i_25] [(unsigned short)22] = ((/* implicit */int) ((-9024709935768353687LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -7LL))))));
        }
        /* vectorizable */
        for (unsigned short i_39 = 0; i_39 < 24; i_39 += 3) /* same iter space */
        {
            var_83 = ((int) (unsigned short)51887);
            var_84 = ((/* implicit */_Bool) 509652717);
            var_85 ^= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)35))));
        }
        for (unsigned short i_40 = 0; i_40 < 24; i_40 += 3) /* same iter space */
        {
            var_86 = ((/* implicit */signed char) (~(((/* implicit */int) (short)27142))));
            arr_131 [i_40] [i_40] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max(((+(((/* implicit */int) arr_106 [i_40])))), ((+(((/* implicit */int) (signed char)28))))))) / (max((-2743427760807207504LL), (((/* implicit */long long int) (_Bool)1))))));
            arr_132 [i_40] = ((/* implicit */unsigned short) (~((~(-4593485810301932811LL)))));
            /* LoopSeq 2 */
            for (int i_41 = 0; i_41 < 24; i_41 += 3) /* same iter space */
            {
                var_87 ^= ((/* implicit */signed char) max(((~((-(((/* implicit */int) arr_88 [(_Bool)1])))))), (((/* implicit */int) ((unsigned short) arr_102 [i_25] [i_40] [i_40] [i_40] [i_40])))));
                var_88 &= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13643))))), ((+(((/* implicit */int) arr_126 [i_41] [i_40] [(signed char)19]))))));
            }
            for (int i_42 = 0; i_42 < 24; i_42 += 3) /* same iter space */
            {
                var_89 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) ((short) arr_121 [i_25] [i_25]))))));
                /* LoopNest 2 */
                for (int i_43 = 4; i_43 < 23; i_43 += 3) 
                {
                    for (short i_44 = 4; i_44 < 23; i_44 += 1) 
                    {
                        {
                            arr_142 [12] [i_40] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_122 [i_44 + 1] [i_44 - 1] [i_44 - 2] [i_44])))), (((/* implicit */int) ((unsigned char) arr_122 [i_44] [22LL] [i_44 - 2] [i_44 + 1])))));
                            arr_143 [i_40] [i_43] [(_Bool)1] [i_42] [i_40] [i_40] = ((/* implicit */short) (~((+(((-4593485810301932806LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                var_90 = ((/* implicit */long long int) min((arr_89 [i_42] [i_40] [i_25]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_141 [i_40]))))))))));
                var_91 = ((/* implicit */unsigned short) ((unsigned char) (+(max((4593485810301932819LL), (-8299713631580538870LL))))));
                /* LoopSeq 3 */
                for (short i_45 = 0; i_45 < 24; i_45 += 4) /* same iter space */
                {
                    var_92 ^= (!(((/* implicit */_Bool) (-(-549755797504LL)))));
                    var_93 ^= ((/* implicit */long long int) ((int) (+(((/* implicit */int) (!(arr_146 [i_25] [i_25])))))));
                    var_94 = ((/* implicit */unsigned char) ((unsigned long long int) min((min((((/* implicit */long long int) (unsigned char)255)), (1LL))), (-4593485810301932792LL))));
                }
                for (short i_46 = 0; i_46 < 24; i_46 += 4) /* same iter space */
                {
                    var_95 -= ((/* implicit */unsigned char) ((signed char) 3070643031974665932LL));
                    var_96 = ((/* implicit */unsigned char) (-(997449109)));
                }
                for (short i_47 = 0; i_47 < 24; i_47 += 4) /* same iter space */
                {
                    arr_153 [i_25] [22] [i_25] &= ((/* implicit */signed char) arr_89 [i_47] [i_42] [i_25]);
                    arr_154 [i_25] [i_40] [i_25] [i_42] [i_25] [i_40] = ((/* implicit */int) -2665318684596984444LL);
                    arr_155 [i_25] [i_40] [i_40] [i_25] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_106 [i_40]))))));
                }
            }
            var_97 = (-((+(2936549222738774133LL))));
        }
        arr_156 [i_25] [i_25] |= (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193))))))));
        arr_157 [i_25] = ((/* implicit */unsigned char) ((long long int) arr_103 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]));
    }
    for (long long int i_48 = 0; i_48 < 24; i_48 += 2) /* same iter space */
    {
        arr_160 [18] = ((/* implicit */unsigned short) ((signed char) (unsigned char)88));
        /* LoopNest 2 */
        for (_Bool i_49 = 0; i_49 < 1; i_49 += 1) 
        {
            for (_Bool i_50 = 0; i_50 < 1; i_50 += 1) 
            {
                {
                    var_98 ^= ((/* implicit */long long int) min((((/* implicit */int) min((arr_103 [i_48] [i_49] [i_50] [i_50] [i_49] [i_49] [i_50]), (arr_103 [i_48] [i_48] [(unsigned char)8] [i_50] [i_50] [(unsigned char)8] [i_50])))), ((~(997449096)))));
                    /* LoopSeq 1 */
                    for (_Bool i_51 = 0; i_51 < 1; i_51 += 1) 
                    {
                        var_99 &= ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) arr_86 [i_50])));
                        var_100 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)205))), (((unsigned long long int) arr_130 [i_48] [i_50]))));
                    }
                }
            } 
        } 
        var_101 = ((/* implicit */unsigned short) max((var_101), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_158 [i_48] [i_48]), (((/* implicit */long long int) arr_122 [i_48] [(short)7] [i_48] [(signed char)2]))))))))));
    }
    for (long long int i_52 = 0; i_52 < 24; i_52 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_53 = 0; i_53 < 1; i_53 += 1) 
        {
            var_102 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(68719476735LL)))))))));
            var_103 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_159 [i_53]))))));
            var_104 = ((/* implicit */unsigned short) arr_171 [i_53] [i_53]);
        }
        arr_173 [i_52] [i_52] = ((/* implicit */unsigned char) arr_140 [i_52] [i_52] [i_52] [i_52] [i_52] [i_52] [i_52]);
        arr_174 [i_52] [i_52] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) max((arr_151 [i_52] [i_52] [i_52] [i_52]), (-997449115)))), (1689353379687037547ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)19))))) / (max((arr_166 [i_52] [i_52] [i_52] [i_52] [i_52]), (((/* implicit */long long int) (signed char)113)))))))));
    }
}
