/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126050
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
    var_13 = ((/* implicit */unsigned short) (+(var_6)));
    var_14 |= ((/* implicit */signed char) ((min(((_Bool)1), (var_7))) ? ((~(max((var_6), (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((_Bool) var_12)))));
    var_15 = ((/* implicit */short) ((((((/* implicit */unsigned int) var_6)) <= (var_2))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)4)) || (((/* implicit */_Bool) (unsigned char)4))))))));
}
