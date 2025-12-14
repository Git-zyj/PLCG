/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182673
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
    var_15 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(var_10)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (var_14))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    var_16 = ((/* implicit */_Bool) var_13);
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 15491982891162490736ULL))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_12)) ? (-2147483646) : (2147483646))))) / (((unsigned long long int) ((((/* implicit */int) (short)16383)) >> (((/* implicit */int) (_Bool)1))))))))));
    var_19 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) min((-2147483647), (((/* implicit */int) var_11))))), (var_14))))));
}
