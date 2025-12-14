/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_10 -= (((arr_7 [i_2] [i_3]) ? (((!((((arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) ? var_1 : var_1)))))) : ((((arr_7 [i_1 - 1] [i_0]) < (((-19761 ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]) : -19761))))))));
                                var_11 = (min(var_11, -19787));
                                var_12 = (max(var_12, ((min((((arr_1 [i_1 - 1] [i_2]) ? 445368291366810925 : 68)), ((((arr_1 [i_1 + 1] [i_0]) <= (arr_1 [i_1 + 1] [i_1])))))))));
                            }
                        }
                    }
                    var_13 -= ((188 ? ((19321 + (arr_13 [i_1] [i_2] [i_2] [i_2] [i_1 + 2] [i_1]))) : ((((35 ? -1654020984799548807 : var_8))))));
                    arr_14 [i_0] &= -19761;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_14 &= ((((max((arr_26 [i_5] [i_5] [i_7] [i_8] [i_8] [i_9]), (arr_26 [i_5] [i_5] [i_7] [i_8] [i_9] [i_5])))) ? (arr_26 [i_5] [i_6 + 2] [i_7] [i_8] [i_9] [i_9]) : (((arr_26 [i_9] [i_8] [i_7] [i_7] [i_6] [i_5]) | (arr_26 [i_5] [i_5] [18] [9] [i_8] [18])))));
                                var_15 ^= var_4;
                            }
                        }
                    }
                    var_16 &= ((((((3477 < 1120751215) + 1071666521637484068))) ? var_1 : -var_3));
                }
            }
        }
    }
    #pragma endscop
}
