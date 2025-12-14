/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18124
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
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (((var_4) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (var_0))) - (6165986103613335342ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((~(arr_0 [i_0 + 1] [i_0]))) : (arr_0 [0ULL] [i_0 + 1])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) arr_8 [i_0 + 1] [i_0 + 1]);
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                }
            } 
        } 
        arr_10 [i_0] = ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_7 [i_0] [(unsigned short)3] [i_0]))) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 - 1])));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (var_6))))));
    }
}
