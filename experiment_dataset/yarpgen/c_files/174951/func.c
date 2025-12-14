/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174951
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
    var_16 = var_10;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_17 -= ((/* implicit */unsigned short) var_15);
                    var_18 = ((/* implicit */short) arr_0 [i_1]);
                }
                for (int i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_0] = ((/* implicit */int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) min(((short)-2481), (((/* implicit */short) (signed char)-115))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_3 [i_5]);
                                arr_18 [i_4] = arr_15 [i_3];
                                arr_19 [i_0] [i_1] [i_4] = ((/* implicit */short) min((max((3553789424295751219LL), (((/* implicit */long long int) arr_11 [i_3 - 1] [i_3 - 1] [i_1 + 1])))), (((long long int) (signed char)-114))));
                                arr_20 [i_5] [i_5] [(_Bool)1] [i_4] [i_1] [i_0] [i_0] = max((((/* implicit */unsigned int) (signed char)115)), (min((((/* implicit */unsigned int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (4014013084U))));
                                var_20 = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_3] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) 6361855280839883491ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (8587441185821694111LL))))));
                    var_21 += ((/* implicit */long long int) (signed char)87);
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 280954212U)) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_1])) ? (var_6) : (((/* implicit */long long int) 280954212U)))) : (((/* implicit */long long int) min((-603557452), (((/* implicit */int) var_15))))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 20802628U)))))))))));
                }
                for (int i_6 = 1; i_6 < 11; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_6] [i_7] [i_6] = ((/* implicit */int) (+(((long long int) arr_22 [i_8]))));
                                arr_29 [i_0] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1491232594)) ? (3412048191743435148LL) : (5944972324971964122LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))) == (arr_15 [i_0])))) : (((/* implicit */int) var_8)))) | (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_27 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_6] [i_0] [i_0] = min((((/* implicit */long long int) (_Bool)1)), ((-(-9223372036854775800LL))));
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (741558866)));
                        /* LoopSeq 1 */
                        for (int i_10 = 4; i_10 < 8; i_10 += 2) 
                        {
                            arr_36 [i_0] [i_6] [i_6] [i_9] [i_10] = ((/* implicit */int) 18126270909621347437ULL);
                            var_24 *= ((/* implicit */unsigned short) (-(((arr_3 [i_10 + 4]) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)16382)) / (((/* implicit */int) (unsigned short)59138)))))))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((arr_26 [(unsigned char)0] [i_1 + 1] [i_1 + 1] [i_11] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_11])) > (var_6)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            arr_42 [i_0] [i_1 + 1] [i_11] [i_6] = ((/* implicit */unsigned short) var_11);
                            arr_43 [i_0] [i_1] [i_6] [i_11] [(unsigned short)11] [(unsigned short)7] = ((/* implicit */unsigned char) (short)23581);
                        }
                        for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6964617802849427127LL)) & (arr_16 [i_0] [i_11])))) ? (max((var_5), (((/* implicit */int) (short)-32765)))) : (var_2)))) ? (((arr_26 [i_0] [i_1] [i_6] [i_11] [i_0]) / (var_6))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_17 [i_13 - 1] [i_6 + 1] [i_6] [i_1] [i_1 + 1] [i_0])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_6))))))))));
                            arr_46 [i_6] [(short)11] [i_6] [i_11] [i_13] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-6)) ? (min((max((-8519260991114869768LL), (-1709603464291300248LL))), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_1] [i_6] [i_11])))));
                        }
                    }
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        arr_50 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) 13909490655651885610ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_6 - 1])))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) != (20802628U))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) -1850704043)), (3412048191743435139LL)))));
                            var_28 = (+(((/* implicit */int) (_Bool)1)));
                        }
                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 8; i_16 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((short) var_2)))));
                            var_30 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)45380))));
                            var_31 = ((/* implicit */unsigned int) arr_34 [i_0] [i_16 + 3] [i_6 + 1] [i_1 + 1] [(unsigned char)3]);
                            arr_57 [i_0] [i_6] = ((/* implicit */unsigned char) var_9);
                        }
                        for (int i_17 = 2; i_17 < 8; i_17 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned long long int) var_5);
                            var_33 = ((/* implicit */unsigned short) max((var_6), (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (int i_18 = 2; i_18 < 8; i_18 += 4) /* same iter space */
                        {
                            arr_64 [i_6] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (((_Bool)1) && (var_0)))) == (((/* implicit */int) ((_Bool) var_15)))))), (((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (308190951558767955LL)))));
                            arr_65 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_37 [i_6] [i_6] [(short)0] [i_0]))))), (arr_59 [(short)10] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_6]))))));
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((int) -1976418667255143439LL)))));
                        }
                    }
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) 104118211)), (((((/* implicit */_Bool) (signed char)15)) ? (17348673825908682752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24202))))))), (((/* implicit */unsigned long long int) arr_60 [i_0] [i_0] [i_1] [i_6] [i_6])))))));
                }
                arr_66 [i_0] &= ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
}
