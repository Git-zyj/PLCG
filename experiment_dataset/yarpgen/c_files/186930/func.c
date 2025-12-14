/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186930
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
    var_19 = ((/* implicit */long long int) ((_Bool) max((var_18), (var_3))));
    var_20 = ((/* implicit */unsigned char) (-(min((((long long int) 4243201525U)), (((/* implicit */long long int) ((unsigned int) var_2)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((max((arr_2 [i_0]), (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) ((short) var_1))))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751)))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                /* LoopSeq 4 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_1 + 1]))));
                    arr_11 [i_0] [i_2 - 3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_9 [i_0]));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((short) ((((/* implicit */int) (short)32744)) - (((/* implicit */int) (short)32734)))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */int) (short)32744)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_0] [i_1]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) & (6278435864674377607LL))))));
                        arr_18 [i_2] [i_0] = ((/* implicit */long long int) ((_Bool) var_16));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    var_24 &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)67)) << (((503115846U) - (503115839U)))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_27 [i_0] = ((/* implicit */unsigned char) ((long long int) arr_6 [i_1] [i_0] [i_0]));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) var_2)) + (20890)))))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))))));
                        arr_28 [i_0] [i_0] [i_2 - 3] [i_0] = (short)-21080;
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) ((short) arr_22 [i_0] [i_1 + 1] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))) < (var_12))))));
                        var_26 -= ((/* implicit */int) ((arr_9 [(_Bool)1]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)253))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 3])))));
                    arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned char) (_Bool)0);
                }
                for (unsigned char i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    var_28 ^= ((/* implicit */short) arr_17 [i_0] [i_0] [i_0]);
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_15 [(_Bool)1] [i_2 - 2] [i_2 - 2] [i_8 - 1] [i_8 - 2]))));
                    arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)6);
                }
                for (signed char i_9 = 2; i_9 < 9; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_10 = 3; i_10 < 8; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_10 - 2])) : (((/* implicit */int) arr_36 [i_10] [i_0] [i_10] [i_10] [i_10 + 3]))));
                        arr_41 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_10 - 3] [i_10 - 1] [i_10 - 3] [i_10 - 1] [i_10 - 3] [i_10 - 3] [i_10 - 3])) ? (arr_25 [i_10] [i_10] [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10]) : (arr_25 [i_10] [i_10 - 3] [i_10] [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 3])));
                    }
                    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_2 + 2] [i_1] [i_1] [i_2 + 2] [i_1] [i_1]))));
                        var_31 = ((/* implicit */unsigned short) ((var_12) >> (((((/* implicit */int) (short)23770)) - (23740)))));
                    }
                    arr_45 [i_0] [i_0] [i_0] [i_9 - 2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_11)) / (((/* implicit */int) arr_34 [i_0] [i_0] [i_2 - 3] [i_0] [i_2 - 3] [i_0]))))));
                }
                /* LoopNest 2 */
                for (short i_12 = 3; i_12 < 8; i_12 += 1) 
                {
                    for (unsigned int i_13 = 4; i_13 < 8; i_13 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) var_1))));
                            var_33 = ((/* implicit */unsigned int) ((unsigned char) var_1));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1 + 1] [i_2 - 2] [i_12 - 2])) ? (((/* implicit */int) arr_22 [i_0] [i_2 - 2] [i_12 - 2] [i_13 + 2])) : (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
            arr_52 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) (~(((max((8208690065449266150LL), (((/* implicit */long long int) var_3)))) / (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_2)))))))));
            arr_53 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1 + 1] [i_1 + 1] [i_0])) ? (7429906161880074908LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                for (unsigned int i_15 = 4; i_15 < 9; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_5)))) ^ (((/* implicit */int) ((_Bool) arr_17 [i_15] [i_15] [i_15]))))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((unsigned int) min((9223372036854775807LL), (((/* implicit */long long int) (short)19776))))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned int) 16770132532267236992ULL);
        }
        /* vectorizable */
        for (unsigned char i_17 = 3; i_17 < 10; i_17 += 2) 
        {
            var_37 = ((/* implicit */short) arr_20 [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 3 */
            for (unsigned char i_18 = 0; i_18 < 11; i_18 += 1) /* same iter space */
            {
                arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_23 [i_17] [i_17 - 3] [i_17] [i_17] [i_17] [i_17 + 1] [i_17 - 3])) : (((/* implicit */int) arr_36 [i_17 - 1] [i_0] [i_17 - 2] [i_0] [i_0]))));
                arr_66 [i_17 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) (~(var_10))));
                /* LoopSeq 2 */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)23770)))))));
                    arr_70 [i_17] [i_17] [4LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (_Bool)0))));
                    arr_71 [i_0] = ((/* implicit */_Bool) var_13);
                }
                for (unsigned int i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    var_39 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_17 + 1] [i_17 - 1])) > (((/* implicit */int) arr_10 [i_17 - 1] [i_17 - 2]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_21 = 4; i_21 < 8; i_21 += 1) 
                    {
                        arr_78 [i_0] [i_17 - 1] [i_18] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_17 + 1] [i_0] [i_0])) > (((/* implicit */int) var_4))));
                        arr_79 [i_0] [i_0] [i_18] [i_18] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)128))))));
                        arr_80 [i_0] [i_0] = ((/* implicit */_Bool) arr_56 [i_0] [i_21 - 3]);
                        var_40 = ((/* implicit */unsigned char) ((short) var_13));
                    }
                    for (int i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        arr_83 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_17 - 2])) / (((/* implicit */int) arr_58 [i_0] [i_0] [i_17 - 2] [i_17 - 3] [i_20]))));
                        arr_84 [i_0] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_17 + 1] [i_17 + 1]))) : (var_12)));
                        var_42 = ((/* implicit */unsigned char) (-(-7736925756807616826LL)));
                        arr_85 [i_0] [i_0] [i_0] [i_20] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)32760))));
                    }
                    var_43 ^= ((/* implicit */signed char) ((arr_72 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (short)21083)))));
                }
                var_44 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_17 - 3] [i_17 - 3] [i_0])))));
            }
            for (unsigned char i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
            {
                arr_88 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_57 [i_0] [i_17 - 3])) * (((/* implicit */int) arr_15 [i_0] [i_17 - 2] [i_17 - 3] [i_17 - 2] [i_17 + 1]))));
                /* LoopNest 2 */
                for (short i_24 = 0; i_24 < 11; i_24 += 3) 
                {
                    for (unsigned char i_25 = 3; i_25 < 10; i_25 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) var_14))));
                            arr_93 [i_17] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))));
                            var_46 = ((/* implicit */short) ((unsigned char) (signed char)-66));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_26 = 2; i_26 < 10; i_26 += 1) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) ((_Bool) arr_62 [i_0] [i_0] [i_17 + 1]));
                            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (unsigned char)124))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_28 = 0; i_28 < 11; i_28 += 1) /* same iter space */
            {
                var_49 = ((/* implicit */long long int) arr_17 [i_28] [i_0] [i_0]);
                var_50 = ((/* implicit */short) arr_67 [i_17 - 2]);
                var_51 = ((/* implicit */short) ((arr_43 [i_17 - 2] [i_0] [i_17 - 1]) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) arr_43 [i_17 + 1] [i_0] [i_17 - 3]))));
                /* LoopNest 2 */
                for (signed char i_29 = 3; i_29 < 10; i_29 += 1) 
                {
                    for (long long int i_30 = 0; i_30 < 11; i_30 += 1) 
                    {
                        {
                            var_52 ^= ((/* implicit */short) ((signed char) arr_89 [i_29 - 2] [i_29 - 2] [i_29 - 2] [i_29 - 2] [i_17 - 3] [i_17 - 3]));
                            var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_28] [i_0] [i_0])) : (((/* implicit */int) arr_90 [i_0] [i_28] [i_29 - 3] [i_0]))));
                            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)21101))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) : (var_12)));
                        }
                    } 
                } 
            }
            var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) var_13))));
            /* LoopNest 3 */
            for (unsigned int i_31 = 2; i_31 < 7; i_31 += 2) 
            {
                for (signed char i_32 = 2; i_32 < 8; i_32 += 1) 
                {
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_31 + 2] [i_0]))));
                            var_57 = ((/* implicit */int) var_2);
                        }
                    } 
                } 
            } 
            arr_114 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_17])) ? (((/* implicit */int) arr_92 [i_0] [i_0] [i_0] [i_0] [i_17 - 3])) : (((/* implicit */int) var_11))));
        }
        for (unsigned int i_34 = 3; i_34 < 10; i_34 += 1) 
        {
            var_58 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)189)) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_34 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) % (min((((/* implicit */long long int) (_Bool)1)), (var_6)))));
            /* LoopSeq 1 */
            for (short i_35 = 0; i_35 < 11; i_35 += 2) 
            {
                /* LoopNest 2 */
                for (int i_36 = 2; i_36 < 9; i_36 += 2) 
                {
                    for (short i_37 = 0; i_37 < 11; i_37 += 1) 
                    {
                        {
                            var_59 = ((/* implicit */short) (-((-(((/* implicit */int) var_17))))));
                            arr_128 [i_0] [i_0] [i_35] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)18);
                            arr_129 [i_0] [i_0] [i_0] [i_0] [i_37] = ((/* implicit */long long int) (unsigned char)207);
                            arr_130 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_10);
                            var_60 ^= ((/* implicit */unsigned int) min((arr_107 [i_37]), (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_35] [i_35] [i_35] [i_35])))))));
                        }
                    } 
                } 
                arr_131 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_94 [i_34 - 2] [i_34 - 2] [i_34 - 2] [i_34 - 1] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14)))));
            }
            var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) arr_7 [i_34]))));
            var_62 = ((/* implicit */unsigned char) ((arr_75 [i_0] [i_34 - 3] [i_0] [i_0] [i_0]) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) == (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
        }
        /* LoopNest 2 */
        for (signed char i_38 = 0; i_38 < 11; i_38 += 2) 
        {
            for (unsigned char i_39 = 0; i_39 < 11; i_39 += 3) 
            {
                {
                    arr_138 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((var_2), ((short)4102)))) ? (((/* implicit */int) arr_87 [i_0] [i_38] [i_38] [i_38])) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_73 [i_0] [i_0]))))))));
                    var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_136 [i_0] [i_38] [i_0] [i_38])) ? (((/* implicit */int) arr_91 [i_0] [i_38] [i_38] [i_38])) : (((/* implicit */int) var_15))))))));
                    arr_139 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_104 [i_0] [i_38])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_112 [i_39] [i_38])))));
                }
            } 
        } 
    }
    var_64 = ((/* implicit */unsigned char) var_4);
    var_65 &= var_6;
}
