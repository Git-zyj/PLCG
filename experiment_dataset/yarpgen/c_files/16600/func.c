/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16600
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17397480983860985569ULL)) || (((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_4] [i_3] [0ULL])))))), (((((144115050636902400ULL) * (arr_6 [i_4] [11ULL] [i_0]))) * (0ULL))));
                                arr_14 [4ULL] [i_1 - 1] [i_2] [i_3 - 2] [i_3 + 1] [i_4] = ((var_13) | (((unsigned long long int) var_9)));
                                var_19 = 3213535035083381417ULL;
                                var_20 = 18446744073709551587ULL;
                            }
                        } 
                    } 
                    arr_15 [7ULL] [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) (~(arr_10 [i_0]))))) ? ((~((~(arr_12 [4ULL] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 + 1]))))) : ((~((~(18446744073709551608ULL))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_21 = arr_9 [i_0];
                    arr_19 [i_5] [i_1] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_5])) ? (var_13) : (4663316377590899204ULL))), (arr_1 [i_5] [i_1 + 1])))) ? (arr_0 [5ULL] [12ULL]) : (17397480983860985562ULL));
                }
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_31 [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_29 [0ULL] [i_6] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1]) > (11098577179979103650ULL))))));
                                arr_32 [i_0] [i_1 - 1] [i_6] [11ULL] [i_8] [i_7] = (~(var_9));
                                var_22 = min((18446744073709551615ULL), (var_4));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        arr_35 [i_0] [0ULL] [i_1 - 2] [i_9] = arr_12 [i_0] [i_1 + 1] [i_6] [i_9] [i_1 - 2] [i_1 + 1];
                        arr_36 [i_0] [i_1] [i_6] [i_1 - 2] [i_1 + 1] = ((unsigned long long int) ((arr_10 [i_0]) | (var_17)));
                        arr_37 [i_0] [i_0] [i_1 - 1] [i_1 - 2] [4ULL] [i_9] = (~((~(arr_24 [2ULL]))));
                        arr_38 [i_0] [i_1 + 1] [i_6] [i_9] &= (+(arr_0 [11ULL] [i_1 + 1]));
                    }
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), ((+(var_14)))));
                }
                arr_39 [3ULL] [i_1] = arr_27 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1];
                arr_40 [1ULL] = (((~(arr_4 [i_1 - 2] [i_1 - 2]))) & (min((var_11), (var_10))));
            }
        } 
    } 
    var_24 = (~((~(9980593949844495514ULL))));
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (var_17)));
}
