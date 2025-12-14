/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151694
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
    var_15 |= ((/* implicit */unsigned int) max((((/* implicit */short) var_1)), (var_4)));
    var_16 += ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)6542)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_12))))))) ? (((((((/* implicit */int) (unsigned char)81)) | (((/* implicit */int) (unsigned char)175)))) << ((((~(((/* implicit */int) (short)6542)))) + (6560))))) : (((/* implicit */int) (short)-6524))));
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) var_11)) != (((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_14))))) % (((/* implicit */int) ((short) var_6)))))));
}
