/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177154
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_4))));
    var_12 = ((short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((var_0) & (((/* implicit */long long int) ((/* implicit */int) (short)-32758)))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)-1))))))) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (var_0) : (var_0)))), (((((/* implicit */_Bool) var_4)) ? (783384947652759878ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24)))))))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((min((var_10), (((/* implicit */long long int) max(((signed char)-9), ((signed char)(-127 - 1))))))) * (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (560982461)))))))));
}
