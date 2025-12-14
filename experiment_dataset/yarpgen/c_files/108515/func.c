/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108515
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 -= ((unsigned long long int) ((arr_4 [2ULL] [i_1 + 1] [i_1 + 1]) / ((+(var_5)))));
                arr_6 [i_0] [i_0] = 4324185994787998271ULL;
            }
        } 
    } 
    var_16 += var_11;
    var_17 += var_14;
    var_18 &= (((!(((/* implicit */_Bool) (~(2686422491504948973ULL)))))) ? (var_0) : (((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (var_5) : (((((/* implicit */_Bool) 13975873881563342304ULL)) ? (var_12) : (18446744073709551615ULL))))));
}
