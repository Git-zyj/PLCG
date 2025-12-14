/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122730
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
    var_20 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_9)))) ? (var_1) : (var_18)))) || (((/* implicit */_Bool) arr_2 [i_0]))));
        var_23 = ((/* implicit */short) (+((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_0 [i_1]))))))));
    }
    var_26 = ((/* implicit */short) var_19);
}
