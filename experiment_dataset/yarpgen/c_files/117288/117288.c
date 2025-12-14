/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_3] [10] [i_3] = (-16224 >= -16210);
                        arr_14 [22] [i_2] [i_2] [i_2] [i_2] [i_3] = (max((!-16224), ((368631504 ? (arr_10 [i_3] [i_3 + 3] [i_2] [i_0 + 1]) : (arr_10 [i_3] [i_3 - 1] [i_2] [i_0 + 1])))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [9] [i_1] [i_5] [i_0] [i_6] = (min((((!(arr_11 [i_1 - 1] [i_5])))), (~16245)));
                            arr_23 [i_0 - 1] [i_1 - 1] [i_5] [i_5] [i_5] [i_6] = var_14;
                        }
                    }
                }
            }
            arr_24 [i_0] = ((max(1, (max(-9223372036854775798, -9)))));
        }
        arr_25 [1] = ((62672 ? ((((((((arr_7 [i_0] [i_0]) ? 7 : (arr_0 [i_0])))) || (arr_17 [i_0]))))) : (max(-10743, 1622519353))));
        var_17 = (((max(89, var_14))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_18 = -7459700261112153594;
        arr_28 [i_7] = ((-(arr_17 [i_7])));
        var_19 = (min(var_19, (1 % 1474)));
        arr_29 [i_7] = (1 / 255);
    }
    var_20 = (min(var_20, 24));
    var_21 = ((0 ? -1 : 239));
    var_22 = (min(var_22, (!var_13)));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            {
                arr_35 [i_9] = -9223372036854775804;
                var_23 = (max(var_23, (((max(0, 1)) ? -0 : 46592))));
                var_24 = (max(var_24, (arr_26 [10] [10])));
            }
        }
    }
    #pragma endscop
}
