/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159068
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
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 1) 
                    {
                        {
                            arr_12 [(short)6] [i_1] [i_4] [i_3] [i_1] = ((/* implicit */signed char) ((max((((/* implicit */int) ((short) 15415280387786380284ULL))), (arr_8 [i_0 - 1] [i_4 - 4] [1] [i_4 + 3]))) & (var_3)));
                            arr_13 [i_0] [i_1] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */int) ((max((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3] [i_4 + 3] [i_4 - 1] [i_3])) ? (arr_8 [(signed char)4] [i_1] [i_2] [i_1]) : (((/* implicit */int) arr_11 [(short)11] [i_1] [i_2] [i_2] [i_1] [i_4] [12])))), (((/* implicit */int) min((((/* implicit */short) arr_7 [i_1] [i_0])), ((short)31315)))))) != (((/* implicit */int) var_8))));
                            var_19 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31312))) >= (16722268366849417118ULL))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_0] [i_0]))))) > (((arr_10 [i_0 + 1] [i_0 - 1] [i_4] [i_3] [i_0 - 1] [i_4]) >> (((((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2] [i_3])) - (31265)))))))) : (((/* implicit */int) var_17))));
                            arr_14 [i_0] [i_1] [i_4] [i_2] [i_2] [i_2] [i_4 + 3] = max((1125899906580480ULL), (((/* implicit */unsigned long long int) ((arr_5 [i_2]) < (arr_3 [i_1] [i_1] [i_4])))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_11))))))) + (((int) ((arr_0 [i_0] [i_0]) * (arr_0 [i_1] [i_0]))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) min(((short)-31327), (((/* implicit */short) (signed char)-84))))) != (((/* implicit */int) var_10))));
                    arr_18 [11] [i_1] [11] [i_2] [i_5] = ((/* implicit */short) arr_3 [i_0] [i_1] [i_1]);
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    arr_21 [i_6] [i_1] [i_6] = ((/* implicit */short) ((((arr_1 [i_2]) & (((/* implicit */int) var_8)))) > (((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 + 1]) > (((/* implicit */unsigned long long int) var_18)))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_1] [i_2] [i_6])) : (3031463685923171356ULL)));
                    arr_22 [i_0 - 1] [i_0 - 1] [i_6] [i_6] [i_1] = ((/* implicit */int) ((signed char) arr_5 [i_0 - 1]));
                }
                for (int i_7 = 3; i_7 < 16; i_7 += 1) 
                {
                    arr_26 [i_7] [i_0 + 1] [i_1] [i_7] = ((/* implicit */unsigned long long int) var_8);
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0] [i_0 - 1] [i_7 - 3] [i_7 + 1])) ? (((/* implicit */int) (short)-17311)) : (((/* implicit */int) arr_16 [i_0 + 1] [(signed char)4] [i_0 + 1] [i_7 - 2] [i_7 - 2])))))));
                }
            }
            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                arr_30 [i_8] [(short)6] [(short)6] [i_0] |= var_17;
                arr_31 [i_8] [i_1] [i_8] = ((/* implicit */short) var_13);
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    var_24 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (var_3))))) : (min((((/* implicit */unsigned long long int) var_7)), (3031463685923171331ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-31323)) == (((arr_8 [i_0 - 1] [i_0 - 1] [i_9] [i_10]) >> (((((/* implicit */int) (short)10141)) - (10117)))))))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((1177895831) < (((/* implicit */int) (short)31332)))) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) var_9)))))));
                        arr_39 [i_10] [i_9] [i_1] [i_10] = ((/* implicit */short) arr_2 [i_0 + 1]);
                        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_19 [i_0 + 1] [i_1]) != (arr_19 [i_0 + 1] [(short)16])))) > (arr_19 [i_0 - 1] [i_1])));
                    }
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_0] [i_10] [i_0 - 1] [i_0 - 1])) ? (max((min((((/* implicit */int) var_5)), (-1845762060))), (max((-540767410), (var_11))))) : (((/* implicit */int) (short)29998))));
                }
                for (int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    arr_42 [i_12] = (i_12 % 2 == zero) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_12] [i_0 - 1] [i_0 - 1] [i_12] [i_12] [i_9])) ? (var_3) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0 - 1] [i_12] [(short)1] [i_1] [i_1]))))) ? (((9) >> (((((/* implicit */int) arr_37 [i_0] [i_12] [i_12] [i_0])) + (105))))) : (((((/* implicit */_Bool) (short)31315)) ? (((/* implicit */int) arr_33 [i_0] [i_0 - 1] [i_9])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_12] [i_0 - 1] [i_0 - 1] [i_12] [i_12] [i_9])) ? (var_3) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0 - 1] [i_12] [(short)1] [i_1] [i_1]))))) ? (((9) >> (((((((/* implicit */int) arr_37 [i_0] [i_12] [i_12] [i_0])) + (105))) - (115))))) : (((((/* implicit */_Bool) (short)31315)) ? (((/* implicit */int) arr_33 [i_0] [i_0 - 1] [i_9])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1]))))));
                    arr_43 [3] [i_1] [i_12] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-31324))))) ? (13372295157618638330ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8078))))) != (14753133731574644339ULL)));
                }
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)9761)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))));
                var_29 = ((((/* implicit */int) var_15)) & (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_18)) ? (arr_5 [i_1]) : (-10))))));
                var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_0 - 1] [6] [i_1] [i_9])) ? (((/* implicit */int) arr_34 [i_0] [(signed char)10] [(short)12] [i_9] [i_1])) : (((/* implicit */int) arr_34 [i_0] [i_1] [i_9] [(short)12] [i_9]))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */int) arr_34 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) arr_34 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1] [i_9]))))));
            }
            var_31 = ((/* implicit */short) var_18);
            arr_44 [i_0] = ((((((/* implicit */int) ((((/* implicit */_Bool) 1085225074)) && (((/* implicit */_Bool) (short)32767))))) >= (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10672))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_0 [i_0 + 1] [i_0 + 1]))) / (((/* implicit */unsigned long long int) arr_24 [(short)6] [i_1] [(short)6] [i_1])))));
        }
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                {
                    arr_49 [i_14] [i_13] [i_0 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) max((min(((short)8160), (var_12))), (((/* implicit */short) ((((/* implicit */int) var_15)) == (((/* implicit */int) (short)31329))))))))));
                    arr_50 [i_0] [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))) ? (max((arr_17 [i_0 + 1] [(signed char)6] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]), (arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), ((short)25423)))))));
                    /* LoopSeq 1 */
                    for (short i_15 = 4; i_15 < 14; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_15] [i_15] [i_15] [i_15 + 1] [i_0 + 1])) ? (arr_17 [i_15] [i_15 - 2] [i_15 + 2] [(short)14] [i_15 + 1] [i_0 + 1]) : (arr_0 [i_15 + 1] [i_0 + 1]))))))));
                        arr_55 [i_0] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_18) / (((/* implicit */int) arr_36 [i_0 + 1] [i_0 + 1] [i_15 + 1] [i_15 + 1] [i_0]))))) ? (((/* implicit */int) min((arr_36 [i_0] [i_0 - 1] [i_15 - 1] [i_15] [i_13]), (arr_36 [i_0] [i_0 - 1] [i_15 + 2] [i_15] [i_14])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-31315)) : (2130230049)))));
                        arr_56 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_23 [i_15 - 1] [i_15] [i_0 + 1])) : (2130230025)))) ? ((-(((/* implicit */int) arr_23 [i_15 - 1] [i_13] [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                }
            } 
        } 
        arr_57 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-1)) ? (arr_8 [i_0] [i_0 - 1] [i_0] [i_0 + 1]) : (var_11))), (min((arr_8 [i_0] [i_0 + 1] [i_0 - 1] [i_0]), (arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0])))));
        var_33 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_46 [i_0] [i_0 + 1])) : (((((/* implicit */int) (short)31325)) % (((/* implicit */int) arr_38 [14ULL] [i_0] [14ULL] [i_0 - 1])))))) | (((/* implicit */int) (signed char)0))));
    }
    var_34 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-31460))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (short)8150)) + (((/* implicit */int) (short)2892))))))));
    /* LoopNest 2 */
    for (short i_16 = 1; i_16 < 15; i_16 += 3) 
    {
        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            {
                arr_64 [i_16 - 1] [i_17] [i_17] = ((/* implicit */signed char) var_1);
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 15; i_19 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (int i_20 = 0; i_20 < 16; i_20 += 2) 
                            {
                                var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-2893)) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3693610342134907277ULL)) ? (913524829) : (((/* implicit */int) (short)2893))))) : ((+(3736639262335685289ULL)))));
                                arr_73 [i_16] [i_16] [i_18] [i_19] [i_18] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31333)) ? (((/* implicit */unsigned long long int) var_3)) : (var_16)))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_28 [i_20])))), (((/* implicit */int) arr_51 [i_16] [i_17] [(short)13] [i_17] [i_20] [i_16]))));
                                arr_74 [i_16] [i_18] [i_20] = ((/* implicit */short) ((((((/* implicit */int) arr_20 [i_20] [i_20] [i_19 - 1] [i_19] [i_20] [i_16 - 1])) ^ (((/* implicit */int) arr_20 [i_20] [i_20] [i_19 - 2] [i_18] [i_20] [i_16 - 1])))) - (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)13323)) : (((/* implicit */int) var_12)))) != (arr_72 [i_16] [i_18] [i_18] [i_19 - 2] [i_19 - 1] [i_16 + 1] [i_16 + 1]))))));
                            }
                            for (int i_21 = 1; i_21 < 15; i_21 += 4) /* same iter space */
                            {
                                arr_77 [(short)6] [i_16 - 1] [i_19 + 1] [(short)6] [(short)6] [i_16] [i_16 - 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) min(((short)8150), ((short)1611)))) | (((/* implicit */int) arr_54 [i_21] [i_19 + 1] [i_18] [i_18] [i_16 + 1] [i_16 + 1]))))));
                                arr_78 [i_16] [i_17] [i_18] [i_19] [i_21 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((470394559) >> (((((/* implicit */int) var_13)) + (104))))) << (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)20041)) : (((/* implicit */int) arr_33 [(signed char)7] [(signed char)7] [(signed char)7])))) - (20016)))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) var_7))));
                                arr_79 [i_16] = var_8;
                            }
                            for (int i_22 = 1; i_22 < 15; i_22 += 4) /* same iter space */
                            {
                                arr_82 [8] [i_17] [(short)10] [i_17] [i_22 - 1] [(short)10] [i_22 - 1] |= ((/* implicit */short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) | (((/* implicit */int) var_10))));
                                arr_83 [i_16] [i_17] [i_18] [i_19 - 2] [i_22] = ((/* implicit */short) 1125899906842623ULL);
                                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_54 [i_22 + 1] [i_16 + 1] [i_18] [i_19 - 2] [i_17] [i_22])) == (((/* implicit */int) var_4)))) ? (((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) arr_54 [i_22 + 1] [i_16 + 1] [i_18] [i_19 - 1] [i_22] [i_19 - 1])))) : (((/* implicit */int) var_8)))))));
                            }
                            for (int i_23 = 4; i_23 < 12; i_23 += 3) 
                            {
                                var_37 -= ((/* implicit */short) (+(((((/* implicit */int) arr_7 [i_16 + 1] [i_19 + 1])) + (((/* implicit */int) arr_7 [i_16 - 1] [i_19 - 2]))))));
                                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~(((/* implicit */int) var_15)))))));
                                arr_86 [i_23] [i_23] [i_18] [i_23] [i_16] = arr_51 [i_16] [i_17] [i_23 - 2] [i_19 - 2] [i_23 + 3] [i_16];
                                var_39 *= ((/* implicit */unsigned long long int) (short)-31312);
                                arr_87 [i_23] [i_23] = ((((/* implicit */_Bool) (short)-1610)) ? (14710104811373866326ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_38 [i_23] [i_17] [i_17] [i_17])) ? (((/* implicit */int) (short)31312)) : (((/* implicit */int) (short)-2894)))) % (((/* implicit */int) ((var_16) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))))));
                            }
                            var_40 = ((/* implicit */signed char) arr_25 [i_16] [(short)8]);
                            arr_88 [i_17] [i_17] [i_16] = (signed char)(-127 - 1);
                            var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) 11132821292110628524ULL)) ? (((((/* implicit */_Bool) (signed char)0)) ? (14753133731574644339ULL) : (0ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-13324)), (1840789380))))));
                        }
                    } 
                } 
                arr_89 [4ULL] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_10)), (var_16))), (((/* implicit */unsigned long long int) min(((short)11666), (var_2))))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)7804))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) min((10), (max(((+(((/* implicit */int) (short)-2894)))), (((/* implicit */int) (short)2883)))))))));
}
