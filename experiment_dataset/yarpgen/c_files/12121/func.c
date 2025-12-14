/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12121
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
    var_16 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32752))));
    var_17 ^= ((/* implicit */signed char) min((((/* implicit */unsigned char) var_11)), (((unsigned char) (+(((/* implicit */int) var_11)))))));
    var_18 += ((/* implicit */short) max((((((/* implicit */_Bool) max((var_12), (var_8)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-32739)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)-26730), (((/* implicit */short) var_3))))) * ((+(((/* implicit */int) var_1)))))))));
    var_19 &= 16929413517921139942ULL;
}
