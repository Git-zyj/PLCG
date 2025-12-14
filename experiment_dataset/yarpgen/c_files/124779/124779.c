/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 += ((~(max((max(1, var_15)), ((max(1, 6819830133812145733)))))));
    var_22 = (min(((((min(1, var_8))))), ((var_5 ? ((var_13 ? var_4 : var_18)) : (2613983047936875018 | var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_23 = (arr_2 [i_0 - 3] [i_0 - 2] [i_1]);
                    arr_6 [i_2] [i_1] [i_2] |= (arr_0 [i_0 - 3]);
                }
            }
        }
    }
    #pragma endscop
}
