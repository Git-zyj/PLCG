/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162967
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (arr_2 [i_0] [i_0])))) || (((/* implicit */_Bool) (short)-32756)))))) - (min((((/* implicit */unsigned int) (_Bool)1)), (3941420536U)))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4149296541U))));
}
