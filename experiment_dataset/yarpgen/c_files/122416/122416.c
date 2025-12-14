/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_18 |= (((((10787054466575168824 ? 3554367982 : ((422570174 ? 8847619502425322236 : 255))))) ? -21471 : (((((6030058406596807541 ? -22657 : 13934702307965385844))) ? 33554430 : 133))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((~(!0))))));
                                var_20 -= (((((arr_2 [i_0 - 4] [i_0] [i_0 - 3]) / (arr_6 [i_0] [i_0 - 2] [i_2 + 2] [i_3 - 2] [16])))) ? ((-1754301231567420283 ? 9599124571284229380 : 1)) : ((min(var_6, ((var_10 ? var_4 : -15479))))));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (~4294967295)));
                arr_10 [i_0] [i_1 - 1] = (arr_0 [i_0] [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_14 [i_5 + 2] = (arr_11 [i_5 - 1] [i_5 + 1]);
        var_22 = ((var_14 || (arr_11 [i_5] [i_5 + 2])));
        arr_15 [i_5 + 2] [i_5 + 2] = (~1137552961);
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = ((~(min((((255 ? (arr_12 [i_6 + 2]) : 29))), (~var_0)))));
        var_23 = (arr_12 [i_6 + 1]);
    }
    #pragma endscop
}
