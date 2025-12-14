/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115834
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
    var_17 |= min((var_14), (var_15));
    var_18 += ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17)));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (min((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_12))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_0))))))));
    var_20 = ((/* implicit */unsigned int) max(((unsigned short)65535), ((unsigned short)15)));
}
