/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (max(var_12, 17556));
    var_13 = ((var_10 ? ((((min(3203053503, var_2))) ? var_4 : var_0)) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 *= (((~5010908806779838248) ? (13435835266929713367 && 98) : 3422917488620554183));
                var_15 -= (((var_9 != -6972) - (~32767)));
            }
        }
    }
    var_16 = (var_4 | var_0);
    #pragma endscop
}
