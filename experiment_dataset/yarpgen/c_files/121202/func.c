/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121202
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
    var_14 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        arr_3 [i_0] [(short)8] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4)));
        arr_4 [2LL] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1]);
        arr_10 [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))));
    }
    var_15 = ((/* implicit */int) var_3);
}
