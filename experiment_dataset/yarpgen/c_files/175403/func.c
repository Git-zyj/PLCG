/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175403
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 = max((min((((/* implicit */long long int) var_15)), (max((-3404917760313138179LL), (((/* implicit */long long int) arr_0 [i_0] [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) ((unsigned char) var_12)))))));
        var_19 = ((/* implicit */short) ((_Bool) ((_Bool) (~(((/* implicit */int) var_7))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)37286)) > (((/* implicit */int) (unsigned short)32767)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((4503599627369984LL) > (((/* implicit */long long int) var_12))))), ((-(6313384804314953574LL))))), (((min((((/* implicit */long long int) (signed char)0)), (var_10))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)8064)) : (((/* implicit */int) (short)-8084)))))))));
}
