/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103805
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-((~(((/* implicit */int) var_5))))))) : (max(((~(4611686018427387903LL))), (((var_9) & (var_1)))))));
    var_14 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_11)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((-(((/* implicit */int) var_3))))))));
    var_15 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 4611686018427387903LL)) ? (1898958966323781890LL) : (-4611686018427387886LL))))), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8))))))));
    var_16 = ((/* implicit */unsigned long long int) ((signed char) ((signed char) max((((/* implicit */unsigned long long int) var_5)), (var_2)))));
}
