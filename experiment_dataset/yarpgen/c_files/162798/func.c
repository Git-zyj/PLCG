/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162798
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((min((((/* implicit */int) var_1)), (var_3))) & (((/* implicit */int) min((var_9), ((short)4095)))))) == (((/* implicit */int) min(((unsigned short)41686), (((/* implicit */unsigned short) (short)-4081))))))))));
    var_11 = ((/* implicit */int) ((max((((((/* implicit */int) (unsigned short)3968)) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) min((var_2), ((unsigned short)0)))))) != (max((max((((/* implicit */int) var_1)), (var_4))), (min((-1507884055), (((/* implicit */int) (short)-4104))))))));
}
