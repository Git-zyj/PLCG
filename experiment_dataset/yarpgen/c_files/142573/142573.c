/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, var_0));
                            var_15 *= var_11;
                            var_16 = (max(((((var_3 | var_8) < var_8))), (min((max(var_7, var_10)), (((var_11 >> (var_11 - 2734281881))))))));
                            var_17 -= ((+((((~var_10) <= var_12)))));
                        }
                    }
                }
                var_18 -= var_2;
                arr_12 [i_1] = -20758596;
                arr_13 [i_1] = (~var_2);
            }
        }
    }
    var_19 = var_2;
    var_20 = (max(var_20, (((max(var_0, var_5))))));

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = var_0;
        arr_17 [i_4] = (var_8 == var_7);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_21 = (6967 - 16599367097107460747);
                    var_22 = var_0;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_30 [i_8] [i_8] = var_0;
            var_23 = (!var_2);
        }
        arr_31 [i_7] [i_7] &= var_4;
    }
    #pragma endscop
}
