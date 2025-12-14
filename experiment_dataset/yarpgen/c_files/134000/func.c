/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134000
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(25U))))));
    var_14 &= (-(var_0));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_1)) - (var_9)));
        var_16 -= ((/* implicit */long long int) var_10);
        var_17 &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) ((short) (short)-9071))) | ((-(((/* implicit */int) var_7)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((long long int) (+(0LL)))))));
    }
}
