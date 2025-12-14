/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150358
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
    var_10 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (var_1)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (-3802935654848122791LL))) : (max((var_3), (-1088018749354934463LL))))), (((/* implicit */long long int) var_9))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_11 = max((((((/* implicit */_Bool) var_7)) ? (8361753149898186098LL) : (((/* implicit */long long int) (~(arr_1 [i_0])))))), (var_6));
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) >> (((-6708422347445905000LL) + (6708422347445905036LL))))))));
        arr_3 [i_0] = arr_0 [i_0] [i_0];
    }
}
