/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135518
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
    var_15 &= ((/* implicit */unsigned short) min(((+((~(var_8))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((signed char)54), (((/* implicit */signed char) ((((/* implicit */_Bool) -1662136445)) && (((/* implicit */_Bool) (unsigned short)65516))))))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((var_11) % (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (min((((/* implicit */int) (short)26279)), (-1662136445)))))))))));
}
