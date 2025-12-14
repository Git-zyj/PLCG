/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162363
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_11)))) + (((/* implicit */int) var_9))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)44)) / (((/* implicit */int) (unsigned char)19)))) >> (((((/* implicit */int) arr_0 [i_0])) - (156)))));
        var_17 = ((unsigned char) (unsigned char)20);
        arr_4 [i_0] = ((unsigned char) (-(((/* implicit */int) (unsigned char)236))));
    }
    var_18 = ((unsigned char) (unsigned char)35);
    var_19 &= min(((unsigned char)19), ((unsigned char)15));
}
