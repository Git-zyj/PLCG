/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101409
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_0)))))), ((+(((/* implicit */int) min((var_2), (var_4))))))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((unsigned short) var_4))));
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (((((/* implicit */int) var_8)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    var_16 = var_7;
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) max((var_2), ((unsigned short)0))))) : ((-(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_8)))))))));
}
