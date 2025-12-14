/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113640
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
    var_11 = ((/* implicit */int) var_6);
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) != (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_7))))))));
    var_13 = ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1U))) % ((+(var_10))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_7), (var_7)))) : (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_3)))))))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_10))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_4))));
}
