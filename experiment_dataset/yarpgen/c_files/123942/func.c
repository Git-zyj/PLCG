/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123942
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
    var_19 ^= ((/* implicit */unsigned short) var_5);
    var_20 ^= ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) ((((int) var_0)) << (((((/* implicit */int) ((unsigned char) ((unsigned long long int) var_7)))) - (213)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_12)))));
                    var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (min((var_3), (var_3)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_18))))), (var_17)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) var_12))))), (max((max((((/* implicit */unsigned int) var_16)), (var_1))), (((/* implicit */unsigned int) var_4)))))))));
                                arr_14 [i_0] [6ULL] = ((/* implicit */unsigned char) var_5);
                                var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_10)), (var_1)));
                                var_26 = ((/* implicit */unsigned int) var_9);
                                var_27 = ((/* implicit */short) (+(min((max((var_6), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_15)), (var_10))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned int) var_11)), (min((((/* implicit */unsigned int) var_16)), (var_6))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) min((min((var_5), (((/* implicit */int) var_18)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_10)))))))));
    }
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((unsigned short) min((max((((/* implicit */long long int) var_8)), (var_3))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) var_9)))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_7 = 3; i_7 < 20; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    var_31 = ((/* implicit */long long int) ((short) var_2));
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_3))));
                }
                var_33 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (var_6)));
            }
            var_34 ^= ((/* implicit */unsigned int) max((((/* implicit */short) var_18)), (var_12)));
            var_35 ^= ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) var_11)), (var_17))))));
        }
        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((_Bool) var_16)))));
        /* LoopSeq 3 */
        for (int i_9 = 2; i_9 < 21; i_9 += 1) 
        {
            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((unsigned int) max((var_1), (((/* implicit */unsigned int) var_14))))))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) var_3))))) && (((/* implicit */_Bool) min((var_16), (var_15))))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 3; i_11 < 20; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        {
                            arr_40 [i_9] [i_9] [i_9] [(unsigned short)8] [18U] [i_5] [i_5] = ((/* implicit */long long int) min((var_14), (((/* implicit */short) var_2))));
                            var_39 = ((/* implicit */unsigned short) min((max((max((var_1), (((/* implicit */unsigned int) var_0)))), (var_1))), (((/* implicit */unsigned int) min((var_15), (var_15))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) max((min((max((((/* implicit */unsigned int) var_13)), (var_1))), (((/* implicit */unsigned int) max((((/* implicit */short) var_0)), (var_12)))))), (((/* implicit */unsigned int) max((((/* implicit */short) min((((/* implicit */unsigned char) var_2)), (var_11)))), (var_12)))))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned short i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_18)), (var_1)))), (((unsigned long long int) var_6))));
                            var_42 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_7)))))), ((+(((int) var_10))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
            {
                var_43 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) var_9))))), ((~(var_1)))));
                arr_48 [(unsigned short)10] [(unsigned short)10] [(unsigned short)12] [(_Bool)1] = ((/* implicit */long long int) (+(var_1)));
                arr_49 [(_Bool)1] [i_9] [4] [4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) var_2))), (max((var_17), (((/* implicit */unsigned long long int) var_5))))));
                var_44 ^= ((/* implicit */long long int) min((max((max((var_17), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_10)))) - (((((/* implicit */int) var_16)) + (((/* implicit */int) var_7)))))))));
                var_45 = ((/* implicit */short) max((max((var_17), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_10))));
            }
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                for (unsigned short i_17 = 1; i_17 < 20; i_17 += 4) 
                {
                    {
                        var_46 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), (var_10)))), (var_6)))));
                        var_47 = ((/* implicit */int) max((((/* implicit */unsigned int) var_7)), (max((((unsigned int) var_2)), (max((var_1), (((/* implicit */unsigned int) var_16))))))));
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) min((max((var_3), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */int) var_18)) % (((/* implicit */int) var_15))))))))));
                    }
                } 
            } 
            var_49 = var_1;
        }
        for (int i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            arr_58 [i_18] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((var_6), (var_6)))), (max((var_3), (((/* implicit */long long int) var_11))))));
            arr_59 [i_5] [i_18] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) var_2)))));
            var_50 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
        }
        for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) (+(var_3))))));
            /* LoopSeq 4 */
            for (int i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    arr_68 [i_5] [i_5] [i_5] [i_21] = ((/* implicit */unsigned int) var_8);
                    arr_69 [i_21] [i_21] [i_20] [3] [(_Bool)1] [i_5] = ((/* implicit */long long int) max((min((min((((/* implicit */unsigned int) var_8)), (var_6))), (max((((/* implicit */unsigned int) var_12)), (var_1))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_2)), (var_11))))));
                    var_52 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_13)))), (max((((var_4) - (((/* implicit */int) var_13)))), (((/* implicit */int) min((var_16), (((/* implicit */unsigned char) var_0)))))))));
                }
                arr_70 [8U] [i_19] [i_19] [i_20] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_18)), (var_10)))), (var_17))));
                var_53 = ((/* implicit */unsigned long long int) max((var_53), ((~(max((var_17), (((/* implicit */unsigned long long int) var_15))))))));
                var_54 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (min((var_3), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) var_9))));
            }
            for (int i_22 = 2; i_22 < 20; i_22 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 2; i_23 < 21; i_23 += 2) 
                {
                    for (unsigned short i_24 = 0; i_24 < 22; i_24 += 4) 
                    {
                        {
                            var_55 = ((/* implicit */signed char) max((min((var_6), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_0)), (var_15))))));
                            arr_78 [12U] [i_19] [i_22] [i_23 - 1] [i_24] = ((/* implicit */signed char) min((min((var_4), (((/* implicit */int) max((var_8), (((/* implicit */signed char) var_0))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11)))))));
                            var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) var_9))));
                            var_57 ^= ((/* implicit */unsigned short) max((var_14), (((/* implicit */short) min((var_9), (var_9))))));
                            arr_79 [(unsigned short)16] [(unsigned short)16] [i_22] [(unsigned short)16] [i_22] [i_24] [(unsigned short)16] = ((/* implicit */unsigned short) min((((/* implicit */int) max((var_12), (((/* implicit */short) var_2))))), ((~(((/* implicit */int) var_7))))));
                        }
                    } 
                } 
                var_58 = min((((/* implicit */short) (!(((_Bool) var_8))))), (var_14));
                var_59 ^= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_16))))));
                arr_80 [i_5] [i_5] [i_19] [i_22] = ((/* implicit */unsigned short) var_15);
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 22; i_25 += 2) 
                {
                    for (unsigned char i_26 = 2; i_26 < 19; i_26 += 4) 
                    {
                        {
                            var_60 = ((/* implicit */int) ((unsigned char) min((max((var_1), (var_6))), (((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned char) var_8))))))));
                            arr_88 [i_5] [i_5] [1LL] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_11)))));
                            var_61 = ((/* implicit */unsigned char) (!(((_Bool) var_3))));
                        }
                    } 
                } 
            }
            for (int i_27 = 2; i_27 < 20; i_27 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_28 = 0; i_28 < 22; i_28 += 2) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_62 ^= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) min((var_4), (var_5)))), (var_3))), (((/* implicit */long long int) ((((/* implicit */int) var_15)) + (var_5))))));
                        arr_97 [i_29] [i_28] [19] [i_19] [i_5] = min((var_3), (((/* implicit */long long int) ((short) min((((/* implicit */unsigned int) var_9)), (var_1))))));
                    }
                    for (int i_30 = 2; i_30 < 20; i_30 += 1) 
                    {
                        var_63 = ((/* implicit */_Bool) max((((/* implicit */int) var_7)), (min((((var_4) & (((/* implicit */int) var_16)))), (((/* implicit */int) ((signed char) var_7)))))));
                        var_64 = ((/* implicit */unsigned short) min((max((min((((/* implicit */long long int) var_1)), (var_3))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_18)), (var_9)))))), (((/* implicit */long long int) min((((/* implicit */short) ((unsigned char) var_13))), (max((((/* implicit */short) var_7)), (var_12))))))));
                        arr_101 [(short)19] [i_30] = ((/* implicit */signed char) min((min((max((var_3), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) max((((/* implicit */short) var_7)), (var_12)))))), (((/* implicit */long long int) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_14)))))));
                        arr_102 [i_5] [i_19] [i_19] [i_30] [i_19] = ((/* implicit */signed char) min(((~(var_5))), (max((((/* implicit */int) min((((/* implicit */short) var_15)), (var_14)))), (var_5)))));
                        var_65 = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned long long int i_31 = 0; i_31 < 22; i_31 += 4) 
                    {
                        var_66 ^= ((/* implicit */_Bool) min(((~(((/* implicit */int) max((var_15), (((/* implicit */unsigned char) var_0))))))), (((/* implicit */int) var_16))));
                        var_67 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_12)))))), (min((max((((/* implicit */int) var_9)), (var_4))), (((/* implicit */int) ((unsigned char) var_13)))))));
                        arr_105 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) var_4)))));
                    }
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        var_68 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_3)), (var_17))), (((/* implicit */unsigned long long int) var_11))));
                        var_69 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(max((var_1), (((/* implicit */unsigned int) var_15))))))), (((unsigned long long int) ((short) var_18)))));
                        var_70 = ((/* implicit */unsigned long long int) min((max((max((((/* implicit */unsigned int) var_18)), (var_1))), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_0)), (var_18)))))), (max((var_6), (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (var_5))))))));
                        var_71 = ((/* implicit */long long int) min((var_71), (((/* implicit */long long int) (-(min((((/* implicit */int) var_7)), (var_5))))))));
                    }
                    var_72 = ((/* implicit */unsigned short) min((var_72), (((/* implicit */unsigned short) max(((~(var_4))), ((-(((/* implicit */int) max((var_12), (((/* implicit */short) var_8))))))))))));
                }
                for (int i_33 = 2; i_33 < 21; i_33 += 2) 
                {
                    var_73 ^= ((/* implicit */unsigned long long int) var_16);
                    /* LoopSeq 1 */
                    for (unsigned char i_34 = 0; i_34 < 22; i_34 += 4) 
                    {
                        arr_115 [i_5] [i_19] [i_27 - 2] [i_27 + 1] [21ULL] [i_34] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_7)), (var_3))), (((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) var_10)) - (30757))))))));
                        var_74 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_17)))) % (((long long int) var_16))));
                    }
                }
                var_75 ^= ((/* implicit */unsigned short) var_7);
                var_76 ^= ((/* implicit */unsigned long long int) var_9);
            }
            for (int i_35 = 2; i_35 < 21; i_35 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_36 = 1; i_36 < 21; i_36 += 4) 
                {
                    for (short i_37 = 0; i_37 < 22; i_37 += 1) 
                    {
                        {
                            var_77 = ((/* implicit */int) min((var_77), (((/* implicit */int) min((max((((/* implicit */short) (!(((/* implicit */_Bool) var_17))))), (min((var_14), (((/* implicit */short) var_11)))))), (((/* implicit */short) var_9)))))));
                            arr_124 [i_37] [i_19] [i_35 - 2] [i_19] [0U] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_16)), (var_6))), (((/* implicit */unsigned int) var_14))));
                            var_78 = ((/* implicit */int) min((min((max((var_3), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) min((var_5), (((/* implicit */int) var_11))))))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) ((var_3) < (((/* implicit */long long int) var_4))))))))));
                        }
                    } 
                } 
                var_79 ^= ((/* implicit */long long int) min((min((var_1), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_11)), (var_13))))));
                var_80 ^= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_4)), (var_17))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_18)), (var_1))))));
                var_81 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_18)), (var_4)))), (((unsigned long long int) var_18))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_38 = 2; i_38 < 19; i_38 += 4) 
            {
                var_82 = ((/* implicit */long long int) ((unsigned int) var_5));
                var_83 ^= ((/* implicit */long long int) ((var_4) | (var_5)));
                var_84 = ((/* implicit */signed char) var_5);
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 22; i_39 += 4) 
                {
                    for (short i_40 = 0; i_40 < 22; i_40 += 2) 
                    {
                        {
                            var_85 = ((/* implicit */signed char) (+(var_5)));
                            arr_132 [i_5] [10U] [10U] [10U] [i_39] [(unsigned char)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_14)))));
                            var_86 = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
                var_87 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
            }
            var_88 ^= ((/* implicit */short) max((min((((/* implicit */long long int) var_12)), (var_3))), (((long long int) var_3))));
        }
        var_89 = ((/* implicit */unsigned char) ((int) max((var_12), (((/* implicit */short) var_16)))));
        var_90 = ((/* implicit */int) var_0);
    }
    /* vectorizable */
    for (unsigned char i_41 = 1; i_41 < 20; i_41 += 4) 
    {
        var_91 = ((/* implicit */unsigned long long int) min((var_91), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_17))))));
        var_92 ^= ((/* implicit */unsigned long long int) ((unsigned char) var_15));
    }
    for (unsigned char i_42 = 4; i_42 < 22; i_42 += 2) 
    {
        var_93 = ((/* implicit */unsigned short) max((var_93), (((/* implicit */unsigned short) ((unsigned char) min((var_8), (var_18)))))));
        arr_138 [(unsigned short)3] = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) var_0)), (var_3)))));
    }
}
