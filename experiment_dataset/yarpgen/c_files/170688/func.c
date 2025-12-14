/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170688
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
    var_14 ^= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (var_6) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))))));
    var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (var_6) : (min((((/* implicit */unsigned int) var_11)), (var_9))))), (var_9)));
    var_16 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1876494960U)))), (((((/* implicit */long long int) ((int) (unsigned short)19486))) ^ (max((-5276018705456770053LL), (((/* implicit */long long int) (unsigned short)11996)))))));
}
