/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147062
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
    var_16 = ((/* implicit */_Bool) var_11);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) ((var_5) | (var_6)))) : (((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) (!(var_2))))));
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_13)), (var_5)))))), (var_14)));
    var_19 = ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) var_10)))) : (((var_13) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))))) - (((var_10) ? (((/* implicit */int) min(((signed char)-107), (((/* implicit */signed char) var_2))))) : (((var_7) ? (var_5) : (((/* implicit */int) var_12)))))));
    var_20 |= max((((((/* implicit */_Bool) ((11850837667046836683ULL) % (var_0)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (1197120996) : (-1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) 1197120994))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(var_2))))))));
}
