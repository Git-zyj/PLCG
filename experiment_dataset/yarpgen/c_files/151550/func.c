/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151550
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
    var_15 ^= ((/* implicit */unsigned short) var_7);
    var_16 = ((/* implicit */short) ((-5920532450653760472LL) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14088)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((-5920532450653760472LL) + (9223372036854775807LL))) >> (((-1653042262) + (1653042278))))) : (((/* implicit */long long int) var_2))))));
    var_17 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((var_2), ((-(var_2)))));
    }
}
