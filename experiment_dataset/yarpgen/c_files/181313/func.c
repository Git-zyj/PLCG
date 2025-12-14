/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181313
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
    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0]));
        var_16 = (+(var_1));
    }
    for (short i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) var_7);
        var_18 = ((/* implicit */_Bool) arr_2 [i_1]);
    }
    var_19 = ((/* implicit */unsigned long long int) (~(((var_4) & ((~(var_10)))))));
}
