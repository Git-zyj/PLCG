/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109819
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
    var_16 = ((/* implicit */short) (~((-(((/* implicit */int) ((unsigned short) var_10)))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (max((var_8), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))) << (((min((((/* implicit */unsigned long long int) max((var_8), (var_8)))), ((~(var_4))))) - (2303381384597387122ULL))))))));
}
