/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168319
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
    var_13 = ((/* implicit */unsigned long long int) ((long long int) max((max(((unsigned short)24000), ((unsigned short)65518))), (var_6))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) max((var_4), (((/* implicit */short) var_10)))))))) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_12)))))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((var_3), (((/* implicit */long long int) var_12)))))));
}
