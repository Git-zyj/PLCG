/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_10;
    var_16 = var_10;
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, var_8));
        arr_2 [2] [i_0] &= var_12;
        arr_3 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 = var_1;
            var_20 = var_4;
            var_21 = var_14;
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_1] [i_1] [i_3 - 1] = var_11;
            var_22 = var_12;
            var_23 = var_14;
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        var_24 = var_11;
                        var_25 = var_0;

                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_21 [i_1] [i_4] [i_5] [i_1] [i_7 - 1] = var_0;
                            var_26 = var_0;
                            var_27 = var_12;
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = var_10;
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        arr_25 [i_8] = var_9;
        var_28 = var_3;
    }
    #pragma endscop
}
