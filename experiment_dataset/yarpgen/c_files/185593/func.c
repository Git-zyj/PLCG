/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185593
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
        var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [10] |= ((/* implicit */_Bool) ((arr_0 [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_1 [6U])) : (((/* implicit */int) arr_2 [i_0 - 1]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_12 |= ((/* implicit */long long int) arr_6 [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (var_5)));
        var_13 = ((/* implicit */unsigned char) 2147483647);
    }
    var_14 ^= ((/* implicit */long long int) (((_Bool)1) ? (var_6) : (((/* implicit */int) (_Bool)1))));
}
