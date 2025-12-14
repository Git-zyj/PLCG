/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140912
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
    var_10 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_4 [(short)8] &= ((/* implicit */short) (~(((((/* implicit */int) arr_3 [(signed char)4] [i_0 - 1])) & (((/* implicit */int) arr_3 [10ULL] [i_0 - 1]))))));
        var_11 = ((/* implicit */short) var_8);
        var_12 &= ((/* implicit */_Bool) ((3715719170U) - (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    }
    var_13 -= var_4;
}
