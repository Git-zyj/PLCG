/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187106
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
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) var_3);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) var_3);
            var_17 = ((/* implicit */signed char) var_10);
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))));
        }
        for (short i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_3 = 3; i_3 < 18; i_3 += 1) 
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) var_13)))))));
                arr_13 [i_2] [i_2 - 1] [1LL] [i_2] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_9))))));
                arr_14 [i_2] [i_2] [i_2 + 1] [11] = ((/* implicit */signed char) (-((-(((/* implicit */int) var_9))))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    arr_19 [i_2] = (~(((/* implicit */int) var_8)));
                    var_20 = ((/* implicit */_Bool) var_15);
                    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    arr_20 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [2] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-4))));
                }
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_2 + 1] [i_4 + 1] [i_4] [(short)3] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)(-32767 - 1))))))))));
                        var_23 &= ((/* implicit */signed char) var_0);
                    }
                    var_24 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)));
                    var_25 = ((/* implicit */int) var_9);
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                {
                    arr_28 [i_2] [i_2 - 1] [i_4 + 2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : ((-(var_12)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_31 [11U] [i_2] [i_4] [i_9] = ((/* implicit */int) var_14);
                        var_26 = ((/* implicit */unsigned long long int) var_9);
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_13))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 17; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) (~(var_3)));
                        var_29 = (+(((/* implicit */int) var_4)));
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        var_30 += ((/* implicit */int) var_8);
                        var_31 = (-(var_10));
                    }
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_32 = (-(var_1));
                        var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_15)) ? (var_0) : (var_0)))));
                        var_34 = ((/* implicit */unsigned char) (-(var_0)));
                    }
                    for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_35 += ((/* implicit */unsigned int) (~(var_2)));
                        var_36 = ((/* implicit */short) (+(var_3)));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 3) 
                    {
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_1)) : (var_3)));
                        var_38 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4079937948271970557ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_4))))))))));
                    }
                }
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
                {
                    var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                    var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
                    var_42 = var_0;
                }
            }
            for (long long int i_16 = 1; i_16 < 19; i_16 += 2) 
            {
                var_43 = (-(((/* implicit */int) var_13)));
                var_44 = ((/* implicit */int) var_6);
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 2) 
                {
                    arr_50 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                    var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (+(var_10))))));
                    var_46 = (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))));
                }
            }
            for (short i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                arr_54 [i_2] [17] [i_2] [(short)9] = ((/* implicit */unsigned char) var_10);
                var_47 = ((/* implicit */unsigned char) (~(var_10)));
                arr_55 [(unsigned char)0] [18LL] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        arr_60 [i_19] [i_18] [i_18] [i_19] [i_0] [i_2] [16U] &= ((/* implicit */unsigned int) (+((-(var_10)))));
                        var_48 = ((/* implicit */unsigned int) var_5);
                    }
                    var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) var_14))));
                }
            }
            /* LoopNest 3 */
            for (short i_21 = 0; i_21 < 20; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 4) 
                {
                    for (short i_23 = 0; i_23 < 20; i_23 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned char) (+(var_12)));
                            var_51 &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_26 = 2; i_26 < 18; i_26 += 3) 
                    {
                        arr_76 [i_2] [i_2 + 1] [i_24] [(unsigned char)15] [i_26] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
                        var_52 ^= ((/* implicit */_Bool) var_1);
                    }
                    for (signed char i_27 = 1; i_27 < 19; i_27 += 1) 
                    {
                        arr_79 [(short)4] [11U] [i_2] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (var_12)));
                        arr_80 [i_2] = (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) (+(((/* implicit */int) var_14)))))));
                        var_54 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_6))));
                        var_55 = ((/* implicit */short) min((var_55), (var_4)));
                    }
                    for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 3) 
                    {
                        var_56 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))));
                        var_57 = ((/* implicit */short) var_1);
                        arr_85 [i_2] = ((/* implicit */int) var_4);
                        var_58 = ((/* implicit */short) var_12);
                    }
                    /* LoopSeq 3 */
                    for (signed char i_29 = 0; i_29 < 20; i_29 += 3) 
                    {
                        var_59 = ((/* implicit */short) var_3);
                        var_60 = ((/* implicit */unsigned char) (-(var_7)));
                        arr_88 [i_2] [i_2 - 1] [i_29] [1U] [i_2] [1U] [i_29] = ((/* implicit */unsigned char) var_1);
                    }
                    for (signed char i_30 = 1; i_30 < 19; i_30 += 2) 
                    {
                        var_61 = ((/* implicit */unsigned char) (+(var_5)));
                        arr_91 [i_2] [i_24] [(signed char)12] [i_30] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
                        var_62 = ((/* implicit */short) (-(var_12)));
                    }
                    for (unsigned char i_31 = 0; i_31 < 20; i_31 += 3) 
                    {
                        var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) var_3))));
                        var_64 = ((/* implicit */signed char) min((var_64), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_2))))));
                        var_65 = ((/* implicit */_Bool) min((var_65), (var_8)));
                    }
                }
                for (long long int i_32 = 0; i_32 < 20; i_32 += 3) 
                {
                    arr_97 [i_0] [i_2] [i_24] [(signed char)16] [18LL] |= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (var_2));
                    var_66 = ((/* implicit */unsigned long long int) var_15);
                    /* LoopSeq 2 */
                    for (int i_33 = 0; i_33 < 20; i_33 += 2) 
                    {
                        var_67 = var_3;
                        var_68 = ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
                    }
                    for (signed char i_34 = 0; i_34 < 20; i_34 += 2) 
                    {
                        var_69 ^= ((/* implicit */short) (+(((/* implicit */int) var_9))));
                        var_70 = ((/* implicit */int) var_7);
                        var_71 = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_14)) : (var_2)));
                    }
                }
                for (short i_35 = 0; i_35 < 20; i_35 += 2) 
                {
                    var_72 = (~((~(((/* implicit */int) var_6)))));
                    var_73 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))));
                }
                for (signed char i_36 = 0; i_36 < 20; i_36 += 3) 
                {
                    var_74 = ((/* implicit */short) var_15);
                    var_75 = ((/* implicit */signed char) var_14);
                    arr_110 [i_0 + 1] [i_2 - 1] [15ULL] [i_2] [i_36] = ((/* implicit */short) (-(((/* implicit */int) var_15))));
                    /* LoopSeq 1 */
                    for (signed char i_37 = 1; i_37 < 18; i_37 += 4) 
                    {
                        var_76 = ((/* implicit */signed char) max((var_76), (((/* implicit */signed char) var_8))));
                        arr_114 [i_0] [i_0 - 1] [i_0] [i_2] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))));
                        var_77 = ((/* implicit */unsigned long long int) var_12);
                    }
                    arr_115 [i_24] [i_2] = ((/* implicit */short) var_15);
                }
                /* LoopNest 2 */
                for (unsigned int i_38 = 0; i_38 < 20; i_38 += 1) 
                {
                    for (unsigned char i_39 = 3; i_39 < 19; i_39 += 2) 
                    {
                        {
                            arr_121 [14U] [(signed char)2] [i_39] |= ((/* implicit */short) ((var_8) ? (var_0) : (var_0)));
                            var_78 &= ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
                var_79 = ((/* implicit */long long int) var_4);
            }
            for (signed char i_40 = 1; i_40 < 18; i_40 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_41 = 0; i_41 < 20; i_41 += 1) 
                {
                    var_80 = ((/* implicit */short) (~(var_10)));
                    var_81 = ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */int) var_8)));
                    arr_127 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(var_0)));
                }
                var_82 = ((/* implicit */unsigned char) min((var_82), (((/* implicit */unsigned char) (~(var_2))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_42 = 1; i_42 < 19; i_42 += 2) 
                {
                    var_83 = ((/* implicit */short) var_7);
                    var_84 = ((/* implicit */signed char) var_3);
                }
            }
            for (signed char i_43 = 0; i_43 < 20; i_43 += 2) 
            {
                var_85 = ((/* implicit */int) var_11);
                var_86 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_3)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_2))))));
                /* LoopSeq 4 */
                for (signed char i_44 = 0; i_44 < 20; i_44 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_45 = 4; i_45 < 18; i_45 += 2) 
                    {
                        arr_139 [i_0 - 2] [i_2] [i_43] [i_0 - 2] [i_45 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3)));
                        var_87 |= ((/* implicit */int) var_13);
                    }
                    for (unsigned long long int i_46 = 0; i_46 < 20; i_46 += 2) 
                    {
                        arr_143 [(signed char)9] [i_2] [i_43] [i_43] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)24))))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) var_4))))));
                        var_88 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)41)) ? (2147483647) : (((/* implicit */int) (short)31290))))));
                    }
                    var_89 = ((/* implicit */int) var_13);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_47 = 0; i_47 < 20; i_47 += 2) 
                    {
                        var_90 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                        var_91 = ((/* implicit */int) var_10);
                    }
                }
                for (unsigned char i_48 = 3; i_48 < 18; i_48 += 2) 
                {
                    var_92 = ((/* implicit */long long int) var_3);
                    var_93 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned short i_49 = 1; i_49 < 17; i_49 += 1) 
                    {
                        var_94 = ((/* implicit */signed char) (+(var_2)));
                        var_95 = ((/* implicit */unsigned char) var_9);
                        var_96 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
                        arr_152 [i_0] [i_2] [i_43] [i_48 - 1] = ((/* implicit */signed char) var_8);
                        var_97 = ((/* implicit */unsigned int) (+(var_1)));
                    }
                }
                for (unsigned long long int i_50 = 0; i_50 < 20; i_50 += 2) /* same iter space */
                {
                    arr_155 [2U] [i_2] [i_2] [11LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))));
                    var_98 = ((/* implicit */unsigned long long int) var_10);
                    arr_156 [i_0] [16ULL] [i_43] [i_43] [i_43] [i_50] &= ((/* implicit */unsigned long long int) (+(var_12)));
                    arr_157 [i_50] [i_2] [16] [i_2] &= ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 2 */
                    for (short i_51 = 1; i_51 < 17; i_51 += 3) 
                    {
                        var_99 *= ((/* implicit */unsigned int) var_7);
                        arr_162 [i_50] [i_50] [i_50] [i_50] [i_2] = ((/* implicit */unsigned long long int) ((var_8) ? (var_3) : (((/* implicit */unsigned int) var_1))));
                    }
                    for (short i_52 = 0; i_52 < 20; i_52 += 3) 
                    {
                        var_100 = ((/* implicit */unsigned short) var_4);
                        var_101 = ((/* implicit */_Bool) min((var_101), (((/* implicit */_Bool) (+(var_1))))));
                        var_102 *= ((/* implicit */unsigned long long int) var_8);
                    }
                }
                for (unsigned long long int i_53 = 0; i_53 < 20; i_53 += 2) /* same iter space */
                {
                    arr_169 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) var_2)))))));
                    var_103 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    /* LoopSeq 1 */
                    for (short i_54 = 0; i_54 < 20; i_54 += 1) 
                    {
                        var_104 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_12) : (var_12)));
                        var_105 = ((/* implicit */int) (-(0LL)));
                    }
                }
            }
            /* LoopNest 2 */
            for (long long int i_55 = 3; i_55 < 18; i_55 += 3) 
            {
                for (signed char i_56 = 0; i_56 < 20; i_56 += 2) 
                {
                    {
                        var_106 |= ((/* implicit */signed char) var_15);
                        arr_178 [i_55 - 2] [i_2] [i_2] [i_2] [i_0 - 2] = ((/* implicit */signed char) (-((-(var_10)))));
                        var_107 = ((/* implicit */signed char) (-(var_12)));
                    }
                } 
            } 
            arr_179 [i_0] [i_2] [(unsigned char)14] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_14) ? (var_7) : (((/* implicit */unsigned long long int) var_2)))))));
        }
        var_108 |= ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (var_1));
        var_109 = ((/* implicit */unsigned char) (+(var_11)));
        var_110 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((~(var_10))) : (var_5)));
    }
    var_111 = ((/* implicit */short) (~((~(((/* implicit */int) var_15))))));
    var_112 = ((/* implicit */long long int) var_2);
}
