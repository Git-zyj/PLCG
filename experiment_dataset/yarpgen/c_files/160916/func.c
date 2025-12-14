/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160916
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-1)), (var_15)))) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_1] [i_3] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) arr_2 [i_0]))))))))) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_3 - 4] [i_1] [i_3] [i_3]))) : (arr_6 [i_2] [i_0] [i_0] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)20431)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (_Bool)1))) & (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */int) arr_10 [i_0] [i_4] [i_0])) + (((/* implicit */int) arr_10 [i_0] [i_4] [i_0]))))));
                        arr_14 [i_5] [i_5] [i_4] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) & (var_5))), (((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)73)) ^ (((/* implicit */int) (short)24592)))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)23110)) ? (((/* implicit */int) max(((unsigned char)122), ((unsigned char)122)))) : (((/* implicit */int) (short)20430))));
                        var_22 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)116)) / (((/* implicit */int) var_0))))), ((-(arr_6 [i_0] [i_0] [i_4] [i_0]))))));
                        var_23 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_1] [i_0] [i_0]);
                    }
                } 
            } 
            arr_15 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)27)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) ((signed char) 18446744073709551615ULL))) : ((-(((/* implicit */int) arr_1 [i_0])))))))));
        }
        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
        {
            arr_18 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min(((short)2), (((/* implicit */short) arr_17 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_3))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6)))))));
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)25)), (arr_13 [i_0] [i_0] [i_0] [i_0]))))));
                        /* LoopSeq 4 */
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) arr_19 [i_7] [i_8])) : (((/* implicit */int) (signed char)1)))) != (((/* implicit */int) arr_21 [i_0] [i_7 + 1] [i_0] [i_8]))))), (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_25 = ((/* implicit */signed char) var_0);
                            arr_29 [i_9] [i_8] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (((((/* implicit */_Bool) 5968341243307712646ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2097148ULL)))) : (min((((/* implicit */long long int) (signed char)71)), (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_9])))))));
                        }
                        for (signed char i_10 = 3; i_10 < 16; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(var_13))), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-92)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_6] [i_8] [i_10])))))) : ((-(((((/* implicit */_Bool) 18446744073709551589ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))))))))))));
                            var_27 = ((/* implicit */unsigned long long int) (signed char)-1);
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)73)) == (((/* implicit */int) var_14)))))) == (((unsigned long long int) (_Bool)1)))));
                        }
                        for (signed char i_11 = 2; i_11 < 14; i_11 += 3) /* same iter space */
                        {
                            var_28 = ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max(((unsigned char)68), ((unsigned char)251)))));
                            var_29 = ((/* implicit */signed char) (_Bool)1);
                        }
                        for (signed char i_12 = 2; i_12 < 14; i_12 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)73)) >> (((((/* implicit */int) (signed char)56)) - (55))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) (signed char)69))))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_11))))));
                            arr_39 [i_7] [i_0] [i_7] [i_7] [i_12] [i_12] [i_12] = arr_24 [i_0];
                            arr_40 [i_12] [i_12] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((17917820020752402000ULL), (((/* implicit */unsigned long long int) (unsigned char)24))))) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) arr_21 [i_8] [i_0] [i_0] [i_0]))))) != (arr_8 [i_6] [i_6]));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_0] [i_7 - 1] [i_7 - 1] [i_12 + 3] [i_7 - 1]))))) : (var_5)));
                        }
                    }
                } 
            } 
            var_32 = (i_0 % 2 == 0) ? (((/* implicit */signed char) min((((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (27ULL)))), (((/* implicit */unsigned char) ((((11767532854592562888ULL) >> (((arr_0 [i_0] [i_0]) + (8026921918553950515LL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_0] [i_6]))))))))))) : (((/* implicit */signed char) min((((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (27ULL)))), (((/* implicit */unsigned char) ((((11767532854592562888ULL) >> (((((arr_0 [i_0] [i_0]) - (8026921918553950515LL))) + (6612401461559460934LL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_0] [i_6])))))))))));
            arr_41 [i_0] [i_6] |= (signed char)116;
        }
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                arr_48 [i_0] [i_0] [i_0] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_13])) ? (var_13) : (arr_45 [i_13] [i_13] [i_13])));
                arr_49 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7181004138751043984LL)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_14])) : (((/* implicit */int) arr_12 [i_14] [i_14] [i_0] [i_14]))))) ? (((((/* implicit */_Bool) arr_26 [i_13] [i_13] [i_13] [i_0] [i_13] [i_14] [i_0])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_42 [i_0] [i_13]))));
                var_33 += ((/* implicit */unsigned char) arr_37 [i_13] [i_13] [i_13]);
            }
            arr_50 [i_0] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_7)))));
        }
        var_34 = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */int) ((signed char) arr_42 [i_0] [i_0]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)27)))))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_0]))))) / (((arr_11 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) 4586588221971015734ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26)))))))));
        arr_51 [i_0] = min((18446744073709551615ULL), (14358302704005550438ULL));
        arr_52 [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11767532854592562910ULL)) ? (((/* implicit */int) (short)-28616)) : (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0])))))))), (((((((/* implicit */_Bool) arr_38 [i_0])) && (((/* implicit */_Bool) (unsigned char)27)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14))))))));
    }
    for (unsigned char i_15 = 0; i_15 < 15; i_15 += 2) 
    {
        arr_57 [i_15] = ((/* implicit */unsigned long long int) arr_13 [i_15] [i_15] [i_15] [i_15]);
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_15]), (((/* implicit */unsigned long long int) (signed char)-99))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_15])))) : (((long long int) arr_4 [i_15]))));
    }
    for (short i_16 = 1; i_16 < 11; i_16 += 3) 
    {
        var_37 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_43 [i_16]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [0ULL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) : (min((arr_30 [i_16] [i_16] [0ULL] [0ULL] [i_16]), (((/* implicit */unsigned long long int) var_1)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_16] [(signed char)6])) ? (var_3) : (arr_20 [(unsigned char)8]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_38 = ((/* implicit */signed char) arr_6 [i_16] [i_18] [i_18] [i_17]);
                    arr_65 [i_18] [i_17] [i_17] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(arr_6 [i_16] [i_18] [i_17] [i_18]))), (((/* implicit */unsigned long long int) arr_62 [i_16 + 1] [i_16 + 1]))))) ? (min((max((((/* implicit */unsigned long long int) var_10)), (var_13))), (((/* implicit */unsigned long long int) arr_1 [i_18])))) : (arr_3 [i_16] [i_18])));
                    var_39 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_13 [i_16 - 1] [i_18] [i_18] [i_16 - 1])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_16 - 1] [i_18] [i_18] [i_16 - 1]))))), (((/* implicit */long long int) ((((/* implicit */int) max((arr_42 [i_18] [i_18]), (arr_42 [i_18] [i_18])))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) var_7)))))))));
                    arr_66 [i_16] [i_17] [i_18] = ((/* implicit */signed char) var_7);
                    arr_67 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) : (min((var_6), (((/* implicit */unsigned long long int) arr_2 [i_18]))))))) ? (((((/* implicit */_Bool) arr_47 [i_16] [i_16 + 1] [i_16 + 1])) ? (6679211219116988728ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_16] [i_16 - 1] [i_18]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_18] [i_18])) / (((/* implicit */int) (signed char)16)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_19 = 2; i_19 < 11; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                for (signed char i_21 = 1; i_21 < 10; i_21 += 3) 
                {
                    {
                        var_40 = ((/* implicit */short) ((max((var_3), (((((/* implicit */_Bool) 4044913227599780527ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_20] [i_20])))));
                        var_41 = ((/* implicit */signed char) arr_53 [i_16]);
                        var_42 = 16702943801768834009ULL;
                    }
                } 
            } 
        } 
    }
    var_43 = ((/* implicit */signed char) var_0);
}
