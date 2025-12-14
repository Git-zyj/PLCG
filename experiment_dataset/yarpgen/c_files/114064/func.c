/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114064
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
    var_19 = max((2U), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))));
    var_20 = ((/* implicit */signed char) ((((max((var_15), (((/* implicit */unsigned int) var_3)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (var_17))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_18))))) >= (min((((/* implicit */unsigned int) var_8)), (7U)))))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_15))));
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_17)), (((unsigned short) var_17))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((110455269U), (((/* implicit */unsigned int) max(((unsigned short)65018), (((/* implicit */unsigned short) (signed char)-4)))))))) ? (((/* implicit */int) (unsigned short)20865)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) (~(var_8)))))))));
}
