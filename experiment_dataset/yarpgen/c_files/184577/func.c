/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184577
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
    var_17 *= ((/* implicit */short) var_1);
    var_18 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8192))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((-4039755352690565666LL) | (-4039755352690565666LL))) >= (((-4039755352690565666LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-51)))))));
    }
}
