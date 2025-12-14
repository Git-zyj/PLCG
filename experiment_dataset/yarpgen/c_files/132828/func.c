/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132828
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
    var_13 = ((/* implicit */signed char) min((0), (((/* implicit */int) var_8))));
    var_14 += min((min((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) (signed char)0)), (var_2))))), (var_10));
    var_15 |= (signed char)-9;
    var_16 &= ((/* implicit */signed char) var_7);
}
