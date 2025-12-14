/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148941
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
    var_14 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)12822)) ? (((/* implicit */int) (short)-21620)) : (((/* implicit */int) (short)12821))));
        var_15 = ((/* implicit */unsigned short) ((_Bool) var_9));
        var_16 ^= ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */long long int) var_4)) / (3164557334438219103LL))) : (var_11));
    }
}
