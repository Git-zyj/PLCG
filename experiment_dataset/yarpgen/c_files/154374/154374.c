/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((arr_4 [i_0 + 2]) ? var_14 : (((((arr_5 [i_0] [i_0] [i_1]) ? -4 : var_1)) << (((arr_1 [i_0 - 1] [i_0 - 3]) - 1485457548))))));
                arr_8 [i_0] [i_1] = ((!((max(((~(arr_0 [i_0]))), 0)))));
                var_16 += ((!((max((arr_6 [0] [i_0]), var_5)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_12 [7] = (var_14 && (~var_1));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    arr_20 [i_3] [i_4] [14] [i_3] = (max(4294967295, 1240878878));
                    arr_21 [i_2] [i_3] [i_3] = (~16862);
                }
            }
        }
    }
    #pragma endscop
}
