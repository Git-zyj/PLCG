/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110318
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_12 = ((/* implicit */short) (unsigned char)180);
        var_13 &= ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 6; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) arr_4 [i_1] [i_1]);
        var_15 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(arr_3 [(unsigned short)2])))) : (((arr_3 [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)180)))));
    }
    var_16 = ((/* implicit */short) ((unsigned int) var_7));
}
