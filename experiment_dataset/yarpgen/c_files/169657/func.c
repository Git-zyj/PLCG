/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169657
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) % ((~(arr_0 [i_0 - 1]))))) != (((/* implicit */int) arr_1 [i_0])))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            arr_7 [i_2] = ((/* implicit */signed char) arr_1 [i_1]);
            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [1LL])) ? (arr_6 [i_2] [i_2]) : (var_11))))));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(arr_5 [i_1] [5U]))))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) var_4)) : (((7452668269329896609LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
            {
                arr_14 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */long long int) var_4)) : (arr_5 [i_1] [i_4 - 2])))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) var_10);
                            var_19 = ((/* implicit */long long int) (!(((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))));
                            var_20 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54021))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    var_21 = ((/* implicit */long long int) arr_2 [i_7] [i_8]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        var_22 = (~(var_0));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_20 [i_9] [i_9] [i_9] [i_1]))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [i_3])))))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_20 [i_9] [i_7] [i_7] [i_1])) % (((/* implicit */int) arr_18 [i_1] [i_1] [i_7] [i_8])))) & (((/* implicit */int) ((signed char) arr_9 [i_1]))))))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_26 -= ((/* implicit */unsigned short) arr_1 [i_3]);
                        arr_28 [i_3] [i_7] [i_7] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        arr_32 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_12 [i_3]))))));
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_11)))));
                    }
                }
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_11 [i_3]))));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1])) ^ (arr_13 [i_7] [i_3] [(_Bool)1] [i_1])))) ? (((/* implicit */int) arr_17 [i_1] [i_3] [i_7] [i_7] [2ULL])) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_24 [i_1] [i_1] [(signed char)4] [i_7] [i_7] [8U])) : (((/* implicit */int) arr_1 [i_3])))))))));
            }
            arr_33 [(signed char)10] &= ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_6 [8ULL] [8ULL])))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 3) 
        {
            var_30 += ((/* implicit */signed char) (~(((((/* implicit */int) arr_35 [i_1] [i_12] [i_12])) >> (((((/* implicit */int) var_12)) - (40)))))));
            var_31 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_6)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_32 *= ((/* implicit */signed char) ((int) arr_11 [i_1]));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        {
                            arr_45 [i_15] [i_13] [i_1] = ((/* implicit */int) var_12);
                            arr_46 [i_13] [(unsigned char)3] = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                        }
                    } 
                } 
            }
            arr_47 [i_1] [i_12] = ((/* implicit */long long int) (+((+(arr_6 [(unsigned short)0] [i_12 - 1])))));
            var_33 = ((/* implicit */unsigned long long int) ((((arr_10 [i_1]) >= (((/* implicit */int) arr_38 [i_1] [i_12] [4LL])))) ? (((/* implicit */int) arr_34 [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])) >> (((arr_12 [i_1]) + (6152829912887963156LL)))));
    }
    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            for (short i_18 = 3; i_18 < 10; i_18 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned long long int) var_8);
                    arr_54 [i_16] [i_16] = (!(((/* implicit */_Bool) (unsigned short)54021)));
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(arr_1 [i_18]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (var_8)))))))) : (((((((/* implicit */_Bool) var_0)) || (arr_1 [i_16]))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (arr_53 [i_18] [i_17] [i_17] [i_16])))))))));
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_51 [i_18 + 1]))))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_49 [(_Bool)1] [i_17])) ? (((/* implicit */int) arr_51 [i_16])) : (((/* implicit */int) arr_1 [(_Bool)1]))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            arr_58 [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((min(((+(((/* implicit */int) arr_50 [i_16] [i_16])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11526))))))) < (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_52 [i_16] [i_19] [(signed char)1] [i_16]))))))));
            /* LoopSeq 1 */
            for (long long int i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_21 = 2; i_21 < 9; i_21 += 2) 
                {
                    arr_65 [i_16] [i_19] [i_16] [i_21] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_63 [i_21 + 1] [i_20] [i_20] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) arr_1 [i_16])) ^ (((/* implicit */int) arr_53 [i_16] [i_16] [i_16] [i_16]))))))));
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)11514)) > (((/* implicit */int) (_Bool)1))))) % ((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_52 [i_21 - 2] [(unsigned char)8] [i_19] [i_16])) : (((/* implicit */int) arr_60 [i_16] [i_16] [i_16] [i_21 + 2]))));
                }
                for (unsigned char i_22 = 2; i_22 < 12; i_22 += 2) 
                {
                    var_39 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_51 [i_16])), (var_8)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_49 [i_16] [i_16]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                    var_40 -= ((/* implicit */signed char) ((long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_63 [i_16] [i_19] [i_19] [i_22 - 2] [i_19] [i_20]))) > (var_0)))) >> (((/* implicit */int) min((((/* implicit */unsigned char) arr_48 [i_16])), (arr_55 [i_16])))))));
                }
                arr_69 [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_20])) >> (((/* implicit */int) arr_1 [i_20]))))) ? ((~(arr_59 [i_16] [i_19]))) : (((/* implicit */unsigned int) ((int) var_11))))))));
                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (~((-(((/* implicit */int) (short)-15357)))))))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 2; i_23 < 12; i_23 += 2) 
                {
                    for (unsigned char i_24 = 0; i_24 < 13; i_24 += 2) 
                    {
                        {
                            arr_75 [i_16] [i_16] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) ((arr_67 [i_16] [i_16] [(_Bool)1] [i_24]) == (var_7)))))));
                            var_42 += ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))) == ((~(((((/* implicit */_Bool) arr_51 [(unsigned char)10])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_72 [i_16] [i_19] [1LL] [(unsigned char)2] [i_24])))))));
                        }
                    } 
                } 
                arr_76 [i_16] = ((/* implicit */_Bool) (~(((min((arr_67 [i_16] [i_19] [(short)10] [i_20]), (((/* implicit */unsigned long long int) var_4)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            }
            arr_77 [i_16] = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)39231))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 1) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (long long int i_27 = 1; i_27 < 11; i_27 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_50 [i_16] [i_19]))));
                            var_44 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_74 [i_27] [i_19] [i_25] [i_25] [i_25] [i_19] [i_16])), (var_7))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_28 = 0; i_28 < 13; i_28 += 1) 
        {
            arr_88 [i_28] = ((/* implicit */_Bool) var_11);
            /* LoopSeq 1 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                arr_92 [i_16] [i_16] [i_28] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(var_3))))));
                arr_93 [i_28] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)1))));
                /* LoopSeq 2 */
                for (signed char i_30 = 0; i_30 < 13; i_30 += 3) 
                {
                    arr_98 [i_28] [i_28] [i_29] [i_28] [i_16] = ((/* implicit */short) arr_97 [i_16] [i_16] [i_28] [i_28] [i_28] [i_28]);
                    var_45 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) arr_62 [i_30] [(unsigned short)11]))));
                    arr_99 [(signed char)8] [i_28] [i_28] [(signed char)8] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_16])) != (var_0))))));
                    arr_100 [i_28] [i_29] [i_28] [i_28] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_61 [i_16] [i_28] [i_28] [i_30]))))) != (var_11)));
                }
                for (unsigned char i_31 = 2; i_31 < 12; i_31 += 2) 
                {
                    arr_104 [i_28] [i_28] = ((/* implicit */signed char) ((9007061815787520LL) >> (((/* implicit */int) (unsigned char)21))));
                    arr_105 [i_16] [i_28] [i_28] = ((/* implicit */signed char) arr_73 [i_31 + 1] [i_29] [i_28] [(signed char)3] [(signed char)3]);
                    /* LoopSeq 4 */
                    for (_Bool i_32 = 0; i_32 < 0; i_32 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */int) (~(arr_49 [i_16] [i_28])));
                        var_47 = ((/* implicit */unsigned long long int) arr_106 [(unsigned short)9]);
                        var_48 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_16] [i_28] [i_29] [i_31 - 1] [i_32])) ? (arr_49 [i_28] [i_28]) : (((/* implicit */unsigned long long int) arr_74 [i_32] [i_31 - 1] [i_29] [4U] [i_16] [(unsigned char)0] [i_16])))))));
                        var_49 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_80 [i_16] [11ULL] [i_28] [i_32])) ? (((/* implicit */unsigned long long int) arr_108 [i_16] [i_16] [i_16] [i_16] [(_Bool)1])) : (arr_95 [i_16] [i_28]))));
                        var_50 = ((/* implicit */unsigned short) (-(arr_79 [i_16])));
                    }
                    for (_Bool i_33 = 0; i_33 < 0; i_33 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */unsigned long long int) arr_48 [i_16]);
                        arr_113 [i_33 + 1] [i_28] [i_28] [i_28] [i_16] = (!(((var_7) == (arr_94 [i_33] [i_28] [i_16] [i_28] [i_28] [i_16]))));
                    }
                    for (signed char i_34 = 2; i_34 < 11; i_34 += 1) 
                    {
                        arr_118 [i_28] [2ULL] [i_29] [i_28] [i_28] = ((/* implicit */short) (-((-(arr_114 [i_16] [i_28] [(signed char)10] [(signed char)10] [i_28] [i_31])))));
                        arr_119 [i_16] [i_16] [i_31] [(signed char)12] &= ((/* implicit */unsigned char) ((arr_84 [i_16] [i_16]) < (arr_86 [i_31] [i_31])));
                    }
                    for (long long int i_35 = 0; i_35 < 13; i_35 += 1) 
                    {
                        var_52 = ((/* implicit */long long int) ((arr_1 [i_16]) ? (arr_94 [i_16] [i_31] [i_29] [i_31] [i_31] [i_35]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_28] [i_29] [i_31] [i_35])) * (((/* implicit */int) arr_101 [i_16] [i_16] [i_16] [i_16])))))));
                        var_53 += ((/* implicit */unsigned long long int) var_3);
                        var_54 += ((/* implicit */_Bool) (~(arr_81 [i_31] [i_31] [i_35])));
                    }
                }
                arr_123 [i_16] [i_28] [i_29] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (signed char)14)))));
            }
            arr_124 [i_16] [i_28] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_95 [i_16] [i_28])) ? (arr_0 [i_28]) : (((/* implicit */int) arr_50 [i_16] [i_28]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_16]))) == (arr_87 [i_16] [i_28]))))) : ((~(arr_96 [i_16] [i_16] [i_16] [i_16])))));
            arr_125 [i_16] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) (unsigned char)255)))) : ((-(15360)))));
        }
    }
    var_55 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)11511)) ^ (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_36 = 0; i_36 < 17; i_36 += 2) 
    {
        for (long long int i_37 = 1; i_37 < 16; i_37 += 3) 
        {
            {
                arr_132 [i_36] [i_36] [i_36] = ((/* implicit */short) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_131 [i_36]))))), (arr_0 [i_36])))));
                /* LoopNest 3 */
                for (unsigned int i_38 = 2; i_38 < 14; i_38 += 3) 
                {
                    for (signed char i_39 = 1; i_39 < 16; i_39 += 1) 
                    {
                        for (unsigned int i_40 = 0; i_40 < 17; i_40 += 3) 
                        {
                            {
                                var_56 = ((max((((unsigned long long int) arr_129 [i_36] [i_37] [i_40])), (((/* implicit */unsigned long long int) arr_1 [i_39])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_11))))))));
                                var_57 -= ((((/* implicit */int) arr_137 [i_36])) / (((((var_11) == (((/* implicit */unsigned long long int) arr_133 [i_40] [i_36] [i_36])))) ? ((~(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_58 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_12)))) : ((+(((/* implicit */int) (_Bool)1))))))));
}
