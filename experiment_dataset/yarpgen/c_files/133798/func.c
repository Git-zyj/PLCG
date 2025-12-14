/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133798
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
    var_18 = max((((((/* implicit */_Bool) 65535)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_14)))))), (((/* implicit */int) ((((/* implicit */_Bool) (~(7967102285178618497LL)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))));
    var_19 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> ((((~(((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))))) - (4294905839U)))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]))) ? ((-(((/* implicit */int) min((arr_2 [(short)8]), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */int) var_15))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) 5858072547850248193LL);
        arr_6 [i_1] &= ((/* implicit */_Bool) arr_5 [i_1]);
        var_22 = ((/* implicit */short) (+(((long long int) (short)28641))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_14 [i_3] [i_3] = (!(((/* implicit */_Bool) ((arr_4 [i_4 - 1]) ? (((/* implicit */int) arr_4 [i_4 - 1])) : (((/* implicit */int) arr_4 [i_4 - 1]))))));
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((max((min((var_0), (arr_10 [i_5] [i_3 - 1]))), (((((var_0) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))) & (var_0)));
                            var_24 -= ((/* implicit */short) min((((arr_5 [i_3 + 1]) / (arr_5 [i_3 + 1]))), (max((arr_5 [i_3 + 1]), (arr_13 [i_5 - 1] [i_2] [i_5 + 1])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                {
                    var_25 += ((/* implicit */unsigned short) ((-594864883764140569LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_26 += ((/* implicit */long long int) (((-(arr_13 [i_3] [i_2] [i_4 - 1]))) != (((/* implicit */long long int) ((arr_10 [i_3 + 1] [i_3 + 1]) + (((/* implicit */int) arr_7 [i_3 - 1])))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) arr_12 [i_3 + 2] [i_3 + 2] [i_4 - 1] [i_4 - 1]))))) ? (max((var_5), (33554431U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_3 + 1] [i_3 - 1] [i_4 - 1] [i_4 - 1]), (arr_12 [i_3 + 1] [i_3 - 1] [i_4 - 1] [i_4 - 1])))))));
                }
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_12 [i_8] [(short)7] [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_2] [(_Bool)1] [(short)16])))))))));
                    var_29 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)28477)), (((arr_23 [i_2] [i_3 - 1] [(short)7] [i_4 - 1]) ? (min((arr_19 [i_3] [i_3] [(signed char)14] [i_4]), (((/* implicit */long long int) var_17)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (1099511627775LL)))))));
                    var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32348))))) ? ((+((+(var_16))))) : (((/* implicit */unsigned long long int) min((min((2147483632), (268402688))), (((/* implicit */int) (short)2153)))))));
                }
                for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    arr_26 [10LL] [i_3] [i_3] [i_2] = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1))))));
                    arr_27 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_18 [i_4 - 1] [i_3 + 1]))) - (((/* implicit */int) arr_7 [i_4]))));
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_11 [i_3 + 1] [i_3])), ((short)29108)))) ? (((/* implicit */int) max((arr_22 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_11 [i_3] [i_3])))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3 + 2])) ? (arr_10 [i_10] [i_9]) : (arr_10 [i_2] [i_4 - 1])));
                        var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) var_17))));
                        var_34 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_9] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_35 |= ((/* implicit */int) (-((+(arr_19 [i_11] [i_4 - 1] [i_4] [i_3 + 1])))));
                        arr_34 [i_2] [i_3] [(short)13] [i_9] [i_11] = ((/* implicit */long long int) (short)21860);
                        var_36 &= ((/* implicit */int) arr_13 [(short)14] [i_11] [i_11]);
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        arr_38 [i_12] [i_3] [i_4] [i_9] [i_2] &= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_22 [i_2] [i_3] [i_4] [i_4] [i_4] [i_12])) : (((/* implicit */int) (_Bool)1))))) - (-1LL)));
                        arr_39 [i_2] [i_3] [i_3 + 1] [i_3] [i_3] [i_9] [i_3] = ((long long int) arr_23 [i_4 - 1] [i_4] [i_4] [i_4]);
                    }
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        var_37 *= ((/* implicit */int) arr_37 [i_13] [(_Bool)1] [i_2] [i_9] [i_2] [i_2] [i_2]);
                        arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)36))) : (((((/* implicit */_Bool) -1139055365)) ? (-8872130766802494386LL) : (((/* implicit */long long int) arr_42 [i_2] [17] [i_4] [i_9] [i_2] [i_2] [17])))))), ((+(((926756926735684200LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_44 [i_2] [i_4 - 1] [i_3] [i_9] [i_9] [16] = (!(((/* implicit */_Bool) -8872130766802494386LL)));
                    }
                    var_38 = ((/* implicit */_Bool) ((((arr_23 [(signed char)12] [i_4 - 1] [i_4] [i_4 - 1]) ? (((/* implicit */int) arr_23 [(_Bool)1] [i_4 - 1] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_30 [i_9] [i_4 - 1] [i_9] [i_9] [i_4 - 1] [i_3 - 1])))) | (((/* implicit */int) arr_18 [2LL] [2LL]))));
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_39 += ((/* implicit */unsigned short) ((_Bool) (short)-26166));
                            arr_51 [i_16] [i_3] [i_14] [i_3] [i_2] = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
                var_40 &= (!((!(((((/* implicit */_Bool) -1377839001)) || (arr_22 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                /* LoopSeq 2 */
                for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    arr_55 [i_2] [i_3] [i_3] = ((/* implicit */short) arr_15 [7] [i_3] [i_3] [i_3 + 1]);
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned short) (-(arr_33 [i_2] [i_17] [i_2] [i_3 + 1] [i_3 + 1] [i_2] [i_2])));
                        var_42 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((33554459U), (2745890297U)))), (((((/* implicit */_Bool) ((arr_52 [i_18] [i_17] [i_14] [i_3] [i_2]) * (((/* implicit */int) var_6))))) ? ((-(8268406729396822237LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (arr_52 [i_2] [i_3 + 2] [i_3 + 2] [i_17] [i_3 + 2])))))))));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) min((33554443U), (((/* implicit */unsigned int) (signed char)-15))))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) (+(-1104398785)))) ? ((+(1060239486U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1538577758))))))));
                        arr_58 [i_2] [i_3 + 1] [i_14] [i_3] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((721804883), (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) arr_25 [i_3] [i_2] [i_3 + 2] [i_14] [i_14]))))));
                    }
                    for (unsigned char i_19 = 3; i_19 < 17; i_19 += 1) 
                    {
                        arr_62 [i_19] [i_3] [i_14] [i_14] [i_3] [i_2] = ((/* implicit */_Bool) arr_18 [i_2] [i_2]);
                        var_44 = ((/* implicit */short) (((!(((/* implicit */_Bool) 1549076998U)))) ? (((((/* implicit */_Bool) 15756497043840296240ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26166))) : (8872130766802494385LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_45 = ((/* implicit */signed char) min((((arr_8 [i_14]) << ((+(((/* implicit */int) arr_49 [i_3] [i_14] [i_3])))))), (((/* implicit */unsigned int) min((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_47 [i_17] [i_14] [i_3] [i_2]))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_31 [i_3] [i_3] [(short)9] [i_17] [i_3] [i_17])) : (((/* implicit */int) (short)25060)))))))));
                    }
                }
                for (short i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    var_46 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((short) (unsigned char)67))) ? (min((arr_15 [(unsigned short)16] [i_3] [i_14] [i_20]), (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_24 [i_2] [i_2])))), ((-(((/* implicit */int) var_6))))));
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4261412876U)))))))) ? (((((((/* implicit */_Bool) arr_52 [i_2] [i_2] [i_2] [(unsigned short)2] [i_2])) ? (((/* implicit */int) arr_48 [i_2])) : (((/* implicit */int) var_17)))) + (((arr_17 [i_2] [i_2] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_20] [i_14] [i_2] [i_14] [i_3] [i_2])))))) : (max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (signed char)111))))))));
                }
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */int) (+(12U)));
                            arr_69 [i_3] = ((/* implicit */_Bool) max(((+((-(arr_54 [i_22] [i_14]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_3 - 1])))))));
                        }
                    } 
                } 
            }
            arr_70 [i_3 + 1] [i_3] = ((/* implicit */unsigned short) min((((arr_25 [i_3] [i_3] [i_3] [i_3] [i_3]) - (arr_25 [i_3] [i_3] [(short)10] [(short)10] [i_3 + 1]))), (((/* implicit */int) ((_Bool) arr_25 [i_3] [(_Bool)1] [(_Bool)1] [i_3] [i_3 + 2])))));
            var_49 = max((min((-2112925916), (((/* implicit */int) (short)1792)))), ((~(((/* implicit */int) arr_35 [i_2] [i_2] [i_2] [i_3])))));
            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_63 [i_2] [(unsigned char)4] [i_2]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (min(((~(((/* implicit */int) (unsigned short)65535)))), ((~(((/* implicit */int) var_7))))))));
        }
        for (int i_23 = 0; i_23 < 18; i_23 += 1) 
        {
            var_51 = ((/* implicit */unsigned short) min((((short) -1214776991)), ((short)-22293)));
            var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) max((((short) ((((/* implicit */int) arr_7 [(_Bool)1])) - (((/* implicit */int) (_Bool)1))))), (((short) max(((short)12520), (((/* implicit */short) (signed char)-50))))))))));
            var_53 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((8923136148304617908LL), (((/* implicit */long long int) 2745890297U))))) + (((((/* implicit */_Bool) arr_54 [i_23] [i_2])) ? (((/* implicit */unsigned long long int) 642917759)) : (arr_40 [i_2])))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((arr_49 [i_2] [i_23] [i_23]), (arr_37 [i_2] [i_23] [i_2] [i_2] [i_2] [i_2] [i_2]))))) - ((-(arr_68 [(short)2]))))) : (((/* implicit */long long int) arr_46 [i_2] [i_2] [i_2] [i_23]))));
            var_54 = ((/* implicit */unsigned long long int) ((min((min((((/* implicit */long long int) arr_24 [i_23] [i_23])), (2269405609089721141LL))), (arr_54 [i_2] [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_2] [i_2] [i_2]))))) == (((/* implicit */int) var_2))))))));
        }
        /* vectorizable */
        for (short i_24 = 4; i_24 < 15; i_24 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_25 = 3; i_25 < 16; i_25 += 3) 
            {
                var_55 = ((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_36 [i_25] [i_25 - 3] [i_25 - 3] [i_25] [i_25] [i_25] [i_25])) : (((/* implicit */int) arr_36 [i_2] [i_24] [i_25 - 3] [i_24] [i_2] [i_2] [i_2]))));
                arr_80 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)50))))) ? (arr_25 [i_2] [i_25] [i_25] [i_2] [i_25]) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
                var_56 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_46 [i_25 + 2] [i_25 - 2] [(unsigned short)2] [i_25]) : (arr_46 [i_24 - 4] [i_25 - 2] [i_24 - 4] [i_24])));
                arr_81 [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) arr_56 [i_24 - 2] [i_24] [i_25 + 2]);
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_84 [i_2] [i_26] [i_2] [i_26] = ((/* implicit */int) arr_74 [i_26]);
                var_57 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_63 [i_24 - 2] [16LL] [i_24]))));
                arr_85 [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 137438953471LL))) ? (((/* implicit */int) (short)-18481)) : (((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_2] [i_26] [i_24 - 3] [i_26]))));
            }
            for (unsigned short i_27 = 0; i_27 < 18; i_27 += 1) 
            {
                arr_89 [i_2] [i_24] [i_27] = ((/* implicit */long long int) ((int) -8923136148304617921LL));
                var_58 += ((/* implicit */short) (_Bool)1);
                /* LoopNest 2 */
                for (long long int i_28 = 0; i_28 < 18; i_28 += 1) 
                {
                    for (signed char i_29 = 2; i_29 < 17; i_29 += 3) 
                    {
                        {
                            var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) (+(((/* implicit */int) arr_63 [(_Bool)1] [i_24 + 2] [i_24])))))));
                            var_60 = ((/* implicit */long long int) ((((((/* implicit */int) var_8)) / (arr_33 [i_2] [i_24] [i_27] [(unsigned short)9] [(unsigned short)9] [i_29] [i_2]))) + (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
            var_61 = ((((/* implicit */int) arr_9 [i_24 + 1])) * (((/* implicit */int) arr_9 [i_24 - 2])));
        }
        /* vectorizable */
        for (unsigned int i_30 = 0; i_30 < 18; i_30 += 1) 
        {
            arr_96 [i_30] = ((/* implicit */long long int) arr_7 [i_2]);
            var_62 = ((/* implicit */short) ((arr_22 [(unsigned short)6] [i_2] [i_30] [i_30] [i_30] [i_30]) ? (((/* implicit */int) arr_65 [i_2] [i_30] [i_2] [(short)2])) : (arr_21 [i_2] [i_30])));
        }
        arr_97 [i_2] = ((/* implicit */short) max((((min((var_2), ((_Bool)1))) ? (max((((/* implicit */unsigned long long int) 1228805739U)), (var_16))) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) arr_75 [i_2]))));
    }
}
