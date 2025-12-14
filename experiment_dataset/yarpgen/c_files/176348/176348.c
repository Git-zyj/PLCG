/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((var_13 / (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 = (min(var_20, (((20558 % (arr_0 [i_1]))))));
            arr_6 [i_0] [i_1] = (arr_5 [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_21 = (max(var_21, ((((arr_7 [i_0] [i_0] [i_0]) >> (((~var_12) + 273)))))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_22 = (!-2147483647);
                            var_23 = (min(var_23, (((46748 | (((arr_8 [i_0]) & (arr_7 [i_0] [i_1] [i_4]))))))));
                            var_24 *= (((arr_13 [i_2] [i_3] [i_2] [i_1] [i_0]) / (arr_2 [i_3])));
                        }
                    }
                }
                var_25 *= 18787;
                var_26 = (max(var_26, ((((var_6 > var_2) == (arr_9 [i_0] [i_0]))))));
                var_27 = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_2]);
            }
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] = var_15;
                var_28 = 339694531352434296;
                arr_19 [i_1] [i_1] = var_0;
            }
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                arr_22 [i_0] [i_0] [i_1] [i_6] = (arr_9 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_29 -= 879210905;
                            arr_29 [i_0] [i_1] [i_6 - 1] [i_7] [i_8] = (arr_24 [i_0] [i_0] [i_6 - 1] [i_7] [i_8]);
                        }
                    }
                }
            }
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                var_30 = ((((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [0]) >= (arr_25 [i_0] [i_9] [i_0] [i_9])))) << (((((arr_26 [i_0] [3] [3] [i_0] [3]) + 9483)) - 9409))));
                arr_34 [i_0] [i_0] [i_1] = (arr_21 [i_0] [i_0] [i_9]);
            }

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_31 -= ((~(arr_11 [i_0] [i_0] [i_0] [i_0])));
                var_32 = -var_9;
            }
        }
    }
    var_33 = (max(var_33, (9150963715318563369 ^ 18107049542357117336)));
    var_34 = (max(var_34, var_6));
    var_35 = 0;
    #pragma endscop
}
