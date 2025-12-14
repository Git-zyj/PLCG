/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128099
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_10 = max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [14LL] [14LL] [i_2] [16])), (arr_11 [i_0] [i_1])))) ? (var_1) : (((((/* implicit */_Bool) arr_4 [(short)16])) ? (arr_11 [i_1] [i_1]) : (((/* implicit */long long int) arr_6 [(short)10] [(short)10] [(short)12])))))), (max((arr_8 [i_2 - 1] [(short)9] [i_2 - 1] [i_3 - 2]), (((/* implicit */long long int) arr_9 [i_1] [i_2 + 2] [i_2 + 1] [i_3 - 3] [i_3 + 2])))));
                            var_11 = ((/* implicit */short) ((((/* implicit */long long int) arr_9 [i_2 - 3] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2])) <= (((((/* implicit */long long int) var_8)) & (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_9)))))));
                            var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_10 [12LL])), (arr_5 [i_0] [i_1] [i_2] [i_3]))) / (((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_2)))))))) ? (((((/* implicit */long long int) var_5)) / (min((var_0), (var_9))))) : (max(((+(arr_5 [i_0] [i_1] [4] [i_3]))), (max((((/* implicit */long long int) var_5)), (var_0)))))));
                        }
                    } 
                } 
                var_13 = ((max((((/* implicit */long long int) arr_10 [(short)18])), (var_9))) & (((((arr_5 [i_0] [i_0] [i_0] [i_1]) + (9223372036854775807LL))) << (((arr_10 [(short)8]) - (811885195U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 4; i_4 < 10; i_4 += 3) 
    {
        for (long long int i_5 = 3; i_5 < 11; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (short i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_27 [i_4] [i_7 - 1] [(short)12] [i_5] [i_4] = ((/* implicit */unsigned int) arr_22 [(short)8] [i_5] [i_5 - 2]);
                                var_14 = ((/* implicit */int) (~(-8653860398368873650LL)));
                                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 3] [i_5 - 3]))) < (var_0))))), (max((arr_10 [(short)12]), (arr_6 [i_4 - 4] [16] [i_5 - 1])))));
                            }
                        } 
                    } 
                } 
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) / (var_5)))) ? (arr_2 [i_5 - 1] [i_5]) : (((/* implicit */unsigned int) max((arr_22 [i_5 - 1] [i_5] [i_5]), (arr_7 [i_4] [i_5] [i_4] [i_4])))));
                arr_28 [i_4] = arr_1 [i_4 - 2];
                arr_29 [i_4 + 1] [i_4] = arr_11 [i_5] [10LL];
            }
        } 
    } 
}
