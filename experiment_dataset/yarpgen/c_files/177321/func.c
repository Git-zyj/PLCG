/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177321
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
    var_15 &= ((/* implicit */signed char) min((((/* implicit */unsigned short) var_10)), ((unsigned short)65532)));
    var_16 = (~((~(max((((/* implicit */int) var_8)), (var_1))))));
    var_17 = ((/* implicit */int) var_2);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65531)) == (var_4)))), (var_10)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((2147483647) | (((/* implicit */int) (unsigned short)12))))) == (max((((/* implicit */unsigned long long int) var_0)), (var_7))))))));
}
