/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (max(0, ((((-1753153255 ? 33347 : 0))))))));
        var_21 &= (arr_2 [0]);
        var_22 = -var_4;
        arr_3 [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_23 = (arr_2 [10]);
        var_24 = (max(var_24, (46 || -6860)));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_25 = (((!1753153260) < (arr_7 [i_3 + 1])));
                    arr_14 [i_4] [18] = (min((min(1753153244, 1942409800)), (~-1753153262)));
                    var_26 = ((~(arr_13 [i_3 + 4] [i_3 + 4] [i_2 - 1] [i_2 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
