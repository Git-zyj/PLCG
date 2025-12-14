/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130428
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
    var_19 = ((/* implicit */unsigned short) var_3);
    var_20 ^= ((/* implicit */short) (~(((/* implicit */int) var_15))));
    var_21 = ((/* implicit */signed char) ((max((max((((/* implicit */unsigned int) (short)17719)), (4294967295U))), (((/* implicit */unsigned int) (_Bool)1)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) min((var_18), (((/* implicit */long long int) var_9)))))))))));
    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)22518)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_8)))) : ((-(((/* implicit */int) (unsigned short)65532)))))) : (((/* implicit */int) var_12))));
}
