/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109278
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
    var_14 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)3893)) ? (((/* implicit */int) (unsigned short)3896)) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_2 [i_0]))));
        arr_5 [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))));
    }
}
