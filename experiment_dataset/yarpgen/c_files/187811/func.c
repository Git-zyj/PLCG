/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187811
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
    var_13 = ((/* implicit */unsigned short) min(((-(var_10))), (((/* implicit */int) (unsigned short)65534))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)65534))))));
    var_15 = 18446744073709551615ULL;
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (min((2554149807098834483ULL), (((/* implicit */unsigned long long int) 1413176065U))))))) % (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_10)))) ? (((/* implicit */int) ((unsigned short) 9))) : (((/* implicit */int) ((signed char) var_11)))))));
}
