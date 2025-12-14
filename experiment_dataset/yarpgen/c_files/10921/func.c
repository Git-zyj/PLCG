/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10921
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
    var_13 = var_4;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] = ((arr_3 [i_0 + 1] [i_0]) / (((((/* implicit */_Bool) (+(17830442458915734698ULL)))) ? (arr_6 [i_1] [i_0]) : (max((274877775872ULL), (var_8))))));
                        var_14 = ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) 98304ULL)) ? (98304ULL) : (3304084398796102951ULL))));
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) <= (var_10)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), ((-(arr_1 [i_1 + 1])))));
                        var_18 = arr_0 [i_0 - 1] [i_1 + 1];
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((1515619638089906116ULL) ^ (15324993981688398414ULL)))));
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 1) 
                    {
                        var_20 -= var_3;
                        var_21 = ((/* implicit */unsigned long long int) ((((((unsigned long long int) var_0)) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0 + 1] [i_1 + 3] [4ULL] [i_5 - 2]) <= (arr_15 [i_0] [i_2] [1ULL] [i_0]))))))) != ((-(((unsigned long long int) arr_9 [i_0 - 1] [i_1 + 3] [i_2] [i_5 + 1] [i_0] [i_1 - 2]))))));
                        arr_19 [i_0 - 1] [i_0] [i_2] [i_5 - 4] = arr_17 [i_0] [3ULL] [i_2] [i_2];
                        var_22 = ((((/* implicit */_Bool) 2911216717868635551ULL)) ? (min((15324993981688398420ULL), (16106127360ULL))) : (6248887826064588934ULL));
                    }
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((arr_15 [0ULL] [i_1 + 3] [i_2] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((max((arr_1 [i_0 - 1]), (5293481163876266230ULL))) ^ (var_7)))));
                }
            } 
        } 
    } 
}
