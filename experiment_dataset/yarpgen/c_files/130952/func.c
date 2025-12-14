/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130952
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
    var_19 = max((var_12), (8901362565502244364LL));
    var_20 += max((((((var_4) && (var_2))) ? (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))), (((((/* implicit */_Bool) var_10)) ? (max((-2554523128895031640LL), (var_14))) : (min((var_0), (var_9))))));
    var_21 = var_1;
    var_22 = ((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_16) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (var_12))) + ((~(((((/* implicit */_Bool) var_5)) ? (var_10) : (var_16))))));
}
