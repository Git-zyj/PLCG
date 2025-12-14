/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153626
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
        var_20 &= var_8;
        arr_3 [(signed char)15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (signed char)127)) & (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_21 &= ((/* implicit */int) var_3);
    }
    var_22 &= var_6;
}
