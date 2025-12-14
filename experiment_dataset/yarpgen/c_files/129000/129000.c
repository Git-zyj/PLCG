/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 -= var_8;
                    arr_7 [i_0] [i_1] [i_2] = ((((min((!268435452), (min(18446744073441116162, 18446744073441116184))))) ? (arr_3 [i_2 - 2] [i_1 + 1]) : (((arr_0 [i_1 - 1] [i_1 + 1]) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 + 3])))));
                    var_13 = (((min(-var_0, (268435431 | var_4))) <= (arr_6 [i_2] [i_1] [i_2])));
                }
            }
        }
    }
    var_14 = 268435452;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_3] &= (max((max(((((arr_10 [17]) || (arr_8 [i_3])))), (arr_13 [i_5 - 2] [i_5 + 1] [i_5 - 1]))), 268435452));
                    arr_17 [i_5] [i_5] [i_3] [i_3] = (min(((((268435431 ? 40855 : var_9)) ^ (var_9 < var_2))), (arr_12 [i_3])));
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
