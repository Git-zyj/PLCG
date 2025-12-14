/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10037
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
    var_16 = ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) var_14))))));
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((unsigned char)157), ((unsigned char)157)))), (max((((/* implicit */unsigned int) (unsigned char)117)), (var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : ((~(var_15)))))) : (min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_4))))))));
}
