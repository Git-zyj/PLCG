/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175706
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = min((arr_0 [i_0]), (((((/* implicit */_Bool) var_14)) ? (var_10) : ((-9223372036854775807LL - 1LL)))));
        arr_3 [6LL] |= ((((/* implicit */_Bool) 4765656319688380392LL)) ? (max((var_6), (7795054689699900823LL))) : (((max((9223372036854775793LL), (var_11))) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775774LL))) + (90LL))) - (56LL))))));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] = max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) ? (arr_10 [i_0] [i_1] [i_1 - 3]) : (max((arr_10 [i_1] [i_1] [i_0]), (-6058747301075389346LL))))), (max((arr_5 [i_1] [i_1]), (8098273198590929759LL))));
                        arr_13 [i_0] [i_0] [i_1] [i_3] [i_3] [i_1] = max((((((/* implicit */_Bool) max((arr_11 [i_0] [i_1] [i_1] [i_3]), (arr_0 [i_3])))) ? ((-9223372036854775807LL - 1LL)) : (arr_5 [i_1] [i_3]))), (min((-7795054689699900811LL), (arr_1 [i_3] [i_1 - 3]))));
                    }
                } 
            } 
        } 
    }
    var_16 = 7795054689699900823LL;
    var_17 = -7795054689699900835LL;
}
