/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128551
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
    var_10 = ((/* implicit */long long int) var_4);
    var_11 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 |= ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_2)))))), (min((var_7), (var_8)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (var_4)));
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1380448771U))));
            var_14 &= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_7))));
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_7)))))));
                            arr_13 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                            var_16 -= ((/* implicit */int) ((_Bool) var_4));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_6)));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_0))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                        arr_22 [i_0] [i_7] [(signed char)0] [i_0] [i_0] &= ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_0)))));
                        arr_23 [i_0] [i_0] [i_2] [7] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                        arr_24 [(_Bool)1] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                        arr_25 [i_0] [i_1] [i_0] [8LL] [i_7] = ((/* implicit */_Bool) ((unsigned short) var_1));
                    }
                    var_22 = ((/* implicit */long long int) ((unsigned short) var_1));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_9)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                {
                    var_24 = (~(((/* implicit */int) var_4)));
                    var_25 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                    var_26 -= ((/* implicit */long long int) ((unsigned long long int) var_5));
                }
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_27 ^= ((/* implicit */int) (!(((_Bool) var_3))));
                        var_28 *= (!(var_4));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_3))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_1))));
                        arr_35 [i_1] &= ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                        arr_36 [i_0] [i_1] [0LL] [i_1] [(signed char)6] [i_1] [i_1] = ((/* implicit */unsigned short) (!(var_4)));
                    }
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) (-(var_9)));
                        arr_39 [i_0] [i_1] [i_0] [(unsigned short)0] [i_12] [(signed char)6] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
                        var_32 = ((/* implicit */long long int) var_8);
                        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_43 [i_1] [i_0] [i_2] [i_1] [(unsigned short)2] [i_0] [(signed char)5] = ((((/* implicit */int) var_0)) / (((/* implicit */int) var_8)));
                        var_34 = ((/* implicit */_Bool) ((unsigned short) var_7));
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_8));
                    }
                    var_35 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_1))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_36 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                    var_37 = ((/* implicit */unsigned short) (-(var_9)));
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        var_38 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_5))));
                        var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                        var_41 = ((/* implicit */_Bool) max((var_41), (((var_4) || (((/* implicit */_Bool) var_5))))));
                        var_42 = ((/* implicit */signed char) ((int) var_9));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_43 ^= (+(((/* implicit */int) var_8)));
                        var_44 = ((/* implicit */int) ((unsigned short) var_2));
                    }
                    arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_7)))))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    arr_57 [i_0] [i_0] [i_0] [i_18] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2)))))));
                    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_0))));
                    var_46 = var_5;
                }
            }
            for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 1) 
            {
                var_47 = ((/* implicit */_Bool) ((signed char) var_2));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 4) 
                    {
                        {
                            var_48 = var_4;
                            var_49 |= ((/* implicit */unsigned int) ((unsigned short) var_1));
                            var_50 *= ((/* implicit */unsigned short) ((long long int) var_2));
                            var_51 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                            var_52 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2)))));
                        }
                    } 
                } 
                arr_66 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_9);
                arr_67 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_8))));
                arr_68 [0ULL] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9))));
            }
            for (unsigned int i_22 = 3; i_22 < 11; i_22 += 4) 
            {
                var_53 |= ((/* implicit */_Bool) ((var_9) & (var_9)));
                var_54 = ((/* implicit */int) var_4);
                /* LoopSeq 1 */
                for (unsigned int i_23 = 0; i_23 < 14; i_23 += 4) 
                {
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))));
                    /* LoopSeq 1 */
                    for (long long int i_24 = 0; i_24 < 14; i_24 += 4) 
                    {
                        var_56 = ((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_0))));
                        var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
                    }
                }
            }
            /* LoopSeq 2 */
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
            {
                var_58 ^= ((/* implicit */unsigned int) ((unsigned short) var_7));
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 14; i_26 += 4) 
                {
                    for (long long int i_27 = 0; i_27 < 14; i_27 += 4) 
                    {
                        {
                            var_59 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                            arr_84 [i_0] [i_27] = ((/* implicit */_Bool) ((unsigned int) var_4));
                            arr_85 [i_27] [i_26] [i_0] [i_0] [(unsigned short)4] [12U] = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_28 = 0; i_28 < 14; i_28 += 4) 
                {
                    var_60 = ((/* implicit */long long int) min((var_60), (((/* implicit */long long int) (-(var_6))))));
                    var_61 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_1))));
                    arr_88 [i_0] [i_1] [i_25 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                }
                for (long long int i_29 = 0; i_29 < 14; i_29 += 4) 
                {
                    var_62 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                    var_63 = ((/* implicit */signed char) ((unsigned long long int) var_3));
                    var_64 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                }
                for (unsigned int i_30 = 0; i_30 < 14; i_30 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_31 = 0; i_31 < 14; i_31 += 4) 
                    {
                        var_65 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                        var_66 = ((/* implicit */int) min((var_66), (((/* implicit */int) ((unsigned int) var_1)))));
                    }
                    arr_97 [i_0] [i_0] [4ULL] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_3));
                }
            }
            for (signed char i_32 = 1; i_32 < 12; i_32 += 4) 
            {
                var_67 = ((/* implicit */int) ((_Bool) var_6));
                /* LoopSeq 1 */
                for (long long int i_33 = 1; i_33 < 13; i_33 += 4) 
                {
                    var_68 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    var_69 = (!(var_4));
                }
            }
        }
        /* vectorizable */
        for (long long int i_34 = 3; i_34 < 12; i_34 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_35 = 0; i_35 < 14; i_35 += 4) 
            {
                var_70 += ((/* implicit */unsigned short) (+(var_6)));
                /* LoopNest 2 */
                for (long long int i_36 = 1; i_36 < 13; i_36 += 1) 
                {
                    for (long long int i_37 = 0; i_37 < 14; i_37 += 4) 
                    {
                        {
                            arr_115 [i_0] [i_34] [i_35] [i_34] [i_0] = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) var_4)))));
                            var_71 = ((/* implicit */long long int) (-(var_9)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_38 = 0; i_38 < 14; i_38 += 4) 
                {
                    var_72 -= ((/* implicit */unsigned long long int) var_5);
                    var_73 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                    /* LoopSeq 1 */
                    for (int i_39 = 0; i_39 < 14; i_39 += 4) 
                    {
                        var_74 = ((long long int) var_5);
                        arr_121 [4U] [i_0] [8LL] [i_0] [(unsigned short)4] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_2))));
                    }
                }
                for (unsigned short i_40 = 1; i_40 < 11; i_40 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_41 = 0; i_41 < 14; i_41 += 4) 
                    {
                        var_75 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                        var_76 = ((/* implicit */unsigned int) min((var_76), (((/* implicit */unsigned int) ((_Bool) -7678008626766411377LL)))));
                        var_77 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_6))))));
                        var_78 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1))));
                    }
                    arr_127 [i_0] [i_0] = ((/* implicit */long long int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    var_79 = ((((/* implicit */int) var_8)) / (((/* implicit */int) var_5)));
                }
                var_80 = ((/* implicit */_Bool) var_3);
            }
            for (signed char i_42 = 0; i_42 < 14; i_42 += 4) 
            {
                arr_131 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) var_3));
                arr_132 [i_0] [i_34] [i_34] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                arr_133 [i_42] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                var_81 = ((/* implicit */unsigned int) var_2);
            }
            /* LoopSeq 1 */
            for (_Bool i_43 = 1; i_43 < 1; i_43 += 1) 
            {
                var_82 = ((/* implicit */long long int) (~(((((/* implicit */int) var_5)) % (((/* implicit */int) var_4))))));
                /* LoopNest 2 */
                for (unsigned long long int i_44 = 1; i_44 < 11; i_44 += 4) 
                {
                    for (unsigned short i_45 = 0; i_45 < 14; i_45 += 4) 
                    {
                        {
                            var_83 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                            var_84 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                            arr_143 [i_44] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
            var_85 = ((/* implicit */signed char) ((long long int) var_1));
            var_86 = ((/* implicit */_Bool) var_0);
            var_87 += ((unsigned short) (~(((/* implicit */int) var_4))));
        }
        for (long long int i_46 = 0; i_46 < 14; i_46 += 1) 
        {
            var_88 += ((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_1), (var_2)))), (min((var_9), (((/* implicit */unsigned int) var_3))))));
            var_89 = (((+(((/* implicit */int) var_8)))) * ((-(((/* implicit */int) var_1)))));
            /* LoopNest 2 */
            for (unsigned short i_47 = 1; i_47 < 12; i_47 += 4) 
            {
                for (unsigned long long int i_48 = 0; i_48 < 14; i_48 += 4) 
                {
                    {
                        var_90 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_4), (var_4)))) % (((/* implicit */int) ((_Bool) var_1)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_49 = 0; i_49 < 14; i_49 += 4) /* same iter space */
                        {
                            var_91 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_7), (var_7)))), (((long long int) var_7))));
                            arr_152 [i_49] [i_0] [i_46] [i_0] [i_46] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_8)))) > ((~(((/* implicit */int) var_4))))));
                            var_92 = ((/* implicit */int) ((unsigned short) max((var_7), (((/* implicit */unsigned short) var_2)))));
                            arr_153 [i_0] = ((/* implicit */unsigned int) max((min((((unsigned short) var_6)), (min((var_5), (var_8))))), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_5)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_50 = 0; i_50 < 14; i_50 += 4) /* same iter space */
                        {
                            arr_158 [i_47] [i_46] [i_47] [(_Bool)1] [i_47] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                            var_93 = ((/* implicit */long long int) (~(var_9)));
                        }
                        for (_Bool i_51 = 0; i_51 < 0; i_51 += 1) 
                        {
                            var_94 = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) var_7)))));
                            var_95 = ((/* implicit */long long int) ((int) max((var_6), (((/* implicit */unsigned int) var_7)))));
                            arr_161 [i_0] [i_48] [i_47] [i_46] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((min((var_3), (var_8))), (max((var_3), (((/* implicit */unsigned short) var_4)))))))));
                            var_96 |= ((/* implicit */unsigned int) var_5);
                            var_97 = ((/* implicit */unsigned short) min((max((var_0), (var_0))), (var_0)));
                        }
                    }
                } 
            } 
            var_98 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_7)))));
        }
        var_99 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) var_7)), (var_6))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_52 = 0; i_52 < 18; i_52 += 1) 
    {
        var_100 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_7)))))));
        var_101 ^= ((/* implicit */int) (((+(((/* implicit */int) var_1)))) != ((+(((/* implicit */int) var_0))))));
        var_102 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_5))))));
    }
    for (unsigned int i_53 = 0; i_53 < 15; i_53 += 4) /* same iter space */
    {
        var_103 += ((/* implicit */long long int) (-((-(((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (int i_54 = 0; i_54 < 15; i_54 += 1) 
        {
            for (unsigned int i_55 = 0; i_55 < 15; i_55 += 1) 
            {
                {
                    var_104 = ((/* implicit */signed char) (+(((/* implicit */int) min((var_5), (var_5))))));
                    var_105 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) / (min((var_6), (var_9)))));
                }
            } 
        } 
        var_106 = ((/* implicit */signed char) (~(((/* implicit */int) max((var_2), (var_1))))));
        var_107 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (var_6))))));
    }
    for (unsigned int i_56 = 0; i_56 < 15; i_56 += 4) /* same iter space */
    {
        var_108 = ((/* implicit */unsigned short) max((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_1))))), ((+(((/* implicit */int) var_7))))));
        var_109 |= ((/* implicit */unsigned short) (((+(((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_3)))))) == (((/* implicit */int) max((var_8), (var_7))))));
    }
}
