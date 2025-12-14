/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145284
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 = ((unsigned char) arr_0 [i_0]);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = (~((+(var_1))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 1515602465U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0])))));
    }
    var_17 ^= ((/* implicit */int) var_11);
}
