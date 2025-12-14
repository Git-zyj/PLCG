/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_20 = (min((max((((arr_0 [i_0 + 2]) ? var_6 : (arr_0 [i_0]))), (!-2144921949))), 2144921949));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (((583880685 ? 564847955 : 0)));
                                var_22 = (~-1765494560970589587);
                                arr_13 [i_1] [i_1] [i_4] = ((+((63190 ? (arr_4 [i_0 - 1] [i_1 + 2]) : (arr_5 [i_1] [i_1 - 2] [i_3 + 2])))));
                            }
                        }
                    }
                    var_23 = (+-91109400);
                    arr_14 [i_1] = ((min(((2362026597 ? (arr_9 [i_0] [i_1] [i_2] [i_2]) : (arr_9 [i_0 - 3] [i_0 - 3] [i_2] [i_0 - 3]))), var_6)));
                }
            }
        }
    }
    var_24 = (max(var_24, var_9));
    #pragma endscop
}
