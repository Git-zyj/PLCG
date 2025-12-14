/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123468
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
    var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) || (((/* implicit */_Bool) var_18))));
    var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (signed char)107))))) ? (((/* implicit */unsigned long long int) (~(var_3)))) : (((((/* implicit */_Bool) var_6)) ? (5304378369687254930ULL) : (var_6))))))));
    var_22 = max((((/* implicit */unsigned long long int) (unsigned short)10981)), (min((((/* implicit */unsigned long long int) (signed char)127)), (var_6))));
}
