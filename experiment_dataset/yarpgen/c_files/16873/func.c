/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16873
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_10 += ((/* implicit */signed char) (+((+(((/* implicit */int) var_6))))));
                            var_11 = ((/* implicit */unsigned char) var_3);
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */signed char) (+((-(var_3)))));
                                var_13 = ((/* implicit */long long int) var_5);
                                var_14 = ((/* implicit */unsigned int) var_0);
                                var_15 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_5))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_4))));
                                var_17 = ((/* implicit */unsigned int) var_5);
                                var_18 = ((/* implicit */int) (+(var_2)));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                            }
                            for (short i_6 = 1; i_6 < 19; i_6 += 4) 
                            {
                                var_20 = ((/* implicit */long long int) (~(var_4)));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_3))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 4; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) (~(var_8)));
                                var_22 = ((/* implicit */_Bool) (-((~(var_2)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    var_24 = (-(var_3));
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    var_25 = ((/* implicit */short) var_9);
                    var_26 *= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                }
                for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_13 = 4; i_13 < 21; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            {
                                var_27 *= ((/* implicit */_Bool) var_3);
                                var_28 -= ((/* implicit */unsigned char) var_6);
                                var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                                arr_40 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) var_1);
                }
                var_31 = var_7;
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_15 = 2; i_15 < 18; i_15 += 1) 
                {
                    var_32 = ((/* implicit */long long int) var_3);
                    var_33 = ((/* implicit */unsigned char) var_3);
                    var_34 ^= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_7))))));
                }
                for (short i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned int) var_7);
                    var_36 = ((/* implicit */unsigned short) var_1);
                    var_37 ^= ((/* implicit */unsigned short) var_8);
                }
                for (short i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                {
                    arr_49 [i_17] [i_0] [i_17] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 1; i_18 < 20; i_18 += 3) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) var_9);
                                arr_55 [i_0] [21] [i_17] [i_1 - 1] [i_0] = (-(var_4));
                            }
                        } 
                    } 
                    arr_56 [i_1] [i_0] = ((/* implicit */unsigned short) var_3);
                }
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_21 = 2; i_21 < 18; i_21 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) var_9))));
                        /* LoopSeq 3 */
                        for (long long int i_22 = 1; i_22 < 21; i_22 += 1) 
                        {
                            var_40 = ((/* implicit */int) var_8);
                            var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) var_7))));
                            arr_66 [i_0] [i_1 + 1] [i_20] [i_1 + 1] [i_0] = ((/* implicit */int) var_0);
                        }
                        /* vectorizable */
                        for (signed char i_23 = 0; i_23 < 22; i_23 += 3) 
                        {
                            var_44 = ((/* implicit */unsigned char) var_5);
                            arr_69 [i_0] [i_20 - 1] [i_23] = (~(var_8));
                        }
                        for (long long int i_24 = 1; i_24 < 19; i_24 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) var_3);
                            var_46 = ((/* implicit */int) var_6);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
                        {
                            var_47 = ((/* implicit */_Bool) (~(var_0)));
                            var_48 *= var_9;
                        }
                        for (unsigned short i_26 = 1; i_26 < 19; i_26 += 2) 
                        {
                            var_49 = (!((!(((/* implicit */_Bool) var_9)))));
                            var_50 = ((/* implicit */unsigned short) (~(var_3)));
                            arr_77 [i_0] [i_1] [i_20 - 1] [i_20 - 1] [i_1] = ((/* implicit */int) var_6);
                        }
                    }
                    for (unsigned char i_27 = 0; i_27 < 22; i_27 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned short) var_0);
                        var_52 = ((/* implicit */unsigned int) (~((~(var_0)))));
                        var_53 = ((/* implicit */unsigned long long int) var_4);
                        var_54 *= ((/* implicit */unsigned char) var_5);
                    }
                    for (long long int i_28 = 3; i_28 < 18; i_28 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_29 = 1; i_29 < 19; i_29 += 3) 
                        {
                            var_55 = ((/* implicit */_Bool) var_4);
                            var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) var_0))));
                            arr_88 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_6);
                        }
                        var_57 = ((/* implicit */int) var_5);
                        var_58 = ((/* implicit */_Bool) var_9);
                    }
                    /* vectorizable */
                    for (int i_30 = 2; i_30 < 21; i_30 += 1) 
                    {
                        var_59 *= ((/* implicit */unsigned short) (~(var_0)));
                        arr_92 [i_0] [i_1 + 4] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)107))));
                        /* LoopSeq 3 */
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            var_60 = ((/* implicit */long long int) var_9);
                            arr_95 [i_0] [i_0] [i_1 + 2] [i_20] [i_30] [i_31] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                            var_61 -= ((/* implicit */unsigned char) (-(var_1)));
                            var_62 -= ((/* implicit */long long int) var_5);
                        }
                        for (unsigned char i_32 = 4; i_32 < 20; i_32 += 1) 
                        {
                            var_63 -= ((/* implicit */_Bool) (~(var_8)));
                            var_64 = ((/* implicit */int) var_3);
                            var_65 *= ((/* implicit */short) var_4);
                            var_66 += ((/* implicit */unsigned int) var_1);
                            var_67 = var_6;
                        }
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            var_68 = ((/* implicit */signed char) (~(var_3)));
                            var_69 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                            var_70 = ((/* implicit */_Bool) var_2);
                            var_71 = ((/* implicit */signed char) min((var_71), (((/* implicit */signed char) var_3))));
                        }
                    }
                    arr_101 [i_0] [i_20 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                    var_72 -= ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_7))))));
                    var_73 = ((/* implicit */unsigned char) var_1);
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_34 = 0; i_34 < 19; i_34 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_35 = 0; i_35 < 19; i_35 += 3) 
        {
            for (short i_36 = 0; i_36 < 19; i_36 += 2) 
            {
                {
                    var_74 *= ((/* implicit */unsigned short) (~((~(var_4)))));
                    arr_108 [i_34] [i_34] [i_36] |= var_1;
                    var_75 = var_1;
                }
            } 
        } 
        var_76 -= ((/* implicit */long long int) var_7);
    }
    for (short i_37 = 2; i_37 < 12; i_37 += 1) /* same iter space */
    {
        var_77 = ((/* implicit */_Bool) max((var_77), (var_6)));
        arr_112 [i_37] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)61427))));
        /* LoopNest 2 */
        for (unsigned short i_38 = 0; i_38 < 14; i_38 += 4) 
        {
            for (signed char i_39 = 2; i_39 < 10; i_39 += 3) 
            {
                {
                    var_78 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_40 = 1; i_40 < 11; i_40 += 3) 
                    {
                        arr_120 [1U] [(signed char)10] [i_39 - 1] [i_37] = ((/* implicit */unsigned char) (+(var_8)));
                        var_79 = ((/* implicit */short) min((var_79), (((/* implicit */short) (-(var_4))))));
                        /* LoopSeq 3 */
                        for (_Bool i_41 = 1; i_41 < 1; i_41 += 1) 
                        {
                            var_80 = ((/* implicit */unsigned char) min((var_80), (((/* implicit */unsigned char) var_4))));
                            var_81 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                        }
                        for (unsigned short i_42 = 2; i_42 < 12; i_42 += 3) 
                        {
                            var_82 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                            var_83 = ((/* implicit */signed char) var_4);
                        }
                        for (short i_43 = 2; i_43 < 11; i_43 += 1) 
                        {
                            var_84 ^= var_7;
                            var_85 = ((/* implicit */unsigned short) (-(var_1)));
                        }
                    }
                    /* vectorizable */
                    for (short i_44 = 2; i_44 < 11; i_44 += 1) 
                    {
                        var_86 = ((/* implicit */unsigned int) var_7);
                        var_87 += ((/* implicit */unsigned long long int) (-(var_8)));
                    }
                }
            } 
        } 
    }
    for (short i_45 = 2; i_45 < 12; i_45 += 1) /* same iter space */
    {
        var_88 = ((/* implicit */_Bool) var_9);
        /* LoopNest 2 */
        for (signed char i_46 = 0; i_46 < 14; i_46 += 3) 
        {
            for (short i_47 = 0; i_47 < 14; i_47 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_48 = 0; i_48 < 14; i_48 += 1) 
                    {
                        arr_144 [i_45] [i_46] [7] [i_46] [i_46] = ((/* implicit */unsigned char) var_1);
                        var_89 = ((/* implicit */unsigned short) var_3);
                    }
                    var_90 ^= var_3;
                }
            } 
        } 
    }
    for (int i_49 = 0; i_49 < 20; i_49 += 4) 
    {
        /* LoopNest 3 */
        for (int i_50 = 0; i_50 < 20; i_50 += 3) 
        {
            for (unsigned char i_51 = 2; i_51 < 17; i_51 += 4) 
            {
                for (short i_52 = 3; i_52 < 19; i_52 += 1) 
                {
                    {
                        var_91 = ((/* implicit */signed char) max((var_91), (((/* implicit */signed char) var_6))));
                        var_92 = ((/* implicit */unsigned char) max((var_92), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))));
                        var_93 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                        var_94 = ((/* implicit */_Bool) min((var_94), (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_53 = 2; i_53 < 17; i_53 += 3) 
        {
            for (unsigned char i_54 = 2; i_54 < 19; i_54 += 3) 
            {
                {
                    var_95 *= var_3;
                    /* LoopSeq 3 */
                    for (unsigned int i_55 = 3; i_55 < 19; i_55 += 3) 
                    {
                        arr_165 [i_53] [i_53] = ((/* implicit */_Bool) (-((+(var_8)))));
                        /* LoopSeq 2 */
                        for (short i_56 = 2; i_56 < 17; i_56 += 1) 
                        {
                            var_96 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                            var_97 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_169 [i_53] [i_53] = ((/* implicit */long long int) var_7);
                            var_98 = ((/* implicit */unsigned long long int) var_3);
                        }
                        /* vectorizable */
                        for (unsigned char i_57 = 3; i_57 < 18; i_57 += 3) 
                        {
                            var_99 = (+(var_3));
                            var_100 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                            var_101 |= ((/* implicit */unsigned short) var_1);
                        }
                    }
                    for (unsigned long long int i_58 = 0; i_58 < 20; i_58 += 2) 
                    {
                        var_102 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                        /* LoopSeq 4 */
                        for (signed char i_59 = 4; i_59 < 17; i_59 += 3) 
                        {
                            arr_178 [i_49] [i_53] [i_54 + 1] [i_59 + 3] = ((/* implicit */unsigned int) var_0);
                            var_103 *= ((/* implicit */_Bool) (-((-(var_8)))));
                            var_104 = (+((~(((/* implicit */int) var_5)))));
                            var_105 += ((/* implicit */unsigned char) var_9);
                        }
                        for (unsigned char i_60 = 1; i_60 < 19; i_60 += 4) 
                        {
                            var_106 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                            var_107 = ((/* implicit */short) var_3);
                        }
                        /* vectorizable */
                        for (unsigned short i_61 = 3; i_61 < 18; i_61 += 2) /* same iter space */
                        {
                            var_108 = ((/* implicit */unsigned char) min((var_108), (((/* implicit */unsigned char) var_5))));
                            var_109 -= ((/* implicit */short) (+(var_3)));
                        }
                        for (unsigned short i_62 = 3; i_62 < 18; i_62 += 2) /* same iter space */
                        {
                            var_110 = ((/* implicit */short) max((var_110), (((/* implicit */short) (-(var_8))))));
                            var_111 = ((/* implicit */_Bool) max((var_111), (((/* implicit */_Bool) var_7))));
                        }
                    }
                    for (int i_63 = 1; i_63 < 18; i_63 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_64 = 0; i_64 < 1; i_64 += 1) 
                        {
                            arr_190 [i_53] [i_63] [i_53] = var_3;
                            var_112 = ((/* implicit */signed char) var_3);
                            var_113 += ((/* implicit */unsigned int) var_7);
                            var_114 = ((/* implicit */unsigned char) var_8);
                            var_115 = ((/* implicit */unsigned int) min((var_115), ((~(var_3)))));
                        }
                        for (long long int i_65 = 2; i_65 < 18; i_65 += 2) 
                        {
                            arr_194 [i_49] [i_53] [i_49] [i_54 - 1] [i_63 - 1] [i_65 - 2] = (!((!(((/* implicit */_Bool) var_2)))));
                            arr_195 [i_49] [i_49] [i_53] [i_49] [i_49] [(unsigned short)18] [i_49] = (-(((/* implicit */int) var_5)));
                            var_116 = var_9;
                        }
                        arr_196 [i_49] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                        var_117 += ((/* implicit */unsigned char) var_0);
                        var_118 = (!(((/* implicit */_Bool) var_3)));
                    }
                }
            } 
        } 
    }
    var_119 = ((/* implicit */_Bool) var_9);
}
