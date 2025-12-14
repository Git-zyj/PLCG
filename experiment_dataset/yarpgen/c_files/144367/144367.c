/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -268;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((((((var_11 != 70) << (((((arr_0 [i_0]) ? var_8 : var_8)) + 4287083157553148121))))) & var_11));
                var_17 -= var_7;
                var_18 = (((((((var_1 ? var_14 : (arr_3 [i_1])))) ? (~var_0) : 0)) <= 7442));
                arr_4 [i_0] = ((min(-8, (58094 & 5875019544817699871))));
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
