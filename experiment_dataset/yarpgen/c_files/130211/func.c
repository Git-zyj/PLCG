/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130211
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
    var_11 &= ((/* implicit */short) (~(-1360536921)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) 0U);
    }
}
