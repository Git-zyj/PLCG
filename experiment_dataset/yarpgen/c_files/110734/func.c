/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110734
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) arr_2 [i_0 + 1]);
        var_21 = (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (0U))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((9223372036854775807LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_13))))) ? (var_12) : (((/* implicit */unsigned int) var_3))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4000107047U)))))));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_18))));
}
