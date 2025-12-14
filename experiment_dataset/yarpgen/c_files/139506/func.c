/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139506
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
    var_12 ^= ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (var_11))), (((/* implicit */unsigned int) ((unsigned char) var_9)))));
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)2))))) == (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_2))))), (((unsigned short) var_0)))))));
    var_14 ^= ((/* implicit */unsigned short) ((signed char) ((short) (signed char)(-127 - 1))));
    var_15 = ((/* implicit */_Bool) min(((short)1256), (((/* implicit */short) (unsigned char)113))));
}
