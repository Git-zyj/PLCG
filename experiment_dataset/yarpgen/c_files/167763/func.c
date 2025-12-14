/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167763
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
    var_14 ^= ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) -485006050345382168LL);
        var_16 = ((/* implicit */unsigned long long int) var_3);
        var_17 += ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) ((((((var_8) > (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_2 [i_1]))))) : (((/* implicit */int) ((7342724197234401084ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))))) - (((((((((/* implicit */int) arr_2 [i_1])) + (2147483647))) >> (((11609869597569605995ULL) - (11609869597569605969ULL))))) << (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)65535))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */short) arr_7 [i_1] [i_2] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_5] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) : (13649488133001907625ULL)))) && (((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) arr_11 [i_1] [i_1] [i_3] [i_4])))))))) : (arr_13 [i_1] [i_1] [i_2] [i_1] [i_2] [i_5])));
                            var_19 = ((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_3] [i_1] [i_5] [i_3]);
                            var_20 = ((min((arr_14 [i_1] [i_1] [i_3] [i_1] [i_5]), (((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_3 [i_1]))))))) > ((-9223372036854775807LL - 1LL)));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)7680)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_10)))) <= (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_5])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_2)))))) ? (2147483647) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)2265)) : (((/* implicit */int) arr_2 [i_1])))) : (((arr_16 [i_1] [i_1] [i_4] [i_1] [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_4]))))))));
                            var_21 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                arr_20 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1]);
            }
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) < ((+(arr_8 [i_2] [i_2] [i_2])))))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)11)), (1674465284136300842ULL)))) ? (((/* implicit */int) ((unsigned short) 2147483641))) : ((+(((/* implicit */int) arr_2 [i_1]))))))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_2 [i_1])))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) arr_7 [i_1] [i_2] [i_1])))))))) * (((((/* implicit */_Bool) (unsigned short)51947)) ? (arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) (~(arr_13 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        arr_29 [i_1] [i_1] = (~(arr_12 [i_1] [i_1] [i_1]));
                        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])), (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((11104019876475150532ULL), (((/* implicit */unsigned long long int) var_5))))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            arr_32 [i_1] = ((/* implicit */unsigned long long int) arr_28 [i_8] [i_8] [i_8] [i_1] [i_8] [i_8]);
            var_25 = (+(6160816045240084259LL));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) (-(arr_24 [i_1] [i_1] [i_1] [i_8])))))))) : (((((unsigned long long int) 1040513623)) * (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (7342724197234401107ULL)))))));
        }
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((((arr_3 [i_1]) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1])))) * (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) ((arr_31 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((arr_27 [i_1] [i_1] [i_1] [i_1]), ((unsigned short)65525)))) : (((((/* implicit */_Bool) arr_30 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)38995)) : (((/* implicit */int) arr_31 [i_1] [i_1] [i_1]))))))));
        var_28 ^= ((((/* implicit */int) arr_10 [(short)18] [(short)18])) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)-31661)) : (((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [(unsigned short)16] [i_1] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [i_1] [i_1]))) + (arr_12 [i_1] [i_1] [i_1]))))))));
        arr_33 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_12 [i_1] [i_1] [i_1])))) < ((~(((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1])))))))) | (max((((/* implicit */long long int) max((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))), (arr_24 [i_1] [i_1] [i_1] [i_1])))));
    }
    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 4) 
    {
        var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_9])), (arr_24 [i_9] [i_9] [i_9] [i_9])));
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_37 [i_9 - 1]) ? (((((/* implicit */_Bool) (unsigned short)7400)) ? (((/* implicit */int) arr_6 [i_9] [i_9])) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_6 [i_9] [i_9 + 4])) << (((arr_14 [i_9] [i_9] [i_9] [(_Bool)1] [i_9]) - (4435773739610758826LL)))))))) ? (((((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_4 [2ULL])) : (((/* implicit */int) (short)-20939)))))) : (((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_7))))) << (((((((/* implicit */int) (unsigned short)16584)) - (((/* implicit */int) arr_6 [i_9] [i_9])))) + (1256))))))))));
        var_31 |= ((/* implicit */long long int) arr_3 [i_9]);
        arr_38 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9] [i_9] [i_9]))) < (min((((/* implicit */unsigned long long int) ((arr_4 [16ULL]) ? (((/* implicit */int) arr_7 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_34 [i_9]))))), (((((/* implicit */_Bool) 16060995018954267926ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58147))) : (arr_22 [i_9] [i_9] [i_9] [i_9])))))));
    }
}
