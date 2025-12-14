/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14191
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
    var_14 -= ((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((-2147483647 - 1))));
    var_15 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_0)) << (((/* implicit */int) var_2))))));
    var_16 ^= ((/* implicit */unsigned int) var_8);
    var_17 &= ((/* implicit */unsigned int) ((min((((/* implicit */int) max((var_2), (var_2)))), (((int) (_Bool)1)))) == ((+((~(((/* implicit */int) var_6))))))));
}
