/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117301
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
    var_19 = ((/* implicit */unsigned char) ((var_16) % (var_9)));
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)32767)), (var_9))) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_21 += ((/* implicit */long long int) min((((short) var_1)), (((/* implicit */short) var_1))));
}
