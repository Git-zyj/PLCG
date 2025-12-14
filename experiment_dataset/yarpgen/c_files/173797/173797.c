/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (min(2011078118764912834, var_10))));
                arr_5 [11] [11] [i_1] = 2147483647;
                var_16 = ((~(((arr_3 [i_1]) ? (arr_3 [i_0]) : 11507655804233307674))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = var_6;
                            var_17 += var_10;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    arr_18 [i_4] = (((min(var_9, 33))) ? (max((max(var_2, 12090219860847756985)), -3315499468560114002)) : -3098165039452185351);
                    arr_19 [i_4] [i_5 - 2] [i_4] [i_6 + 1] = (arr_15 [i_4] [i_6 - 2] [i_5]);
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_25 [i_4] [i_5] [i_6] [i_7] [i_8] = (min(19083, (15131244605149437614 && var_5)));
                                var_18 = (arr_22 [i_4] [i_5 + 1] [i_6] [i_7] [i_8] [i_6 - 1] [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_19 = (min(508, (-2147483647 - 1)));
                                arr_30 [i_4] [i_4] [i_5 - 2] [i_6 - 1] [i_9] [i_9] [i_10 - 1] = (((var_2 / var_11) ? 2717191143839032712 : ((6356524212861794636 / (arr_29 [i_4] [i_5 - 2] [i_10 - 1])))));
                                arr_31 [i_9 + 1] [i_5] [i_9 - 1] [13] [i_9] = ((((((2147483647 ? var_9 : 7238851591138634794) < -16945)))));
                                var_20 *= 33;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
