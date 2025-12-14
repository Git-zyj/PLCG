/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 -= (arr_1 [i_0]);
        var_12 = ((-2875931836655415699 ? (~var_3) : var_8));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [10] [i_0] [i_0] = (arr_9 [i_1 - 1] [i_1] [i_2]);
                        var_13 = 106;
                        var_14 = (arr_5 [i_0]);
                        var_15 = ((!((((arr_0 [i_2]) ? 3719231578 : (arr_10 [i_0] [i_0] [i_0] [i_2] [i_2]))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_16 = 57288;
        arr_17 [i_4] = (((arr_13 [i_4]) ? ((((arr_13 [i_4]) & (arr_13 [i_4])))) : (((arr_13 [i_4]) - var_8))));
    }
    var_17 = (var_3 <= var_0);
    var_18 = (min((max(((var_10 ? 6968943156888222641 : var_4)), (!-6144987111694574482))), 30));
    #pragma endscop
}
