/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18047
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
    var_20 = ((/* implicit */long long int) var_14);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) min((arr_1 [i_0]), (min((min((arr_0 [i_0] [i_0]), (70368743915520ULL))), (((((/* implicit */_Bool) arr_0 [17] [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_0] [i_0])))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (short)-17188))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((3ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))))))));
        arr_7 [2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (7858497722780410403ULL) : (arr_4 [i_1] [i_1])));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_15 [i_2] [(unsigned char)14] |= ((/* implicit */long long int) min((min((((((/* implicit */_Bool) (unsigned char)205)) ? (arr_12 [i_2] [i_3] [(unsigned short)23]) : (arr_0 [18ULL] [i_3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)22))))))), (((/* implicit */unsigned long long int) arr_8 [i_3]))));
            var_23 = ((/* implicit */_Bool) arr_10 [i_3]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)205))))), (((unsigned int) var_12))))));
                            var_24 = ((/* implicit */int) 1518250960U);
                            var_25 |= ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_24 [i_2] [i_4] [i_6 + 2] [i_5] [0LL]), (arr_24 [i_2] [i_6] [i_6 - 1] [i_6 - 1] [i_7]))))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (~((~((~(arr_20 [i_7] [i_7] [i_7]))))))))));
                            arr_28 [i_2] [(short)16] [i_2] [i_2] [i_2] = (+(((/* implicit */int) ((min((arr_20 [i_2] [i_4] [i_6]), (((/* implicit */unsigned long long int) arr_19 [10ULL])))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)51)))))))));
                        }
                    } 
                } 
            } 
            arr_29 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))))) | (4983220233902715184ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4]))) & (arr_20 [i_2] [i_4] [i_4])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) <= (arr_19 [i_2])))) : (((/* implicit */int) arr_23 [i_2] [i_2])))) : (((((/* implicit */int) arr_10 [i_2])) * (((/* implicit */int) arr_10 [i_2]))))));
        }
        for (unsigned short i_8 = 4; i_8 < 21; i_8 += 4) 
        {
            var_27 |= ((/* implicit */short) (~(arr_20 [i_8] [i_8] [i_8])));
            var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_8] [i_8 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8 + 2] [i_8])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8 + 2] [i_8]))) : (((arr_21 [i_8] [i_2]) | (arr_21 [i_8] [i_8 + 4])))));
        }
        for (short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (arr_8 [i_9]) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)55995)) == (((/* implicit */int) (unsigned short)40223)))))));
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned short)16256)))), ((+(min((((/* implicit */int) (unsigned short)35235)), (680558094))))))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 3; i_11 < 23; i_11 += 3) 
                {
                    for (long long int i_12 = 2; i_12 < 22; i_12 += 1) 
                    {
                        {
                            var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_12 + 3] [i_9]))) - ((+(arr_1 [i_10])))))) ? ((-(((/* implicit */int) (unsigned char)1)))) : ((-(((/* implicit */int) (unsigned short)29598))))));
                            arr_42 [i_2] [22LL] [i_10] [i_10] [i_12] [i_9] &= ((/* implicit */signed char) arr_13 [i_10] [i_10]);
                            arr_43 [i_10] [i_9] [(_Bool)1] [(signed char)13] [i_2] = ((/* implicit */unsigned long long int) var_18);
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(arr_38 [i_2] [i_9] [i_9] [i_9]))))))));
                var_33 = ((/* implicit */unsigned long long int) arr_36 [i_9] [i_9] [i_2]);
            }
            for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) min((((((/* implicit */unsigned int) ((arr_46 [i_9] [i_9]) >> (((var_0) - (12435826898109848866ULL)))))) ^ (((((/* implicit */_Bool) 1518250960U)) ? (2776716335U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)49267))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45440))) ^ (arr_31 [i_2] [i_9]))))))))));
                            var_35 = ((/* implicit */unsigned short) (-(((unsigned int) (~(((/* implicit */int) arr_41 [i_13] [i_9] [i_13] [i_14] [i_15])))))));
                            var_36 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_36 [i_9] [i_13] [i_2])) : (3294181097U))), (((/* implicit */unsigned int) ((arr_36 [i_2] [i_2] [i_2]) < (arr_36 [i_2] [i_13] [i_2]))))));
                        }
                    } 
                } 
                arr_53 [i_2] = ((/* implicit */unsigned int) (unsigned char)167);
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_32 [i_17] [i_16] [i_13]))));
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_16)))) == (((((var_18) / (((/* implicit */long long int) arr_47 [i_2] [i_9] [18] [i_16] [i_17] [10LL])))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3294181097U)) == (arr_51 [i_9] [i_9] [i_9] [i_9] [i_16] [i_9]))))))))))));
                            arr_58 [i_2] [i_2] [i_13] [i_16] [i_16] [i_16] [i_17] |= ((/* implicit */unsigned char) arr_55 [i_9]);
                            var_39 = ((/* implicit */long long int) min((((((((/* implicit */int) ((signed char) (unsigned short)29598))) + (2147483647))) >> (((var_2) + (4240628775240587469LL))))), (((min((((/* implicit */int) arr_44 [i_2])), (-1144405636))) - (((/* implicit */int) ((unsigned short) 1144405620)))))));
                            arr_59 [i_17] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_14);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_18 = 3; i_18 < 23; i_18 += 2) 
            {
                arr_63 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_37 [i_9] [i_2] [i_9]);
                arr_64 [i_9] [i_18] |= ((((int) 13463523839806836432ULL)) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2]))))));
            }
            arr_65 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)152)) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_56 [i_2] [24])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (var_19))))))));
        }
        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2429487127U)))) * (arr_51 [i_2] [i_2] [i_2] [i_2] [(signed char)2] [i_2]))))));
        arr_66 [i_2] = ((/* implicit */short) max((6076212996366036952ULL), (((/* implicit */unsigned long long int) 1144405618))));
    }
    for (unsigned char i_19 = 0; i_19 < 14; i_19 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 1) 
                {
                    {
                        var_41 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_70 [i_19] [i_20])))));
                        var_42 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(-1144405620)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32255)) ? (((/* implicit */long long int) arr_31 [i_19] [i_19])) : (-4418415659861584406LL)))) ? (((660436298675826349LL) - (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) (+(arr_16 [(short)14] [i_19]))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_23 = 1; i_23 < 12; i_23 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned short) (~(arr_1 [i_23 + 2])));
                            var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_22 [i_19] [i_21] [i_19] [i_22]))))))));
                            arr_81 [i_19] [(unsigned short)5] [i_22] = ((/* implicit */unsigned int) max((((max((-1), (((/* implicit */int) var_14)))) * (((/* implicit */int) ((unsigned short) arr_52 [i_19] [i_20] [i_21] [i_22] [18ULL]))))), ((-(-2127415550)))));
                        }
                        for (long long int i_24 = 3; i_24 < 12; i_24 += 1) 
                        {
                            var_45 = ((/* implicit */_Bool) arr_78 [i_22] [i_20]);
                            arr_85 [i_19] [i_19] [i_20] [4] [i_22] [i_24] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_24 - 3] [i_24 - 3] [i_24] [i_24 - 3] [i_22] [i_24 + 2])))))) >= ((+(arr_51 [i_24 - 3] [i_24 - 3] [i_24 - 3] [i_24] [i_22] [i_24 - 1])))));
                            arr_86 [i_22] [i_22] [i_21] [i_21] [(short)7] = ((/* implicit */unsigned long long int) var_19);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_25 = 0; i_25 < 14; i_25 += 1) 
        {
            for (unsigned long long int i_26 = 2; i_26 < 12; i_26 += 4) 
            {
                {
                    arr_93 [i_19] [i_25] [i_19] = ((/* implicit */short) var_8);
                    var_46 = ((/* implicit */unsigned char) ((int) max((min((11779892787367987503ULL), (14862605567127962189ULL))), (((((/* implicit */_Bool) arr_45 [i_19] [i_19] [i_26])) ? (((/* implicit */unsigned long long int) var_7)) : (4660644301189062221ULL))))));
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_16)) * (max((3180617538998104323ULL), (((/* implicit */unsigned long long int) arr_38 [i_26 + 1] [i_26 - 2] [i_26 + 2] [i_26 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 4) 
                    {
                        for (unsigned long long int i_28 = 1; i_28 < 11; i_28 += 3) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) arr_88 [i_19] [3ULL] [i_26])) * (((unsigned long long int) arr_84 [i_19])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_19] [i_19] [i_19] [(unsigned short)1])) ? (((/* implicit */int) arr_10 [i_26 + 1])) : (((/* implicit */int) ((unsigned char) var_14)))))))))));
                                arr_99 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_26]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775807LL)) && ((_Bool)1))))) : (max((4983220233902715183ULL), (((/* implicit */unsigned long long int) arr_33 [i_27] [i_25] [i_27])))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_80 [i_26 - 1] [i_26] [i_26 - 1] [i_26 - 1] [i_26 - 2] [i_19] [i_19])))))));
                                var_49 = ((/* implicit */unsigned long long int) max((var_49), (((((/* implicit */_Bool) arr_12 [24ULL] [(unsigned short)3] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_28 - 1])), ((unsigned short)10245))))) : ((~(max((arr_11 [i_27] [i_27]), (((/* implicit */unsigned long long int) arr_41 [i_19] [i_25] [i_19] [20LL] [i_19]))))))))));
                            }
                        } 
                    } 
                    arr_100 [i_25] [i_25] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_25] [i_26] [i_26 + 1] [i_26 - 2] [i_26]))))), (((((/* implicit */_Bool) arr_88 [i_19] [i_25] [i_26 + 1])) ? (((((/* implicit */_Bool) 1144405598)) ? (2776716335U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24983))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                }
            } 
        } 
        arr_101 [i_19] = ((/* implicit */unsigned short) (unsigned char)99);
    }
}
