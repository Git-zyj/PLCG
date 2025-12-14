/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111728
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1))));
    var_20 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (unsigned short)19209)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_16)))))), (var_15)));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((576460752269869056LL), (((/* implicit */long long int) (short)-32760)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)60437)))))))) && (((/* implicit */_Bool) max(((-(var_15))), (max((var_11), (((/* implicit */int) var_16)))))))));
}
