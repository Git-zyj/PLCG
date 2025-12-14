/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101429
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) ((var_1) ^ (((/* implicit */int) var_6)))))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (max((8388607), (((/* implicit */int) (short)-32758))))))))))));
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (((((/* implicit */_Bool) 4272750254U)) ? (var_10) : (((/* implicit */unsigned int) 8388600))))));
    var_17 &= var_10;
}
