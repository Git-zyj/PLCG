/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155582
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
    var_17 |= ((/* implicit */unsigned long long int) ((max((var_12), (((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_0), (((/* implicit */short) var_16))))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_11)))))))));
    var_18 = ((/* implicit */unsigned int) var_5);
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_7)))) ? (var_13) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-19739)))))) - (min((9223372036854775805LL), (7897599357314320055LL))))))));
}
