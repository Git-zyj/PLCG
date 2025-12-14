/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139848
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_14))));
        var_21 |= ((/* implicit */int) var_2);
        var_22 = ((signed char) (~(var_15)));
    }
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_9)))))));
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((/* implicit */int) var_8)), (min((((/* implicit */int) var_0)), ((+(((/* implicit */int) var_9)))))))))));
}
