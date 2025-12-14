/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124077
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
    var_14 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (max((103231734U), (((/* implicit */unsigned int) (unsigned short)65514)))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)15), (((/* implicit */unsigned short) (_Bool)1)))))))), (min((var_0), (((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned char) (_Bool)1)))))))));
    var_15 = ((/* implicit */unsigned char) (~(((int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_8)))))));
}
