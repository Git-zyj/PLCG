/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148120
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
    var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 0LL)) : (var_2))) : (((/* implicit */unsigned long long int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned int) (~(min((arr_1 [3ULL]), (((/* implicit */unsigned long long int) ((-2LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-19435))))))))));
        var_15 = (~(var_1));
    }
    var_16 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18LL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-4545))))) : (((((/* implicit */_Bool) (short)-25274)) ? (((/* implicit */unsigned int) var_13)) : (var_5))))) * (var_5)));
    var_17 = var_1;
}
