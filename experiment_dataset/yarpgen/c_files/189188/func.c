/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189188
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_10))));
    var_17 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (2147483647)))) && (((/* implicit */_Bool) 4194303ULL))))));
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) min((((/* implicit */short) var_10)), (var_8)))))));
    var_19 |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_13)))))));
    var_20 = ((/* implicit */unsigned short) var_11);
}
