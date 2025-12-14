/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [9] = (max(var_8, (((~-7028) ? var_10 : ((18446744073709551615 ^ (arr_0 [9])))))));
        var_14 = 0;
        var_15 = (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_3 [i_1] [1]);
        arr_6 [i_1 + 1] |= (arr_0 [i_1 + 1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_12 [i_2] [i_2] = (arr_7 [i_3 + 2]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_16 = (var_8 % 252);
                        var_17 = var_2;
                        arr_18 [1] = (arr_17 [i_2] [9] [2] [i_2] [5]);
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_18 = -8247;
                            var_19 -= (arr_30 [i_2] [6] [i_7] [i_7] [8] [i_8] [1]);
                            var_20 = (((arr_16 [i_6 + 1] [i_7] [i_9 - 1]) != var_1));
                        }
                    }
                }
            }
            arr_31 [i_6] [i_6] = (arr_30 [i_6 + 2] [0] [i_6] [7] [i_6] [7] [i_6 + 1]);
            arr_32 [i_6] = arr_17 [i_2] [9] [9] [i_6 - 2] [i_2];
            var_21 &= ((var_11 ? (arr_10 [6]) : var_0));
        }
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            var_22 = (max(var_22, (((!(((3490442082 ? 1 : 68))))))));
            arr_35 [0] [i_10 + 2] = ((!(arr_4 [i_2] [i_2])));
            arr_36 [0] = ((var_6 >> (((((arr_7 [i_2]) + (arr_21 [i_10 + 1] [i_10 + 2] [7]))) - 15395521376456801062))));
            var_23 |= ((-1041931645 ? 65521 : var_13));
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            var_24 = (((~var_11) ? (arr_4 [i_11 + 1] [i_11 - 1]) : 1));

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                arr_42 [i_11] [i_11 + 1] [8] = ((var_7 | (arr_40 [8] [8] [i_11 + 1])));
                arr_43 [i_2] [i_11] [i_2] = (-(arr_17 [i_11 - 1] [9] [i_11 - 1] [i_11 + 1] [i_11 - 1]));
                arr_44 [i_2] [i_11 + 1] [i_11] = 12;
                var_25 = ((((((arr_34 [i_2] [3]) ? 9223372036854775807 : var_9))) ? var_6 : var_11));
                var_26 &= ((-130066681 ? 8190 : 7028));
            }
            var_27 = (arr_28 [i_2] [3] [1] [i_11 - 1] [i_11 - 1]);
        }
        var_28 = var_11;
        arr_45 [4] = (-var_12 / var_2);
    }
    var_29 = (((127 << 7) ? (max(-3578003453422108719, ((min(8, var_5))))) : (((50 ? 1 : 1)))));
    #pragma endscop
}
