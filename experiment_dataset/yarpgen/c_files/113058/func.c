/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113058
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
    var_16 = ((var_15) & (var_4));
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)128)), (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)238)) < (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_4)) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    var_18 ^= ((/* implicit */_Bool) max(((+(var_6))), (var_15)));
    var_19 &= ((/* implicit */unsigned int) var_4);
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (!(((/* implicit */_Bool) 5191454059342552659ULL)))))))) & (((min((var_1), (((/* implicit */unsigned long long int) (unsigned char)1)))) & (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */int) var_13)))))))));
}
