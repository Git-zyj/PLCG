/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119767
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 |= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [11U] [(_Bool)1])))), (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [9ULL])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2] [(unsigned short)1])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2] [i_2]))))));
                    arr_10 [i_0] [i_1] [i_0 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(min((((/* implicit */int) var_10)), (arr_4 [i_0 + 3] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) arr_0 [(_Bool)1]);
                                arr_15 [11ULL] [i_2 + 1] [i_2 + 1] [i_1] = ((/* implicit */_Bool) 1535434198104057487ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_0 [i_0 + 2])) | (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (var_10))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_13 [(unsigned char)11] [i_0]))));
    }
    for (unsigned char i_5 = 3; i_5 < 20; i_5 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((1570922982816861521ULL), (((/* implicit */unsigned long long int) ((arr_17 [i_5 - 3]) ? (((/* implicit */int) arr_18 [i_5 - 3])) : (((/* implicit */int) arr_18 [i_5 - 3]))))))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_25 [(unsigned char)10] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), (arr_25 [0LL] [i_6] [(unsigned short)17] [i_6])))) : (max((-262460364), (((/* implicit */int) var_11))))));
                var_20 = ((short) (+(((/* implicit */int) arr_17 [i_5 + 1]))));
                /* LoopSeq 1 */
                for (int i_8 = 3; i_8 < 20; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned long long int) ((arr_18 [(_Bool)1]) ? (arr_29 [i_7 + 1] [i_7 + 1] [0U] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5 - 2])))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5 - 2] [i_5 - 1] [i_5 - 1] [1] [i_6]))) | (((((/* implicit */_Bool) 16911309875605494128ULL)) ? (950943870436754129ULL) : (10264776922799647434ULL)))));
                    }
                    var_23 += ((((((/* implicit */_Bool) 562992858)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_30 [i_5 + 1] [i_6] [i_6] [i_7 + 1] [i_8 + 1])))) / (((/* implicit */int) ((signed char) max((var_6), (((/* implicit */unsigned long long int) -4462630236142452057LL)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 2; i_10 < 20; i_10 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) var_2);
                        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_23 [i_5 - 3] [i_6] [i_10 + 1]), (((/* implicit */int) var_2))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))), (((2628934452U) | (((/* implicit */unsigned int) -562992859))))))));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) var_8))));
                        var_27 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_12))) < (((/* implicit */int) ((_Bool) arr_28 [i_6])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 2; i_11 < 20; i_11 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) ((1535434198104057504ULL) * (2710023109712628608ULL)));
                        arr_37 [i_5] [i_6] [i_5] [(short)12] [i_6] [i_11] = ((((/* implicit */_Bool) arr_30 [i_5 - 3] [i_5 - 1] [i_5 - 1] [i_8] [i_7 + 1])) ? (((/* implicit */int) arr_21 [i_6] [i_11 - 2])) : ((~(((/* implicit */int) arr_34 [i_5] [i_5] [(unsigned short)4] [i_8] [i_11 + 1])))));
                        var_29 = ((/* implicit */unsigned char) arr_25 [i_6] [i_7] [i_8] [i_11]);
                    }
                    var_30 |= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) min((arr_24 [i_5 - 1] [i_6] [i_7] [i_7]), (((/* implicit */short) arr_35 [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 3] [i_5] [i_5 - 3]))))), (((arr_23 [i_6] [20ULL] [20ULL]) / (((/* implicit */int) arr_28 [4ULL])))))));
                }
                var_31 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_27 [i_5] [i_5] [i_5 - 1])), (max((((/* implicit */unsigned long long int) arr_25 [(short)0] [i_6] [i_6] [i_6])), (((arr_18 [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (1535434198104057487ULL)))))));
                arr_38 [i_5] [i_6] [i_5 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)32)), (var_1))))));
            }
            arr_39 [20ULL] |= ((/* implicit */unsigned long long int) arr_28 [6ULL]);
        }
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                for (signed char i_14 = 1; i_14 < 19; i_14 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
                        {
                            arr_50 [i_5] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) min((var_1), (((/* implicit */unsigned long long int) arr_41 [i_15])))))) << (((/* implicit */int) ((((/* implicit */int) arr_22 [i_14 + 2] [(unsigned short)20] [i_5 + 1])) > (((/* implicit */int) arr_22 [i_14 + 1] [i_12] [i_5 + 1])))))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_29 [i_14 + 2] [i_14 + 1] [i_12] [i_14]), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) arr_18 [1U])) : (((((/* implicit */int) max((var_2), (arr_24 [i_5] [i_12] [i_13] [(unsigned char)10])))) / (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_45 [i_12] [i_12] [i_12]))))))))))));
                            var_33 *= ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_30 [(short)9] [(unsigned short)7] [14] [(unsigned char)5] [(unsigned short)11])), (4294967295U)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_46 [i_5 - 1] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_40 [i_15])) : (((/* implicit */int) var_0)))) > (((/* implicit */int) var_7))))) : ((~(((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_36 [i_5])))))));
                            arr_51 [12LL] [i_13] [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_15] [i_14 + 2] [i_13] [i_12] [i_15]))))), (((unsigned int) ((((/* implicit */_Bool) arr_29 [i_12] [i_12] [i_13] [i_12])) ? (((/* implicit */int) (short)-16670)) : (((/* implicit */int) arr_42 [i_5] [i_5] [i_5])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_16 = 2; i_16 < 18; i_16 += 4) 
                        {
                            arr_54 [14U] [i_12] [i_13] [9U] [i_16 + 2] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_2)) / (((/* implicit */int) (short)-971)))));
                            var_34 = ((/* implicit */long long int) 16335005264257476234ULL);
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            arr_59 [i_13] [i_13] = max((((unsigned short) (signed char)42)), (((/* implicit */unsigned short) var_13)));
                            var_35 = (((~(((/* implicit */int) arr_58 [i_5 - 2] [i_12] [i_13] [i_5 - 2] [i_17])))) <= (((/* implicit */int) var_12)));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            arr_64 [i_13] [i_13] [i_13] [(signed char)7] [i_18] [(signed char)7] = ((/* implicit */unsigned long long int) ((unsigned int) (short)-1));
                            var_36 = ((/* implicit */_Bool) min((var_36), (arr_40 [(unsigned char)3])));
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) -2114318880)), (var_4))))))));
                        }
                        var_38 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((8790727817652500478LL), (((/* implicit */long long int) 0))))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_49 [i_5] [i_5] [(unsigned char)0] [i_13] [i_14])), ((short)4)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_12)), (arr_36 [i_5])))) || (((arr_21 [i_13] [i_5]) && (arr_18 [i_5 + 1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5 - 2] [i_13] [i_5])))))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) arr_25 [i_5] [i_12] [i_5] [i_14 - 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            var_40 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (min((min((arr_62 [i_5] [i_5] [i_5 - 3] [13LL] [i_5]), (((/* implicit */unsigned long long int) 3742363211U)))), (((((/* implicit */_Bool) arr_48 [i_19] [i_14] [8LL] [i_13] [i_12] [(_Bool)1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_6)))))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) 1535434198104057487ULL))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (arr_17 [i_12])))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (4462630236142452067LL)))) < (var_4)))))))));
                            arr_69 [i_5] [(_Bool)1] [i_5 - 3] [i_13] [(short)7] = ((/* implicit */unsigned short) 1446807100);
                        }
                    }
                } 
            } 
            var_42 = ((/* implicit */long long int) (((~(var_1))) ^ (((arr_48 [i_5 - 1] [i_12] [i_5 - 1] [i_12] [i_12] [i_5 - 3] [i_12]) | (arr_48 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 3])))));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    {
                        arr_74 [i_20] [i_5] [i_12] [i_5] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_25 [i_21] [i_21] [i_21] [i_21])), (11277837826822211732ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [(unsigned short)18] [(unsigned short)18]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1103369018)) && (arr_21 [i_20] [i_12])))), (min((14368003341826272337ULL), (((/* implicit */unsigned long long int) 2005449723U))))))));
                        var_43 = (short)-1;
                        arr_75 [(signed char)15] [9U] [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_30 [i_5 + 1] [i_5] [i_5 - 2] [(unsigned short)20] [19LL]), (arr_30 [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_5])))) + (((/* implicit */int) ((_Bool) arr_32 [i_5] [i_5] [5U] [i_5 - 1] [i_5 - 3])))));
                        arr_76 [i_20] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) ((_Bool) var_14)))));
                    }
                } 
            } 
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) 133112794)) ^ (2845187445U))), (((/* implicit */unsigned int) 1103369018))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_36 [i_5 - 2])))) : ((-(max((arr_63 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_12]), (((/* implicit */unsigned int) arr_40 [i_5 - 2]))))))));
            arr_77 [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned int) max(((+(max((((/* implicit */unsigned long long int) arr_31 [(signed char)4] [(short)16] [i_12] [i_12] [i_12])), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_58 [i_5 - 1] [i_5 - 1] [i_12] [i_12] [(unsigned short)0])) << (((((/* implicit */int) arr_58 [4] [i_12] [i_12] [i_12] [i_12])) - (2312))))))));
        }
    }
    for (unsigned char i_22 = 0; i_22 < 20; i_22 += 4) 
    {
        arr_80 [i_22] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) (unsigned short)9599))), (var_1)));
        var_45 = ((/* implicit */unsigned long long int) arr_49 [i_22] [i_22] [i_22] [i_22] [i_22]);
    }
    var_46 = ((/* implicit */_Bool) var_8);
}
