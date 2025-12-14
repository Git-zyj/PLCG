/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175541
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_4))), ((+(((/* implicit */int) (unsigned char)1))))))) || (((/* implicit */_Bool) (+(var_1))))));
    var_13 = min((((/* implicit */int) var_6)), ((-(((/* implicit */int) min(((unsigned char)245), (((/* implicit */unsigned char) var_5))))))));
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
    var_15 = ((/* implicit */_Bool) min((var_15), (var_9)));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((~(max((((/* implicit */long long int) var_3)), (var_11))))) & (((var_11) | ((~(var_2))))))))));
}
