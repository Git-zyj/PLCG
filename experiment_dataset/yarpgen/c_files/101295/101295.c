/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 ^= (8242791822094989731 & -2329373348167809335);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0] = ((var_5 + 2147483647) >> (8101598237703901535 - 8101598237703901517));
                        var_13 *= 2329373348167809334;
                        arr_12 [i_0] [i_2] [i_1] [i_0] = var_9;
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((604184260 ? 8101598237703901520 : var_3));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_14 = (max(var_14, (((10986177912652938499 ? var_10 : var_1)))));
                        var_15 = (!7014028594875227188);
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((2329373348167809359 ? 255 : 2329373348167809343));
                        var_16 += -14644;
                    }
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        var_17 |= (var_9 / var_1);
                        var_18 ^= (var_11 + var_10);
                        var_19 = (var_7 / var_5);
                        var_20 = (max(var_20, (-32767 - 1)));
                        arr_20 [i_0] [i_2] [i_2] [i_0] [i_2] [i_5] = (-2329373348167809335 == 0);
                    }
                    var_21 = ((2329373348167809339 ? var_7 : var_1));
                    arr_21 [i_0] = 226;
                }
            }
        }
        var_22 = (max(var_22, (2329373348167809334 - var_5)));
    }
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        var_23 = 0;
        var_24 *= (((min(var_6, 511)) & var_8));
    }
    var_25 = (max(var_5, var_10));
    #pragma endscop
}
