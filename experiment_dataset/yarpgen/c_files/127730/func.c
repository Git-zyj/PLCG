/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127730
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
    var_16 = ((/* implicit */_Bool) var_2);
    var_17 = ((/* implicit */signed char) ((unsigned char) (+(min((var_4), (((/* implicit */unsigned long long int) (_Bool)0)))))));
    var_18 = ((/* implicit */unsigned int) var_9);
    var_19 = ((/* implicit */unsigned int) min((((long long int) var_2)), (((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (var_14)))))));
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)49444)) - (((/* implicit */int) max(((unsigned short)16091), ((unsigned short)25677)))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
}
