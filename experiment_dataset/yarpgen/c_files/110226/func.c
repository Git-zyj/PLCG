/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110226
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
    var_20 = ((/* implicit */unsigned int) ((var_16) * (var_2)));
    var_21 |= ((/* implicit */_Bool) max((((/* implicit */short) var_15)), (var_5)));
    var_22 = ((/* implicit */short) (+(((var_17) << (((min((((/* implicit */unsigned int) var_6)), (var_8))) - (2576401491U)))))));
    var_23 = max((((/* implicit */unsigned long long int) min((min((var_17), (((/* implicit */unsigned int) (short)-21460)))), (((/* implicit */unsigned int) var_12))))), (((((/* implicit */unsigned long long int) -1)) % (16159251094058206503ULL))));
}
