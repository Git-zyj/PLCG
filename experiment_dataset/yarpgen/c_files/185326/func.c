/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185326
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
    var_10 = var_1;
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) - (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (short)-18995)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) - (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        var_13 ^= (+(arr_0 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) arr_3 [i_1 + 1]))))) : (min((arr_4 [i_1 + 1] [i_1 + 1]), (-5310762539994292367LL)))));
        var_15 = ((/* implicit */short) max(((-(((/* implicit */int) arr_3 [i_1 + 1])))), (((/* implicit */int) arr_3 [i_1]))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            arr_19 [i_4] [i_4] [i_4] [(_Bool)0] [i_5] [i_6] [i_6 + 2] = ((_Bool) var_3);
                            var_16 = (!(((/* implicit */_Bool) var_8)));
                            var_17 |= ((/* implicit */unsigned char) ((_Bool) (_Bool)0));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                            arr_24 [i_2] [i_2] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */_Bool) var_0);
                            arr_25 [i_3] [i_4] [i_4] [(short)6] = ((/* implicit */unsigned char) arr_11 [i_2] [i_2] [(_Bool)1]);
                        }
                        for (short i_8 = 1; i_8 < 12; i_8 += 3) 
                        {
                            arr_28 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) var_8);
                            arr_29 [i_2] [(unsigned char)12] [i_4] [i_3] [i_8 + 1] |= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (short)-1911)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_4] [i_5] [i_5] [i_8])))));
                        }
                        var_18 |= ((/* implicit */long long int) ((arr_22 [i_3] [i_3] [i_4] [i_2] [i_3] [(unsigned char)8] [i_5]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_4] [i_3] [i_3] [i_2] [i_3]))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_9 = 2; i_9 < 12; i_9 += 3) 
            {
                arr_34 [i_2] [i_2] [i_2] [2LL] = (_Bool)1;
                arr_35 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                var_19 += (!((_Bool)1));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_20 ^= ((/* implicit */short) (unsigned char)60);
                var_21 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
            for (long long int i_11 = 2; i_11 < 11; i_11 += 1) 
            {
                var_22 = ((/* implicit */long long int) (short)8566);
                /* LoopNest 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 1; i_13 < 12; i_13 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_13 - 1] [i_3] [i_3] [i_2])) + (((/* implicit */int) arr_40 [i_12 - 1] [i_3] [i_12] [i_12]))));
                            arr_47 [i_2] [i_2] [i_11] [i_2] [i_13] [i_12] = ((/* implicit */short) arr_42 [i_11 + 2] [i_3] [i_11] [i_13 - 1]);
                            var_24 ^= (!(var_4));
                        }
                    } 
                } 
            }
            for (long long int i_14 = 1; i_14 < 11; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) var_8);
                            arr_56 [i_2] [i_3] [i_14 + 1] [i_15] [(_Bool)1] [i_2] = ((/* implicit */short) var_5);
                            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((arr_13 [i_3] [i_3] [i_14 + 1] [i_14]) ? (((/* implicit */int) arr_13 [i_3] [i_2] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) (unsigned char)83)))))));
                        var_28 += ((/* implicit */short) arr_21 [i_18] [i_18] [i_14 - 1] [i_18] [(_Bool)1]);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_17])) ? (((/* implicit */int) (unsigned char)15)) : (((((/* implicit */_Bool) arr_31 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))));
                        var_30 ^= ((/* implicit */unsigned char) ((_Bool) 540938028073804954LL));
                    }
                    for (short i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) arr_52 [i_17]);
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_7 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_2] [i_3]))))))));
                        arr_65 [i_2] [i_2] [i_14 - 1] [i_17] [i_17] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5415121462750821148LL)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (_Bool)1))));
                        arr_66 [i_2] [i_17] [i_14] [i_17] [i_17] = ((((/* implicit */_Bool) arr_15 [i_17] [(unsigned char)12] [i_14 + 2] [i_17])) ? (-8570132859940756189LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_14] [i_14 + 1] [i_3]))));
                    }
                    for (short i_20 = 2; i_20 < 12; i_20 += 1) 
                    {
                        var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_3] [i_3] [i_17] [i_17]) ? (540938028073804954LL) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_17])))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)5078))));
                        arr_70 [i_2] [i_17] [(unsigned char)8] [i_14] [i_17] [i_20 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-22178)) ? (144115188075593728LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96)))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_34 -= ((((/* implicit */int) arr_33 [i_2] [i_3] [i_14] [i_21])) <= (((/* implicit */int) var_7)));
                        arr_74 [(unsigned char)0] [i_3] [i_14] [i_14] [i_3] [i_17] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (-9223372036854775793LL) : (arr_62 [i_2] [(_Bool)1] [i_2] [i_17] [i_2])))));
                    }
                    var_35 = ((/* implicit */unsigned char) ((arr_33 [i_2] [i_14] [i_14 + 2] [i_14 + 1]) ? ((~(6782441165664960424LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                    arr_75 [i_17] [i_17] = ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_14] [i_14 - 1] [i_14]))));
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((short) var_5)))));
                }
                /* LoopNest 2 */
                for (short i_22 = 4; i_22 < 12; i_22 += 4) 
                {
                    for (unsigned char i_23 = 0; i_23 < 13; i_23 += 3) 
                    {
                        {
                            arr_83 [i_3] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_22 - 2])) - (((/* implicit */int) arr_61 [i_22 + 1]))));
                            var_37 ^= ((/* implicit */long long int) ((arr_54 [i_14 + 1]) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_54 [i_14 - 1]))));
                            var_38 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_3))));
                            var_39 = ((/* implicit */_Bool) max((var_39), (((((/* implicit */_Bool) (short)-29903)) && ((_Bool)1)))));
                            var_40 ^= ((/* implicit */unsigned char) (-(((var_1) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_41 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_71 [i_14 + 1] [i_3] [i_14 + 1] [i_14]))));
                    arr_86 [i_24] [i_14] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_41 [i_24] [i_3] [i_2])))) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_24]))));
                    arr_87 [(short)5] [i_2] [i_3] [(unsigned char)2] [i_14] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)125)) ? (((arr_78 [i_24] [12LL] [i_3]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) (short)-1906)) != (((/* implicit */int) (unsigned char)0)))))));
                    var_42 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                }
                for (unsigned char i_25 = 0; i_25 < 13; i_25 += 3) 
                {
                    arr_92 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                    arr_93 [i_2] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned char)197))));
                    arr_94 [i_2] = ((/* implicit */long long int) ((unsigned char) arr_14 [i_3] [i_14] [i_14 + 2] [i_14 + 2]));
                    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -8387431241619366397LL))) ? (((/* implicit */int) var_9)) : (((var_7) ? (((/* implicit */int) arr_67 [i_25] [i_14] [i_14] [i_3] [i_2])) : (((/* implicit */int) var_8))))));
                }
            }
        }
        for (unsigned char i_26 = 0; i_26 < 13; i_26 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_27 = 1; i_27 < 10; i_27 += 1) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        var_44 -= ((/* implicit */long long int) ((unsigned char) arr_88 [i_27 + 3] [i_27] [i_27 + 1] [i_27 + 3] [i_27 + 3] [i_28]));
                        arr_105 [i_2] [i_27] [i_2] [i_26] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_106 [i_2] [i_26] [i_27] [i_27] = ((/* implicit */long long int) arr_71 [i_27 + 1] [i_27] [i_27] [i_27]);
                    }
                } 
            } 
            arr_107 [i_2] [i_26] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) 4398046511103LL)))));
            arr_108 [i_2] [i_26] [i_26] = ((/* implicit */short) ((_Bool) var_8));
            var_45 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_2] [i_2] [i_26] [i_26]))));
            var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) arr_72 [i_26]))));
        }
        for (unsigned char i_29 = 2; i_29 < 10; i_29 += 1) 
        {
            arr_111 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))) : (-8387431241619366397LL))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
        }
        for (long long int i_30 = 0; i_30 < 13; i_30 += 3) 
        {
            arr_114 [i_2] = ((/* implicit */unsigned char) var_7);
            var_48 = ((/* implicit */short) (_Bool)1);
            arr_115 [i_2] [i_2] [i_2] |= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)197))));
            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22439)) ? (((/* implicit */int) arr_102 [i_2] [i_30] [i_30])) : (((/* implicit */int) (unsigned char)130))));
        }
        var_50 = ((unsigned char) arr_3 [i_2]);
        var_51 -= ((((((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_2])) > (((/* implicit */int) arr_12 [i_2])))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)22272))) / (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_2] [i_2] [i_2]))));
        var_52 ^= ((/* implicit */_Bool) arr_62 [i_2] [i_2] [i_2] [i_2] [i_2]);
        arr_116 [i_2] = ((/* implicit */long long int) ((unsigned char) arr_13 [(_Bool)0] [(unsigned char)4] [i_2] [i_2]));
    }
    var_53 *= var_3;
    var_54 *= ((/* implicit */unsigned char) var_1);
    var_55 += ((/* implicit */_Bool) 707200306607883694LL);
}
