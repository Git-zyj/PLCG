/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116046
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) % (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_15 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = (short)9481;
        var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [8U]))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_1 - 1]))));
    }
    var_18 = ((/* implicit */short) var_2);
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_3))));
}
