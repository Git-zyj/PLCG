/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15230
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
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) (+(var_3)))) * (var_10)))));
    var_17 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) var_8)) != (max((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) var_9)) + (25005))))), (((arr_1 [i_0]) >> (((var_10) - (2961187191U)))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? ((~(1124436720))) : (((/* implicit */int) ((unsigned char) var_5)))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)114)), ((short)-14303)))) : (((((/* implicit */int) ((unsigned short) var_12))) + (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_10))));
    }
}
