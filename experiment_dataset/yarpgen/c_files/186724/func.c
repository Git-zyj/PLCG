/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186724
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = var_10;
        arr_3 [i_0] = ((unsigned short) ((8U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88)))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (+(arr_2 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_13 ^= ((/* implicit */signed char) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_7))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_15 *= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) arr_4 [i_1]))), (max((var_8), (((/* implicit */unsigned short) arr_4 [i_1]))))));
                        arr_17 [i_1] [i_1] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */int) var_3);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (unsigned char)88)))));
                        var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                    }
                    var_17 |= ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_16 [i_1] [i_1]))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) var_5);
        /* LoopSeq 4 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        arr_29 [i_1] [i_1] [i_8] = var_2;
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_19 -= ((/* implicit */unsigned char) arr_4 [i_8]);
                            var_20 |= ((/* implicit */unsigned char) ((long long int) var_1));
                            var_21 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)45072)), (-2061063453)))), (max((((long long int) arr_4 [i_1])), (((/* implicit */long long int) ((_Bool) arr_24 [i_8] [i_9] [i_10])))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned short) ((signed char) max((arr_35 [i_1] [i_7] [i_8] [i_7] [i_11 + 1]), (((/* implicit */unsigned long long int) ((unsigned short) var_6))))));
                            var_23 = ((/* implicit */unsigned char) max((arr_13 [i_1]), (((int) arr_24 [i_11 + 1] [i_11 + 1] [i_11 + 1]))));
                            arr_36 [i_1] [i_7] [i_8] [i_9] [i_11] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3333566459807512868ULL))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            arr_39 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_7] [i_7] [i_9]);
                            var_24 += ((/* implicit */unsigned char) ((signed char) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
                            arr_40 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) arr_28 [i_1] [i_7] [i_8] [i_12]);
                        }
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (unsigned char)28)))));
                        var_26 ^= ((/* implicit */unsigned short) max(((+(max((arr_35 [i_9] [i_8] [i_7] [i_7] [i_1]), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_7] [i_8] [i_1] [i_7] [i_7])))))), ((-(18ULL)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 4; i_14 < 21; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_9 [i_1] [i_1]))))));
                            var_28 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) min((3333566459807512856ULL), (((/* implicit */unsigned long long int) arr_10 [i_14] [i_14] [i_14 - 3]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                for (long long int i_17 = 2; i_17 < 21; i_17 += 2) 
                {
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        {
                            arr_59 [i_17] [i_17] [i_16] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_7] [i_7] [i_7])) % (arr_20 [i_1] [i_17 + 1])));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((int) (unsigned char)1)))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */_Bool) (-(max((var_4), (((/* implicit */unsigned long long int) arr_30 [i_1] [i_1] [i_7] [i_7] [i_7]))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            var_31 -= ((/* implicit */short) var_9);
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                for (unsigned char i_21 = 0; i_21 < 24; i_21 += 2) 
                {
                    {
                        arr_66 [i_1] [i_1] [i_1] [i_1] |= arr_31 [i_1] [i_19] [i_19] [i_19] [i_20] [i_20] [i_19];
                        arr_67 [i_1] [i_1] [i_19] [i_19] [i_1] = ((/* implicit */_Bool) ((signed char) max((min((var_0), (((/* implicit */unsigned int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */short) arr_7 [i_1]))))))));
                        var_32 |= ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)42)))), (max((arr_10 [i_1] [i_1] [i_1]), (arr_54 [i_1]))))))));
                    }
                } 
            } 
            var_33 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1] [i_19])) ^ (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_7 [i_1])))))));
            arr_68 [i_1] = ((unsigned char) arr_28 [i_1] [i_19] [i_19] [i_1]);
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 3; i_22 < 22; i_22 += 4) 
        {
            /* LoopNest 3 */
            for (short i_23 = 3; i_23 < 21; i_23 += 2) 
            {
                for (unsigned int i_24 = 1; i_24 < 23; i_24 += 4) 
                {
                    for (unsigned short i_25 = 1; i_25 < 22; i_25 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */int) arr_8 [i_1] [i_1]);
                            var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_57 [i_1] [i_22] [i_22] [i_24] [i_1]))));
                        }
                    } 
                } 
            } 
            var_36 |= ((/* implicit */unsigned short) ((unsigned char) var_1));
        }
        for (int i_26 = 0; i_26 < 24; i_26 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_27 = 1; i_27 < 23; i_27 += 4) 
            {
                for (unsigned long long int i_28 = 0; i_28 < 24; i_28 += 2) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (+((+(((/* implicit */int) ((short) var_6))))))))));
                        arr_90 [i_1] [i_26] [i_26] [i_27] [i_26] = ((/* implicit */unsigned long long int) ((short) ((unsigned char) arr_74 [i_1] [i_1])));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_58 [i_1] [i_26] [i_1] [i_1] [i_1]))));
                var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) <= (3333566459807512868ULL)))))));
                arr_93 [i_29] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_74 [i_1] [i_1]))));
            }
            for (unsigned long long int i_30 = 1; i_30 < 23; i_30 += 4) 
            {
                var_40 = ((/* implicit */int) arr_41 [i_1] [i_26] [i_30]);
                var_41 = ((/* implicit */int) var_7);
                var_42 = ((/* implicit */unsigned short) ((_Bool) (unsigned char)51));
                var_43 *= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)60399));
            }
            arr_96 [i_26] [i_26] [i_1] = ((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_18 [i_1] [i_26] [i_26]))) && (((/* implicit */_Bool) min((arr_16 [i_1] [i_1]), (arr_16 [i_1] [i_1])))))))));
        }
    }
    for (unsigned char i_31 = 4; i_31 < 9; i_31 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_32 = 0; i_32 < 11; i_32 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_33 = 0; i_33 < 11; i_33 += 2) 
            {
                arr_103 [i_31] [i_32] [i_33] = ((/* implicit */signed char) ((short) arr_42 [i_31 - 4] [i_31 - 2] [i_31 - 2]));
                var_44 += ((/* implicit */int) arr_45 [i_31]);
            }
            for (signed char i_34 = 0; i_34 < 11; i_34 += 3) 
            {
                arr_107 [i_34] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) 14895643828710493198ULL))), (min(((+(10497191216465970544ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_35 = 1; i_35 < 10; i_35 += 2) 
                {
                    var_45 = ((/* implicit */unsigned char) ((signed char) arr_98 [i_31 - 3]));
                    var_46 ^= ((/* implicit */long long int) arr_77 [i_31] [i_31] [i_31 + 1] [i_31 + 1] [i_31] [i_31]);
                    arr_112 [i_34] = arr_92 [i_34];
                    arr_113 [i_35] [i_34] [i_31] [i_31 - 1] [i_34] [i_31] = ((/* implicit */short) ((unsigned char) arr_38 [i_32]));
                }
                var_47 = ((/* implicit */signed char) arr_28 [i_31] [i_32] [i_32] [i_34]);
                arr_114 [i_31] [i_34] [i_31] [i_31] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_56 [i_31] [i_31] [i_31] [i_31] [i_31])), (arr_6 [i_34] [i_31])));
            }
            for (unsigned char i_36 = 0; i_36 < 11; i_36 += 4) 
            {
                var_48 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (max((arr_81 [i_31 - 3] [i_36] [i_31 - 3] [i_31 - 4] [i_36]), (((/* implicit */unsigned long long int) arr_116 [i_31 - 4] [i_31 - 2] [i_32] [i_31 - 4]))))));
                /* LoopSeq 3 */
                for (unsigned short i_37 = 0; i_37 < 11; i_37 += 4) 
                {
                    arr_120 [i_31 - 2] [i_31 - 2] [i_31] [i_31] [i_31] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 3333566459807512866ULL)) && (((/* implicit */_Bool) min((-4199914717711101447LL), (4199914717711101447LL)))))));
                    arr_121 [i_31] [i_32] [i_31] [i_37] = ((/* implicit */int) var_8);
                }
                for (long long int i_38 = 1; i_38 < 10; i_38 += 1) 
                {
                    var_49 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_5)), (max((arr_105 [i_36] [i_36] [i_32]), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)255)))))));
                    var_50 = max((((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_31] [i_36] [i_38 + 1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_45 [i_31])), ((-(var_6)))))));
                }
                for (unsigned long long int i_39 = 0; i_39 < 11; i_39 += 2) 
                {
                    arr_127 [i_31] = ((/* implicit */unsigned int) ((unsigned short) -236921714));
                    var_51 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (short)31684)))));
                    arr_128 [i_31] [i_31] [i_31] [i_36] [i_31] = ((/* implicit */signed char) ((unsigned short) ((unsigned char) var_3)));
                }
                /* LoopNest 2 */
                for (short i_40 = 0; i_40 < 11; i_40 += 3) 
                {
                    for (unsigned long long int i_41 = 1; i_41 < 8; i_41 += 3) 
                    {
                        {
                            arr_133 [i_31] [i_40] = ((/* implicit */unsigned char) arr_88 [i_31] [i_32] [i_40]);
                            var_52 &= ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned int) ((unsigned char) var_6))), (max((var_0), (((/* implicit */unsigned int) arr_110 [i_36] [i_32])))))));
                            var_53 = ((/* implicit */long long int) ((unsigned int) var_6));
                        }
                    } 
                } 
                var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) min((min((max((((/* implicit */unsigned long long int) -1884538224)), (3333566459807512886ULL))), (((/* implicit */unsigned long long int) (unsigned short)45086)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))), (arr_48 [i_31] [i_31] [i_31] [i_32] [i_36] [i_32] [i_31])))))))));
                var_55 = ((/* implicit */signed char) (~(-236921715)));
            }
            /* LoopNest 2 */
            for (unsigned char i_42 = 0; i_42 < 11; i_42 += 1) 
            {
                for (unsigned char i_43 = 1; i_43 < 10; i_43 += 4) 
                {
                    {
                        arr_139 [i_31 + 2] [i_32] [i_32] [i_43] [i_42] = ((/* implicit */unsigned char) var_0);
                        var_56 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_34 [i_43 - 1])) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_44 = 0; i_44 < 11; i_44 += 1) 
            {
                for (int i_45 = 2; i_45 < 10; i_45 += 1) 
                {
                    {
                        var_57 ^= ((/* implicit */short) arr_2 [i_31] [i_32]);
                        arr_146 [i_31] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)1)))))), (max((arr_33 [i_31 + 1] [i_31] [i_31] [i_31 - 3] [i_31 - 2]), (((/* implicit */int) var_9))))));
                    }
                } 
            } 
            arr_147 [i_31] [i_31] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (-6745151861671791466LL)))), (max((((/* implicit */unsigned long long int) var_6)), (var_4)))));
        }
        for (int i_46 = 0; i_46 < 11; i_46 += 1) 
        {
            var_58 = ((/* implicit */unsigned char) (-(((((/* implicit */int) min((arr_82 [i_31] [i_31]), (((/* implicit */short) arr_91 [i_31 - 3] [i_31]))))) % (((/* implicit */int) var_7))))));
            var_59 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_116 [i_31 - 3] [i_31] [i_46] [i_46]))))) - ((-(var_4)))));
        }
        for (int i_47 = 0; i_47 < 11; i_47 += 4) 
        {
            var_60 = ((/* implicit */unsigned char) var_0);
            var_61 = ((/* implicit */long long int) (-(((/* implicit */int) max((max((var_5), (((/* implicit */unsigned short) arr_79 [i_31 + 2] [i_47] [i_47] [i_31 + 2])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_50 [i_47] [i_47] [i_31]))))))))));
            var_62 = ((/* implicit */_Bool) var_3);
        }
        for (unsigned short i_48 = 0; i_48 < 11; i_48 += 2) 
        {
            var_63 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)35)) % (((/* implicit */int) (signed char)124))))) * (((((/* implicit */unsigned int) arr_13 [i_31 + 2])) * (((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
            var_64 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65524)) ^ (((/* implicit */int) (short)5803))))) < (min((((/* implicit */unsigned long long int) var_1)), (var_4)))))) >> (((((/* implicit */int) max((var_3), (((/* implicit */short) arr_85 [i_31 - 4] [i_31 - 4] [i_31] [i_31 - 4]))))) - (17912)))));
            var_65 -= ((/* implicit */signed char) (+(var_4)));
            var_66 = ((/* implicit */int) arr_50 [i_31 - 3] [i_31 - 1] [i_31]);
        }
        arr_156 [i_31] [i_31] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((var_1), (((/* implicit */long long int) arr_51 [i_31] [i_31] [i_31])))), (((/* implicit */long long int) arr_134 [(unsigned short)6] [i_31 - 3]))))), (max((var_10), (max((var_10), (((/* implicit */unsigned long long int) arr_124 [i_31] [i_31] [i_31] [i_31]))))))));
        var_67 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((signed char) arr_118 [i_31] [i_31 + 1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_86 [i_31] [i_31 - 4])))));
    }
    for (signed char i_49 = 0; i_49 < 22; i_49 += 1) 
    {
        var_68 = ((/* implicit */unsigned long long int) var_7);
        /* LoopNest 3 */
        for (unsigned long long int i_50 = 0; i_50 < 22; i_50 += 1) 
        {
            for (unsigned short i_51 = 0; i_51 < 22; i_51 += 3) 
            {
                for (unsigned long long int i_52 = 0; i_52 < 22; i_52 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_53 = 4; i_53 < 21; i_53 += 2) 
                        {
                            arr_170 [i_49] [i_49] [i_50] = ((/* implicit */unsigned char) var_3);
                            var_69 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_1)))), (min((arr_14 [i_50] [i_51] [i_52]), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) arr_69 [i_50] [i_52]))));
                            var_70 = ((/* implicit */unsigned long long int) max(((short)-9), (((/* implicit */short) (signed char)126))));
                        }
                        for (int i_54 = 0; i_54 < 22; i_54 += 2) 
                        {
                            var_71 = ((/* implicit */unsigned int) max((var_71), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)21)), ((unsigned short)17905))))));
                            arr_175 [i_49] [i_49] [i_51] [i_49] [i_52] |= ((/* implicit */unsigned short) ((signed char) max((18446744073709551610ULL), (3333566459807512861ULL))));
                            var_72 = ((/* implicit */signed char) arr_23 [i_54] [i_52]);
                            arr_176 [i_49] [i_49] [i_49] [i_50] [i_49] = ((unsigned char) (+(((/* implicit */int) arr_56 [i_49] [i_49] [i_49] [i_49] [i_49]))));
                            var_73 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (max((arr_21 [i_51] [i_51] [i_54]), (((/* implicit */unsigned long long int) arr_10 [i_49] [i_51] [i_49])))))))));
                        }
                        var_74 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)27))));
                        arr_177 [i_50] [i_50] [i_50] = ((/* implicit */_Bool) max((min((((/* implicit */int) arr_6 [i_49] [i_50])), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9)))))), (((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
    }
    var_75 = ((/* implicit */unsigned int) (+(((unsigned long long int) ((unsigned long long int) var_2)))));
}
