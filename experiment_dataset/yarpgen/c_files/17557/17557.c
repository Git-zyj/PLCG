/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (max(var_11, var_6));
                var_12 += (min((min(((max(var_10, var_2))), (max(var_7, var_4)))), (!var_8)));
                arr_6 [i_1] = ((!(!var_9)));
                var_13 = max((min(var_5, var_6)), ((max(var_8, var_10))));

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_14 *= ((max(8647152525442705331, -1885495901)));
                    var_15 = (min((min(((max(var_0, var_0))), (max(var_4, var_6)))), (((min(-1885495901, 2759420549535114571))))));
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_16 = (max(-4955, (max(var_1, (~var_7)))));
                    arr_13 [1] [i_1] [i_3] [0] = (~var_4);
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_4] [i_1] [8] = 3631477249;
                    var_17 = ((~(max(var_2, (~var_3)))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        arr_20 [i_5] [i_4] [i_4] [i_0] = (~var_7);
                        var_18 = (~var_8);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_4] [i_4] [i_7] = (min((!var_5), var_4));
                                var_19 = (max(var_19, ((max((!2759420549535114571), (!var_4))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_32 [i_0] [i_1] [i_4] [i_9] = max(((max(1885495901, 1885495919))), 3536977702112147556);
                                var_20 = min(var_0, ((max(var_10, var_1))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_21 = var_8;
                    arr_35 [i_0] [i_0] [i_10] [i_0] = var_0;
                }
            }
        }
    }
    var_22 += var_6;
    var_23 = var_9;
    var_24 += var_0;
    #pragma endscop
}
