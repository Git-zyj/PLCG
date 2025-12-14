/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179207
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
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [0LL] [9] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            }
        } 
    } 
    var_17 = var_11;
}
