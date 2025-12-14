/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18606
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
    var_16 ^= ((/* implicit */unsigned int) ((unsigned short) ((long long int) var_13)));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) (_Bool)1)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_13)))))))))));
    var_18 = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (var_3))) / (((/* implicit */int) ((_Bool) var_3))))));
    var_19 -= (+(((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */unsigned long long int) (~(var_10)))))));
    var_20 ^= var_14;
}
