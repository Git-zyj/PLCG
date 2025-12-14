/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 |= ((-((((min(var_8, 3548058613990866526))) ? (max((arr_5 [i_0] [i_1] [i_0] [i_1]), var_0)) : (((var_2 >> (9444896083229022449 - 9444896083229022420))))))));
                    var_12 = var_3;
                }
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
