/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100021
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), ((+(var_19)))))) && (((/* implicit */_Bool) (-(var_10))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(3212674180U))) + (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1435136829U)))))) ? (((/* implicit */long long int) (~((~(-1919991068)))))) : (var_0)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((3212674180U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = arr_1 [i_0] [i_0 - 2];
    }
}
