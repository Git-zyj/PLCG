/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186663
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((var_7) + (var_5))) : ((-(var_4))))) <= (var_0)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [9ULL] = (((-(((unsigned long long int) 38034933716924958ULL)))) - (max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (arr_0 [i_0]))) | ((+(arr_1 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = (+(arr_5 [i_1]));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_15 [i_1] [4ULL] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_12 [i_1]) >= (arr_12 [i_1]))))));
                    arr_16 [i_3] [i_3] [i_1] = ((arr_1 [i_2] [i_1]) | (((unsigned long long int) 1ULL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 2) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) var_8)) < (arr_17 [i_2])));
                        arr_20 [2ULL] [i_2] [i_1] [i_1] = arr_4 [8ULL];
                        arr_21 [i_1] [i_2] [i_1] [i_4] [i_4 + 2] = ((unsigned long long int) arr_13 [i_4 + 2] [i_4] [i_4] [i_4]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 2) /* same iter space */
                    {
                        arr_25 [i_1] [i_1] = (+(arr_22 [i_5] [i_5 + 1] [i_5 + 2] [i_5] [i_5] [i_5 - 2]));
                        arr_26 [i_1] = arr_14 [i_2] [i_2] [i_5];
                        arr_27 [i_1] [i_2] = (-((+(var_1))));
                        arr_28 [i_5] [i_5] [i_5] [i_5 - 2] = (-((+(arr_10 [i_5] [i_1] [i_5]))));
                        arr_29 [i_1] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((arr_13 [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 - 1]) == (var_5)));
                    }
                }
            } 
        } 
    }
}
