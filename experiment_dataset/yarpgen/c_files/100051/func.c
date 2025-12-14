/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100051
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
    var_18 |= ((/* implicit */int) (-9223372036854775807LL - 1LL));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-2147483647 - 1))), ((+(arr_3 [i_0])))));
        arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) (+(((/* implicit */int) arr_0 [i_0])))))), (var_8)));
    }
}
