/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125836
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
    var_15 = var_6;
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)127), ((signed char)70)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_7))))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= ((-(((/* implicit */int) var_11))))))) : (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_7)))), (((((/* implicit */int) (unsigned short)16383)) % (((/* implicit */int) (signed char)109))))))));
}
