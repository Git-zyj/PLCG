/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170258
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */_Bool) 18446744073709551591ULL);
                arr_6 [i_0] [5ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1526423894U))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_15 [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */long long int) ((13289867703648360347ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56613)))));
                        var_11 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (unsigned short)32896)) || (((/* implicit */_Bool) 624361725401602422ULL)))), (arr_9 [i_4]))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) 18446744073709551605ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 + 1])))))));
                    }
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((_Bool) arr_7 [i_7 - 1] [i_3 - 1]))), (arr_19 [(short)18] [i_4] [i_7 - 3] [i_7] [i_7])));
                            arr_21 [14U] [14U] [0U] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50862))) : (1280154767443898228ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2217722238U))))) : (((((/* implicit */int) (signed char)104)) - (((/* implicit */int) (unsigned short)52248))))));
                        }
                        for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_9 [i_2])), ((unsigned short)52248)))) ? (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */int) var_6))))) : (arr_24 [i_2] [i_3] [i_4] [i_6] [i_6])))))))));
                            var_14 |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 624361725401602417ULL)) ? (arr_20 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50698))))))))) + (max((((/* implicit */int) (short)32767)), (2147483647)))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((unsigned int) (~(var_7))));
                            var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-1591)), (((((/* implicit */int) arr_17 [i_2] [i_3] [1LL] [i_6] [i_3 + 1])) | (-2147483647)))));
                        }
                        /* vectorizable */
                        for (short i_10 = 4; i_10 < 17; i_10 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_10 - 1] [i_3 - 1])))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_26 [i_2] [i_2] [i_3] [i_2] [(short)14] [i_2] [i_10 - 1]) - (15101600461593257950ULL))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 18; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            {
                                arr_36 [i_2] [i_3 - 1] [i_3 - 1] [i_11 + 1] [i_12] [i_2] [i_11 + 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) 0U)))) ? (2529846091145931122ULL) : (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46115))))) : (1497023939))))));
                                var_19 = ((/* implicit */unsigned long long int) (unsigned short)13270);
                                arr_37 [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)52256);
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) + (((long long int) 12U))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_11 - 1] [i_11 - 1] [i_2] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(_Bool)1] [i_3 + 1] [i_4] [i_11 - 1] [i_12]))) : (var_3))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) min((arr_22 [i_2] [i_2] [i_3 + 1] [i_2] [i_13]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (max((1740602194227965079ULL), (((/* implicit */unsigned long long int) var_8)))))));
                        arr_40 [i_2] [i_3 - 1] [(signed char)6] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3967569851U)) ? (((/* implicit */int) arr_33 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_4] [(signed char)18])) : (((/* implicit */int) arr_33 [i_2] [i_2] [i_3 - 1] [i_4] [i_13] [i_13])))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_14 = 1; i_14 < 17; i_14 += 2) 
                        {
                            arr_44 [4ULL] [(_Bool)1] [4ULL] [i_4] [i_13] [i_14 + 2] [i_14 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17356)) ? (-37318829394808038LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46132)))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_3 - 1] [i_13] [i_14 + 2])))))));
                            var_23 = ((unsigned int) arr_8 [i_3 + 1] [i_4]);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_47 [i_15] [i_3 + 1] [i_15] [i_13] [i_15] = ((/* implicit */unsigned int) arr_41 [i_15] [i_3] [i_3] [i_2]);
                            var_24 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_23 [i_2] [3ULL] [i_4] [i_13] [i_15])))))));
                        }
                        for (unsigned long long int i_16 = 4; i_16 < 18; i_16 += 2) 
                        {
                            arr_52 [(short)18] [(short)18] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((6958001828447516476LL) ^ (-4957894130844407762LL)))) ? ((((_Bool)1) ? (6258924279832538434ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((11813961414122340467ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                            arr_53 [i_2] [i_3 + 1] = ((/* implicit */unsigned int) min((((signed char) (!(((/* implicit */_Bool) arr_17 [18U] [i_3] [i_4] [i_13] [(_Bool)1]))))), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_27 [i_2] [i_3] [i_4] [(short)14] [i_13])))))))));
                        }
                        for (unsigned short i_17 = 2; i_17 < 17; i_17 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_35 [i_2] [(unsigned short)16] [i_3 + 1] [i_17 + 2] [i_17 - 2] [i_17]), ((unsigned short)46112)))) >> (((/* implicit */int) ((short) max((((/* implicit */unsigned int) (_Bool)1)), (0U)))))));
                            arr_57 [(_Bool)1] = ((((/* implicit */_Bool) (short)32742)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28821))) : (1078776382U));
                            arr_58 [i_2] [i_3] [(unsigned short)4] [(unsigned short)4] [i_17] = ((/* implicit */signed char) arr_33 [i_2] [i_3 + 1] [i_2] [i_13] [i_4] [i_2]);
                            var_26 = ((/* implicit */long long int) ((int) (short)32767));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_18 = 1; i_18 < 17; i_18 += 1) 
                        {
                            arr_61 [i_2] [i_18] [i_18] [i_13] [i_18 + 1] = (!(((/* implicit */_Bool) ((((((((/* implicit */int) (short)-22426)) + (2147483647))) >> (((/* implicit */int) var_1)))) << (((1073741824U) - (1073741824U)))))));
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (unsigned short)52280)) : (((/* implicit */int) (_Bool)1))));
                            arr_62 [(signed char)6] [i_13] [i_4] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (unsigned short)17940)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7656804888268229403LL)))))) % ((((_Bool)1) ? (12187819793877013183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_2] [i_2] [i_2] [i_2] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((_Bool) arr_46 [i_2] [i_3] [i_3] [i_13] [i_3]))));
                            var_29 += ((/* implicit */unsigned short) ((_Bool) var_8));
                        }
                    }
                }
            } 
        } 
    } 
}
