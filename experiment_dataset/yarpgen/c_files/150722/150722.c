/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_0));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((min((var_2 / var_0), (1 / 3623029677714440420))) * ((((var_9 / var_1) / var_10)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] = (((var_14 - var_2) - (var_1 + var_13)));
                        arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] = ((-(~var_12)));
                        arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] = ((-var_0 ? (var_0 == var_10) : (~var_13)));
                        var_16 *= ((((min(var_2, var_7))) - ((((var_8 << (var_6 - 205)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_4] [i_4] [i_6] [i_4] = (!var_12);
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_0] = (-26739 < 3840);
                            }
                        }
                    }
                    var_17 -= (((var_5 * var_9) ? -var_2 : (((var_13 ? var_13 : var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
