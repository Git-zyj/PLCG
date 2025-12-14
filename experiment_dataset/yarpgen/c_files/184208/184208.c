/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, 28661));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_15 = -3098743325317580401;
                                var_16 = (min(var_16, 3098743325317580401));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_17 -= 3098743325317580395;
                                arr_15 [i_0] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 1] [i_1] = 1;
                                var_18 = (min(var_18, 1));
                                arr_16 [i_0] [i_3] [i_2] [i_1 + 1] [i_1] [i_0] = 15984155489163965547;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                var_19 *= 0;
                                arr_19 [i_0] [i_0] = -80;
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1)
                            {
                                var_20 = 0;
                                arr_22 [i_0] [i_0] [i_3] = 251;
                                arr_23 [i_0] [i_1 - 1] [i_7 - 1] [i_3] [i_0 - 3] = 0;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        {

                            for (int i_10 = 0; i_10 < 20;i_10 += 1)
                            {
                                arr_33 [i_10] [i_9] [i_8] [i_0] [i_1 + 1] [i_0] [i_0 + 1] = 1;
                                arr_34 [i_0] [i_0] [i_1] [i_1] [i_8] [i_9] [i_10] = 0;
                                arr_35 [i_0] [i_8] [i_8] [i_9] [i_8] |= 1;
                                arr_36 [i_0] [i_0] = 56;
                                arr_37 [i_0] [5] [i_0] = 52;
                            }
                            var_21 -= 45218;
                            var_22 -= 0;
                        }
                    }
                }
                var_23 = -5113581996697031913;
                var_24 = 1;
            }
        }
    }
    var_25 = (min(var_25, var_7));
    var_26 = (max(var_26, var_2));
    #pragma endscop
}
