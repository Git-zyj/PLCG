/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (((!8042581235856776099) % (max((arr_3 [i_0 - 3] [i_0]), 3975316840))));
                                var_15 = var_5;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = (!100335040);
                            var_17 = (arr_15 [i_0 + 3] [i_0] [i_5] [i_6]);
                            var_18 = (max(var_18, ((min((min((13718 ^ 121), (~13718))), var_9)))));
                            var_19 = var_13;
                        }
                    }
                }
                arr_18 [i_0] [i_1] = (max(((!(((4446859746559057232 ? var_12 : var_12))))), ((!(arr_4 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    var_20 = (min((3975316828 != 281474976702464), 319650467));
                    var_21 = (((((((((7351760027955444819 ? var_4 : 1235625444))) || 1)))) ^ -3975316828));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_22 = var_2;
                                var_23 = ((11094984045754106796 ? 7351760027955444820 : (((319650468 + 7383168068555914229) << 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min((!var_1), 2224814296));
    var_25 = ((+(min((var_2 + 0), (((var_0 ? 616603406044969396 : var_3)))))));
    #pragma endscop
}
