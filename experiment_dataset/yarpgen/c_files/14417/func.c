/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14417
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */int) var_0)), (((((/* implicit */int) (short)32767)) + (((/* implicit */int) var_6))))));
    var_11 = (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30290))) & (var_5))) ^ (max((var_5), (var_7))))));
}
