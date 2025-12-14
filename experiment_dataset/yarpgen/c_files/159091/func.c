/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159091
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
    var_13 = ((/* implicit */unsigned short) var_7);
    var_14 = ((/* implicit */long long int) max((var_14), (((var_7) % (((/* implicit */long long int) (~(min((1503592343), (((/* implicit */int) (unsigned short)65408)))))))))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned short) 576460752303423488ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (var_5))))))));
}
