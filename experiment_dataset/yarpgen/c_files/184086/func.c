/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184086
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0];
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((var_18) >= (var_18))) ? (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) * (var_9))) : (((/* implicit */unsigned long long int) ((-879426136) / (12)))))))));
        arr_4 [10LL] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (arr_0 [15ULL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((var_2) <= (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
}
