/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147676
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
    var_14 = ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) max((var_12), (var_12)))) % (((/* implicit */int) min((var_8), (var_9)))))));
    var_15 = ((/* implicit */int) ((short) (-(((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) var_10);
                        var_17 = ((/* implicit */short) max(((signed char)(-127 - 1)), (var_6)));
                        var_18 = ((/* implicit */unsigned short) var_2);
                        var_19 = ((/* implicit */unsigned short) arr_2 [(short)5]);
                        var_20 = ((/* implicit */short) var_3);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)125)) * (((/* implicit */int) (signed char)(-127 - 1)))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 4; i_6 < 23; i_6 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_7 = 4; i_7 < 23; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)21] [i_0])) ? (((/* implicit */int) arr_2 [i_4])) : (var_10))))));
                            var_23 = ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (signed char)102)));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (unsigned char)128))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_1))));
                            var_26 = ((((/* implicit */_Bool) arr_14 [10] [i_0] [10])) ? (arr_14 [i_5] [i_6] [i_5]) : (arr_8 [i_5] [i_5 + 1] [i_5 - 1] [i_5]));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 23; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(arr_14 [i_8] [i_6] [i_6 - 2]))))));
                            var_28 = ((/* implicit */long long int) ((signed char) var_8));
                        }
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_5] [i_5 + 1] [i_5 - 1])) ? (arr_16 [i_5] [i_5 + 1] [i_5 + 1]) : (((/* implicit */long long int) var_2)))), (((((/* implicit */_Bool) (unsigned short)45686)) ? (((/* implicit */long long int) -285460300)) : (arr_16 [i_5] [i_5 - 1] [i_5 - 1])))));
                            var_30 = ((/* implicit */unsigned short) arr_16 [i_5] [i_4] [i_4]);
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (signed char)107)))))) ? (arr_21 [i_4] [i_5] [i_5 + 1] [i_5] [i_0]) : ((-(((/* implicit */int) (_Bool)1))))));
                            var_32 = ((/* implicit */long long int) max(((-(arr_14 [i_6 - 1] [i_5] [i_5 - 1]))), (((((/* implicit */_Bool) arr_14 [i_6 - 4] [i_5] [i_5 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [(short)5] [i_6] [i_6 - 3] [i_5]))))));
                            var_33 -= ((unsigned char) (~(arr_11 [i_5 - 1] [i_5 + 1])));
                        }
                        var_34 = (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)62450)))));
                        var_35 = ((/* implicit */signed char) arr_5 [i_5] [i_5]);
                        var_36 = ((/* implicit */unsigned short) (~((-(268434432U)))));
                    }
                } 
            } 
            var_37 |= ((_Bool) var_5);
            var_38 += ((/* implicit */long long int) (-(((unsigned int) max((var_1), (((/* implicit */unsigned char) var_6)))))));
            /* LoopSeq 4 */
            for (short i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned char i_12 = 4; i_12 < 23; i_12 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) (signed char)82);
                            var_40 = ((/* implicit */unsigned short) min((var_4), (((((/* implicit */unsigned int) (-(var_10)))) * (var_4)))));
                        }
                    } 
                } 
                var_41 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_10] [i_0] [(unsigned char)20] [i_10 - 1]))))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_4)))) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_10 - 1] [i_0] [i_0])))))) | (((/* implicit */int) var_8))));
                            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_13] [i_4] [i_4]))))), (((((/* implicit */_Bool) arr_14 [i_14] [i_13] [(unsigned short)15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_10]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_13] [(unsigned short)1] [i_10] [i_13] [(unsigned char)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))))))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (((/* implicit */int) max((var_9), (var_7))))))));
                        }
                    } 
                } 
            }
            for (long long int i_15 = 4; i_15 < 22; i_15 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_15] [i_15] [i_15] [i_15 - 1] [i_16])) ? (((unsigned int) arr_37 [i_15] [i_15] [i_15] [i_15 - 3])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned short) (-(var_4)));
                        var_46 = ((/* implicit */unsigned char) ((arr_32 [i_0] [i_0] [i_15 - 1] [(unsigned short)0] [(signed char)4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))));
                        var_47 = (~(((/* implicit */int) arr_46 [4U] [i_4] [i_4] [i_4] [i_4])));
                    }
                    /* vectorizable */
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_15])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_5)) ? (1065353216) : (((/* implicit */int) (unsigned short)3085))))));
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) (~((+(((/* implicit */int) arr_46 [10] [i_16] [i_4] [i_4] [i_0])))))))));
                    }
                    for (unsigned char i_19 = 2; i_19 < 20; i_19 += 1) 
                    {
                        var_50 -= ((/* implicit */long long int) max(((-(((((/* implicit */int) var_1)) & (((/* implicit */int) var_1)))))), ((-(((/* implicit */int) arr_49 [(unsigned short)9] [i_15] [i_19 + 3] [i_15] [i_15 - 1] [i_15 - 1]))))));
                        var_51 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((arr_49 [i_0] [(unsigned short)13] [i_4] [(_Bool)1] [i_19] [(_Bool)1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min(((unsigned short)49658), ((unsigned short)31295))))))), (max((((/* implicit */unsigned int) var_11)), ((+(var_2)))))));
                        var_52 = ((/* implicit */unsigned char) var_13);
                    }
                    for (unsigned short i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        var_53 *= ((/* implicit */signed char) ((long long int) 9164417618809333001LL));
                        var_54 = var_11;
                        var_55 &= ((/* implicit */unsigned char) var_5);
                    }
                }
                var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_15])))))));
                var_57 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [20] [i_15]))));
                var_58 = ((/* implicit */unsigned char) max((arr_37 [i_0] [i_15] [i_15 - 3] [i_15]), (((/* implicit */long long int) (signed char)56))));
            }
            for (short i_21 = 2; i_21 < 23; i_21 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 2; i_22 < 23; i_22 += 1) 
                {
                    for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        {
                            var_59 = ((/* implicit */int) max(((short)30731), (((/* implicit */short) (signed char)-57))));
                            var_60 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) arr_30 [i_21 - 2] [i_4] [(short)16] [i_4] [i_22 - 2])));
                            var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49675)) ? (-3067465585043655992LL) : (((/* implicit */long long int) var_2))))) ? (max((var_5), (((/* implicit */long long int) arr_39 [i_22 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_22 - 1])))));
                            var_62 += ((/* implicit */long long int) ((unsigned short) arr_56 [i_21] [i_21 + 1] [i_21]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_24 = 4; i_24 < 23; i_24 += 1) 
                {
                    for (unsigned short i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        {
                            var_63 &= ((/* implicit */short) var_8);
                            var_64 = max((((/* implicit */unsigned long long int) arr_15 [i_24])), (((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned long long int) arr_57 [i_0] [i_24])) : (max((arr_41 [i_24] [i_4] [i_24]), (((/* implicit */unsigned long long int) var_13)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_26 = 0; i_26 < 24; i_26 += 1) 
            {
                var_65 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_66 [i_0] [i_4] [i_0] [i_26] [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 24; i_27 += 1) 
                {
                    for (unsigned char i_28 = 0; i_28 < 24; i_28 += 2) 
                    {
                        {
                            var_66 = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) (unsigned char)165)))));
                            var_67 = ((/* implicit */unsigned short) max((var_67), (((/* implicit */unsigned short) max((((long long int) (-(((/* implicit */int) var_0))))), (((/* implicit */long long int) ((unsigned short) arr_42 [i_0]))))))));
                            var_68 = ((/* implicit */int) var_8);
                            var_69 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3072)) ? (-1873865017) : (((/* implicit */int) (unsigned char)121))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_28])));
                        }
                    } 
                } 
                var_70 *= ((/* implicit */unsigned char) arr_8 [i_0] [(unsigned char)23] [i_4] [i_26]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_29 = 2; i_29 < 23; i_29 += 4) 
                {
                    var_71 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_29 + 1] [i_0])) ? (arr_16 [i_29] [i_29 + 1] [i_29]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_72 = ((/* implicit */unsigned short) var_13);
                    var_73 = ((/* implicit */unsigned short) min((var_73), (((/* implicit */unsigned short) var_7))));
                    var_74 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49658))))) ? ((+(((/* implicit */int) (short)32767)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))));
                }
                /* vectorizable */
                for (int i_30 = 0; i_30 < 24; i_30 += 3) /* same iter space */
                {
                    var_75 = ((/* implicit */unsigned char) arr_80 [(short)18] [i_26] [i_30]);
                    var_76 = ((/* implicit */short) arr_43 [i_4] [(unsigned short)17] [(unsigned short)17] [i_4]);
                }
                /* vectorizable */
                for (int i_31 = 0; i_31 < 24; i_31 += 3) /* same iter space */
                {
                    var_77 = ((/* implicit */unsigned short) min((var_77), (((/* implicit */unsigned short) var_9))));
                    var_78 = ((/* implicit */signed char) var_5);
                    var_79 = ((/* implicit */short) max((var_79), (((/* implicit */short) var_5))));
                }
                for (unsigned short i_32 = 2; i_32 < 23; i_32 += 1) 
                {
                    var_80 = ((/* implicit */short) var_2);
                    var_81 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0]);
                    var_82 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0]);
                }
                var_83 = (+((-(max((var_5), (((/* implicit */long long int) var_13)))))));
            }
        }
        for (int i_33 = 1; i_33 < 21; i_33 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_34 = 1; i_34 < 22; i_34 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_35 = 0; i_35 < 24; i_35 += 3) 
                {
                    var_84 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_68 [i_35]), (((long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3961783935U)));
                    var_85 += ((/* implicit */short) min((var_10), (max((((/* implicit */int) (!(((/* implicit */_Bool) 326954683))))), (((arr_11 [(unsigned char)14] [17LL]) - (((/* implicit */int) arr_53 [(unsigned char)6] [i_0] [i_33] [i_34] [i_34] [(unsigned short)4] [(unsigned char)6]))))))));
                }
                /* LoopNest 2 */
                for (signed char i_36 = 0; i_36 < 24; i_36 += 4) 
                {
                    for (unsigned int i_37 = 0; i_37 < 24; i_37 += 1) 
                    {
                        {
                            var_86 = ((/* implicit */signed char) (((-(((/* implicit */int) max((var_8), (((/* implicit */signed char) (_Bool)1))))))) <= (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_69 [i_34 + 2] [i_33 - 1] [i_33]))))));
                            var_87 -= ((/* implicit */long long int) arr_67 [i_33 - 1] [i_33 - 1] [i_33 - 1] [i_34 + 2]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_38 = 1; i_38 < 22; i_38 += 1) 
                {
                    var_88 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_4))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_36 [(unsigned short)14] [i_34 - 1] [(short)9] [i_0])) : (arr_73 [i_0] [i_0] [i_0] [(unsigned short)14] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (max((((/* implicit */long long int) ((var_10) & (((/* implicit */int) var_0))))), (6805674213840613104LL)))));
                    /* LoopSeq 1 */
                    for (short i_39 = 2; i_39 < 21; i_39 += 4) 
                    {
                        var_89 = ((/* implicit */signed char) max((var_89), (((/* implicit */signed char) var_4))));
                        var_90 = ((/* implicit */unsigned short) max((var_90), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_39 [i_38 - 1])))) ? (((/* implicit */int) ((unsigned char) arr_47 [i_38] [i_39] [i_38 + 2] [i_38 + 1] [i_38 + 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                    }
                    var_91 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_58 [i_34] [i_34] [i_34 - 1] [i_34])) : (((/* implicit */int) arr_38 [i_0] [i_34] [i_0] [i_0])))));
                    var_92 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)2032)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))));
                }
            }
            var_93 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) max((var_6), (var_12)))), (((((/* implicit */_Bool) arr_101 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2)))))));
        }
    }
}
