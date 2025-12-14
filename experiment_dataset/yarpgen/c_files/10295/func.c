/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10295
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
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) ? (max((-9223372036854775798LL), (((/* implicit */long long int) (unsigned short)4096)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_9))))))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (min((((/* implicit */long long int) var_5)), (var_7)))))));
    var_13 ^= min(((unsigned short)32166), ((unsigned short)49230));
    var_14 = ((/* implicit */unsigned char) var_0);
}
