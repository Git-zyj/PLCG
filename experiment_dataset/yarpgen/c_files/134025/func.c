/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134025
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) arr_0 [7]);
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
        var_12 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)59)))), (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (unsigned short)56795)) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)4)) : (var_3))))) : (((long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1))))));
    }
    var_13 = ((/* implicit */unsigned char) var_4);
}
