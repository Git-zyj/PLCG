/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [6] [i_0] [i_1] [i_2 + 1] = (arr_1 [i_0] [0]);
                    var_12 = (((arr_2 [8]) >> (-36 + 68)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = var_9;
                        var_14 *= var_2;
                        arr_10 [i_0] [i_0] [i_2] [i_3] = (((arr_9 [i_0] [i_2] [5]) || 36));
                        arr_11 [i_0] [8] [0] [i_0] = (var_5 / (((-(arr_3 [i_3])))));
                    }
                    arr_12 [7] [i_1] [5] = (((arr_4 [i_2 + 1] [i_0]) || ((((arr_3 [i_0]) ? var_8 : var_0)))));
                }
            }
        }

        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            var_15 = (max(var_15, var_1));
            var_16 = (((arr_6 [8] [i_4 + 1]) ? var_4 : (arr_6 [i_0] [i_4 + 1])));

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_17 = 3239437934666081541;
                var_18 = ((-2054247154418117036 ? (((9223372036854775807 ? (arr_4 [7] [i_4 + 2]) : var_6))) : 2361270503626600368));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_19 = (max(var_19, (arr_9 [i_0] [i_4 + 2] [i_4])));
                var_20 = 634187780;
            }
            arr_22 [i_4] [i_4] = ((9223372036854775807 ? (arr_2 [i_0]) : var_8));
        }
        for (int i_7 = 1; i_7 < 7;i_7 += 1)
        {
            var_21 = (min(var_21, (((var_1 ? -5608904675300213127 : 1016)))));
            var_22 = -9223372036854775807;

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_23 = ((var_6 ? 1 : -5608904675300213128));
                var_24 = var_10;
                arr_27 [i_7] = (1 > var_6);
                var_25 = ((1385481908 ? 76 : -3664));
            }
        }
        arr_28 [i_0] = -0;
        var_26 ^= (((var_10 == 16681) ? ((-(arr_18 [i_0] [i_0] [i_0]))) : (-51 / -90)));
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            {
                var_27 = (min(((min((min(42, 5608904675300213132)), (492960548 || var_7)))), (max(((13390623383284718989 ? -2054247154418117023 : var_4)), -var_1))));
                var_28 = (arr_32 [i_9] [i_9]);
                var_29 = (max(var_29, -2054247154418117036));

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_30 *= -2441904491416065198;
                    var_31 = (max(((max(193, 1))), (arr_32 [i_11] [i_11])));
                }
            }
        }
    }
    var_32 = var_5;
    #pragma endscop
}
