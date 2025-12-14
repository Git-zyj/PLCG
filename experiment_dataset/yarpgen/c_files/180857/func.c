/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180857
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
    var_11 = ((/* implicit */unsigned char) ((((max((var_0), (var_10))) + (2147483647))) << (((((/* implicit */int) var_1)) - (12)))));
    var_12 = ((/* implicit */unsigned char) var_9);
    var_13 = ((/* implicit */short) ((((((/* implicit */int) var_1)) / (max((((/* implicit */int) var_9)), (var_10))))) / ((~(((/* implicit */int) (signed char)0))))));
    var_14 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_9)))))) == (((/* implicit */int) ((var_8) == (min((((/* implicit */int) (unsigned short)3946)), (var_8))))))));
}
