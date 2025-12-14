/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 ^= ((107 ? 3187350330197797010 : 7));

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_20 = -15;
                var_21 = (arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] = 6133;
                            var_22 = ((6124 ? 1 : -111));
                            arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] [i_2] = var_8;
                            var_23 = arr_1 [i_0] [i_0];
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_19 [i_0 + 1] [i_1 - 3] [i_0] = (((var_0 != var_15) ? var_6 : -18446744073709551615));
                var_24 = (((arr_17 [i_0] [i_1 - 3] [i_0 - 1] [i_1 - 3]) & (arr_15 [i_0 + 1] [i_1 + 1])));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_22 [15] [i_0] [i_6] = (((1 > 4194303) | 67108863));
                var_25 = (((arr_9 [i_1 - 3] [i_0] [i_0 - 1] [i_1 - 3] [i_6]) && var_10));
                var_26 = (min(var_26, (1 ^ var_11)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_0] [i_6] [i_0] [i_8] [i_8] = (arr_12 [i_0] [i_1] [i_6] [i_7] [i_8]);
                            var_27 = (((arr_27 [i_0 + 1] [i_1 - 3] [i_6] [i_7] [0]) ? var_0 : (arr_24 [i_0])));
                        }
                    }
                }
                var_28 = (min(var_28, 1));
            }
            var_29 = (min(var_29, ((((arr_7 [i_0 + 1] [i_1 - 3]) ? (arr_7 [i_0 + 1] [i_1 - 4]) : var_6)))));
            var_30 = ((!4227858447) % 6129);
        }
        arr_31 [i_0] = (((arr_1 [i_0 - 1] [i_0 - 1]) > ((((arr_16 [i_0] [i_0 + 1] [i_0 - 1] [8]) ? (arr_7 [i_0] [i_0 + 1]) : (arr_15 [i_0 - 1] [i_0]))))));
    }
    var_31 &= ((var_4 ? 1 : (var_13 / var_5)));
    var_32 = var_8;
    var_33 ^= ((var_18 ? 110 : 110));
    #pragma endscop
}
