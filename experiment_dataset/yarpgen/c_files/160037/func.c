/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160037
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_5))));
    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((int) var_10)) < (((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_13))))))))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_0)) : (var_3)))));
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) var_9)), (var_2))))))));
}
