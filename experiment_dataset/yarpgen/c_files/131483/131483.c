/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = 12573;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = ((var_8 & (arr_3 [i_1] [i_3] [i_4 + 1])));
                                arr_14 [i_4] [i_3] [9] [i_0] [i_0] = min(((max((arr_2 [i_4 - 1]), (arr_7 [2] [i_3] [i_4])))), (max((~51), 0)));
                            }
                        }
                    }
                    var_20 = (min(var_20, (((min(((min(-2542, 0))), ((1 ? -45 : 125))))))));
                    arr_15 [1] [i_0] &= ((155 >= (min(-120, -1))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = (((((((min(var_2, var_16)) + 9223372036854775807)) >> ((((max((arr_11 [1] [1] [i_5] [i_2] [1] [i_0]), 7638))) - 7610)))) <= 22633));
                                var_22 = (min((min(((min(var_10, 30060))), (((arr_11 [4] [4] [i_2] [i_5] [i_6] [i_6]) ? 45555 : 15103778965135270842)))), -636460396665417209));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, (min((min((max(0, var_5)), (((var_10 ? -123 : var_10))))), ((~((0 ? var_16 : -9223372036854775784))))))));
    #pragma endscop
}
