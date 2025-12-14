/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137359
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (4294967295U)));
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) max((var_6), (((/* implicit */long long int) var_8)))))) % (((((((/* implicit */int) var_0)) + (2147483647))) >> (((((((/* implicit */int) (short)4408)) | (((/* implicit */int) var_0)))) + (24)))))));
    var_12 += ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned short)18)) * (((/* implicit */int) var_2)))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
    var_13 += ((/* implicit */short) max((((/* implicit */long long int) var_9)), (var_6)));
}
