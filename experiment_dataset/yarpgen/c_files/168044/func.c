/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168044
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(var_9)));
        var_12 = ((/* implicit */unsigned char) (signed char)15);
        var_13 = arr_1 [i_0 - 1];
    }
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 += ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1])), (max((var_3), (723056131936787983LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_1 - 1] [i_3] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))))));
                        var_15 = ((/* implicit */short) arr_5 [i_4]);
                    }
                } 
            } 
            arr_15 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (+(4415249702155552090LL)));
        }
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) min((max((((/* implicit */int) (signed char)-110)), (arr_7 [(signed char)15] [i_5]))), (((/* implicit */int) ((_Bool) var_1)))))) : (((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1]))) ? (((/* implicit */long long int) ((unsigned int) arr_17 [i_1] [i_5]))) : (max((arr_0 [i_5]), (((/* implicit */long long int) (_Bool)1))))))));
            arr_18 [i_1] = ((/* implicit */int) ((((min((((/* implicit */unsigned int) arr_12 [i_5] [i_5])), (3557475903U))) | (((/* implicit */unsigned int) ((arr_11 [i_1] [i_5]) & (((/* implicit */int) (unsigned char)106))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */long long int) 0)) : (-3638759352450564649LL))))))));
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) max(((((-(var_9))) / (arr_7 [i_1 - 1] [12ULL]))), ((-(arr_11 [i_1 - 1] [i_1 + 1])))));
        }
        arr_20 [16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1638388031)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (min((((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [i_1])) : (var_11))), (((/* implicit */unsigned long long int) -337900374))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        {
                            arr_31 [i_7] [i_7] = ((((/* implicit */_Bool) arr_25 [i_7] [i_7 + 1] [i_6 + 1] [i_1 + 1])) ? (arr_7 [i_6 + 1] [i_6 + 1]) : (((/* implicit */int) arr_25 [i_7] [i_7 + 2] [i_6 + 1] [i_1 - 1])));
                            arr_32 [i_1] [i_9] [i_7] [i_8] [i_7] [9U] [i_9] = ((/* implicit */unsigned short) arr_11 [i_6 + 1] [i_1 - 1]);
                            arr_33 [i_9] [i_7] [i_7] [i_7 + 2] [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */unsigned long long int) arr_11 [i_6] [i_6 + 1])) : (15843289204958665883ULL)));
                            var_17 *= ((/* implicit */unsigned int) (signed char)-39);
                        }
                    } 
                } 
            } 
            arr_34 [(signed char)14] = ((/* implicit */signed char) ((((unsigned int) arr_7 [i_6] [i_1 + 1])) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_25 [16U] [i_1] [i_1] [16U])) == (((/* implicit */int) var_6))))))));
            var_18 = ((/* implicit */long long int) (+(arr_22 [i_1] [i_6 + 1])));
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_19 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_38 [4U] [4U]))))));
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                {
                    arr_42 [i_1 + 1] [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) var_2);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1 - 1] [i_11] [i_10 + 1])) && (((/* implicit */_Bool) arr_25 [14LL] [i_1 + 1] [i_11] [i_10 + 1]))));
                }
                for (signed char i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_49 [i_14] [i_13] [i_11] [(unsigned char)9] [i_11] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_37 [i_13] [i_14] [i_11])) : (arr_14 [i_1])));
                        arr_50 [i_1 + 1] [i_1 + 1] [i_11] [i_1 + 1] [i_14] = ((/* implicit */unsigned int) arr_5 [i_14]);
                        arr_51 [i_11] [i_11] [3ULL] [i_10] [i_11] = ((/* implicit */signed char) (((-(arr_37 [i_1] [i_10] [i_11]))) + (((/* implicit */int) arr_35 [i_1] [i_10]))));
                    }
                    arr_52 [17ULL] [i_10] [17] [i_11] = ((/* implicit */unsigned char) var_5);
                    arr_53 [i_11] [i_11] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_4 [(unsigned char)16]);
                }
                for (long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    var_21 += ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 3 */
                    for (long long int i_16 = 2; i_16 < 16; i_16 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) (+(arr_11 [i_1] [i_1 - 1])));
                        var_23 ^= ((/* implicit */_Bool) ((2124344802U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27396)))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13136))) + (((((/* implicit */unsigned int) var_4)) ^ (arr_54 [6LL] [6LL] [i_11] [i_11] [i_11])))));
                        arr_60 [i_11] [i_15] [i_11] [i_10] [i_11] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_1 - 1] [i_10 + 1]))));
                    }
                    for (long long int i_17 = 2; i_17 < 16; i_17 += 3) /* same iter space */
                    {
                        arr_64 [i_11] = (_Bool)1;
                        var_25 = ((((/* implicit */_Bool) -6006560573432931828LL)) ? (var_11) : (((/* implicit */unsigned long long int) arr_56 [i_11] [i_1 - 1])));
                        var_26 = ((int) (_Bool)1);
                    }
                    for (long long int i_18 = 2; i_18 < 16; i_18 += 3) /* same iter space */
                    {
                        arr_68 [i_11] [(_Bool)1] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) arr_48 [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_10]);
                        arr_69 [i_1 - 1] [i_11] [i_1 - 1] [6U] [i_15] [i_18] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_15] [7ULL])) / (arr_41 [i_1] [i_11] [i_1] [i_1])))));
                        var_27 = ((arr_4 [i_10 + 1]) || (arr_4 [i_10 + 1]));
                        arr_70 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_1 - 1] [0LL] [i_11] [i_10 + 1] [i_11]))));
                    }
                    arr_71 [i_1] [i_11] [i_11] [i_1] = (!(((/* implicit */_Bool) arr_43 [i_1] [i_10 + 1] [i_10 + 1] [i_11])));
                }
                var_28 = ((((/* implicit */int) (unsigned char)88)) << (((((/* implicit */int) arr_21 [i_10 + 1])) + (82))));
            }
            var_29 -= ((/* implicit */unsigned short) max((max((1547518933168488954LL), (((/* implicit */long long int) arr_29 [i_1 - 1] [(unsigned char)18] [i_1 + 1] [(_Bool)1] [(unsigned char)8] [(unsigned char)18] [i_1 - 1])))), (((/* implicit */long long int) ((unsigned char) arr_43 [i_1] [i_10 + 1] [i_10] [i_1])))));
            arr_72 [i_1] [6LL] &= (+(((/* implicit */int) ((unsigned short) 1019939440U))));
        }
    }
    for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 2) /* same iter space */
    {
        var_30 -= ((/* implicit */unsigned short) arr_48 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19 + 1]);
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 19; i_20 += 2) 
        {
            for (signed char i_21 = 4; i_21 < 17; i_21 += 1) 
            {
                {
                    arr_80 [i_19] &= ((/* implicit */unsigned short) var_5);
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 0; i_22 < 19; i_22 += 1) 
                    {
                        for (long long int i_23 = 0; i_23 < 19; i_23 += 2) 
                        {
                            {
                                var_31 += ((/* implicit */short) max((var_11), (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_8)), (var_7))))))));
                                var_32 += ((/* implicit */signed char) max((max((((/* implicit */int) var_2)), ((~(((/* implicit */int) arr_63 [i_20] [i_21] [i_20])))))), (max((((/* implicit */int) (_Bool)0)), (arr_37 [i_19 - 1] [i_21 - 4] [i_23])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 4) 
                    {
                        var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_38 [i_19] [i_24])), (var_7)))) || (((/* implicit */_Bool) 337900373))))) : (((/* implicit */int) var_8))));
                        var_34 *= ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)18969)) * (max((-1), (((/* implicit */int) var_8)))))), (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_25 = 1; i_25 < 17; i_25 += 1) 
        {
            var_35 ^= ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (-337900374)))), (max((max((arr_81 [i_25] [i_19]), (((/* implicit */unsigned int) (unsigned char)95)))), (max((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_61 [i_19])))))));
            arr_91 [i_25] [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_19 - 1])) || (((/* implicit */_Bool) ((unsigned long long int) -92517380)))));
            var_36 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(8337209339246845553ULL)))))))));
        }
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_19] [(signed char)2])) <= (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_6))), (((unsigned short) arr_16 [i_19])))))));
    }
    for (unsigned int i_26 = 0; i_26 < 19; i_26 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_27 = 1; i_27 < 17; i_27 += 1) /* same iter space */
        {
            arr_98 [i_26] [i_27] = min((((/* implicit */unsigned int) max((arr_67 [i_27] [i_27] [i_27 + 2] [i_27 - 1] [i_27 - 1]), (arr_67 [i_27 + 1] [i_27] [i_27 + 2] [i_27 + 2] [i_27 + 1])))), (((3455396881U) * (2110057147U))));
            arr_99 [i_26] = ((/* implicit */signed char) arr_46 [i_26]);
        }
        for (unsigned long long int i_28 = 1; i_28 < 17; i_28 += 1) /* same iter space */
        {
            arr_104 [i_26] [i_26] [i_26] &= ((/* implicit */signed char) arr_58 [i_28 + 2] [i_28] [i_26] [i_26]);
            arr_105 [i_28] = ((/* implicit */int) ((((((/* implicit */_Bool) 485810110499337100ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_28] [i_28] [i_28 - 1] [i_28 - 1] [i_28]))) : (max((((/* implicit */long long int) (signed char)126)), (-5981446655154369572LL))))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)195)))))));
            arr_106 [i_26] [i_26] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) (short)13752)) || (((/* implicit */_Bool) (unsigned short)655))))), (arr_67 [i_26] [i_28] [i_26] [i_26] [i_28])))) || (((/* implicit */_Bool) ((unsigned short) arr_9 [i_26])))));
            arr_107 [i_26] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */unsigned long long int) 3924983360U)) : (((arr_26 [i_26] [i_28 + 1] [8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_26] [i_28 + 2] [i_28 + 2]))) : (144080003703767040ULL)))));
        }
        arr_108 [i_26] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)91)) ? (((((/* implicit */_Bool) arr_29 [(signed char)6] [i_26] [(signed char)6] [i_26] [i_26] [i_26] [i_26])) ? (arr_56 [i_26] [i_26]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_26] [i_26] [i_26] [i_26] [i_26]))))) : (((/* implicit */long long int) (-(2194412132U)))))), (((/* implicit */long long int) ((((long long int) var_1)) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_26]))) : (arr_95 [i_26] [i_26] [i_26])))))))));
        arr_109 [i_26] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) 4U)), (max((((/* implicit */long long int) (short)0)), (arr_36 [i_26] [i_26] [i_26]))))), (((/* implicit */long long int) (signed char)112))));
        arr_110 [i_26] [i_26] = ((/* implicit */_Bool) var_0);
        var_38 = ((/* implicit */short) var_1);
    }
    var_39 = ((/* implicit */int) var_7);
}
