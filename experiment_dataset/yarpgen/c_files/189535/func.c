/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189535
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = arr_1 [i_0];
        var_12 = ((/* implicit */short) ((((var_3) & (var_1))) >> (((/* implicit */int) ((-277709065) == (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) min((var_13), (((short) ((int) -916130997)))));
        var_14 = ((/* implicit */short) ((int) arr_1 [i_1]));
    }
    var_15 = ((/* implicit */short) max((var_15), (var_9)));
}
