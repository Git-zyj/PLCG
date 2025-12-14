/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12718
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((((arr_0 [i_0]) & (arr_0 [i_0]))) & ((+(arr_0 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_3 [i_0]))))));
    }
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned short)65525))));
}
