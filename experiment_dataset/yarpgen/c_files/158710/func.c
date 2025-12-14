/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158710
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = (unsigned short)56789;
    }
    var_16 = ((/* implicit */short) var_6);
}
