/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156004
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_0] [(short)10] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)472)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (unsigned short)65075)) - (65057))))) & (arr_5 [i_1])));
                arr_8 [i_0] [i_1] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [17ULL] [i_0])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_0 - 3])) : (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))) ? (((/* implicit */int) arr_1 [(unsigned char)6] [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_7);
}
