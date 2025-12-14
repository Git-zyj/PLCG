/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151054
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
    var_10 = ((/* implicit */int) ((signed char) ((unsigned long long int) 4143325373U)));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ ((-(((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */_Bool) var_2);
        var_13 = ((/* implicit */int) ((_Bool) arr_1 [i_0]));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28893)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (9033915595932540787LL)));
        var_15 = ((/* implicit */short) ((arr_3 [i_1 + 3]) < (((/* implicit */int) ((((/* implicit */int) (short)-26466)) != (((/* implicit */int) var_7)))))));
        var_16 ^= ((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1]);
    }
}
