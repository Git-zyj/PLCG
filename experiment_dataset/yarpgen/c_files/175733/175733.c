/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max(9220290685099138849, ((min(((0 ? 42078 : 1)), 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [1] = 80;
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (min(((max((((arr_2 [i_2]) ? 42078 : (arr_7 [i_0]))), var_13))), (4294967295 ^ 11701280807488259334)));
                    arr_10 [i_0] [i_0] = ((((((((1 ? 13 : 42))) ? (((18446744073709551615 ? 119 : 76))) : (min(6147, 15002791810814666636))))) ? 6 : (max((~65535), ((-274612011 ? 39272 : 37))))));
                    var_16 = ((((min((arr_1 [i_0] [i_1]), 127))) ? ((((arr_6 [i_2] [i_2] [i_2]) ? 1 : (arr_5 [i_0] [i_1])))) : ((-274612011 ? 6745463266221292281 : 0))));
                }
            }
        }
    }
    var_17 = (max(var_0, ((((!-39) / var_13)))));
    var_18 = (min(var_7, (max(var_6, var_14))));
    #pragma endscop
}
