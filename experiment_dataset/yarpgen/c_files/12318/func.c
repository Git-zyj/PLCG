/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12318
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (max((-571994749), (1367661001))));
                arr_6 [i_0] [i_0] [i_0] = ((int) ((arr_0 [i_1]) % (arr_0 [i_0])));
            }
        } 
    } 
    var_11 -= var_2;
    var_12 = var_8;
}
