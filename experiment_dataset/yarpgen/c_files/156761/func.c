/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156761
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
    var_13 += ((/* implicit */short) ((((/* implicit */int) max((var_1), (((/* implicit */short) var_5))))) << (((((/* implicit */int) min((var_2), (((/* implicit */short) var_5))))) + (124)))));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (min(((+(8191ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))))))))));
    var_15 ^= ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) var_3)), (var_9))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)0)) & (((/* implicit */int) min(((short)480), (var_1))))))));
}
