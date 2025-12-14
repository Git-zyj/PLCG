/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15185
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
    var_19 ^= ((/* implicit */unsigned short) (signed char)112);
    var_20 -= ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) min(((unsigned short)16383), (((/* implicit */unsigned short) var_16))))))));
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) -1974654045)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16382)) ? (((/* implicit */int) (unsigned char)115)) : (var_18)))), (2452594873U)))));
}
