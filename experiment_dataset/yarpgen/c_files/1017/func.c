/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1017
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
    var_16 += ((/* implicit */signed char) max((var_2), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))))));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) var_1)), (((var_5) ? (((var_15) * (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) (unsigned char)1))))))));
    var_18 = max((((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (signed char)-40)) : ((+(((/* implicit */int) (signed char)-26)))))), ((-(((/* implicit */int) max(((signed char)-124), (var_11)))))));
}
