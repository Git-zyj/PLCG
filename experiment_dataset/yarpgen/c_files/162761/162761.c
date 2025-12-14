/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (13194139533312 ? 4611686018425290752 : (-9223372036854775807 - 1));

        for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_13 = ((!(arr_5 [i_0] [i_1] [i_1])));
            arr_6 [i_1] [i_1] = ((((arr_5 [i_0] [i_1] [i_1]) ? var_9 : var_9)) ^ (~var_4));
            var_14 = (~(arr_1 [i_1 + 2] [i_1 + 2]));
            arr_7 [i_0] [i_1] = -8645060136658139663;

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_15 = ((var_3 != var_6) * (arr_5 [i_0] [i_1] [i_0]));

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_16 = 3636338349592949784;
                    var_17 = (6521757733750696205 ? -9223372036854775796 : 4136226815002325042);
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_18 = arr_13 [i_4];

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 = (~((var_10 ? 5781914774927672637 : -7887210411709843549)));
                        var_20 = ((((~(arr_4 [i_2] [i_1] [i_5])))) ? (5136469432171279290 == 6929585419397977012) : var_2);
                    }
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_1] = var_8;
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((var_0 ? 476389215047900639 : (arr_12 [i_0] [i_0] [i_0] [i_0]))) ^ (arr_8 [i_0]));
                        arr_23 [i_0] [i_1] [i_2] [i_4] [i_1] = arr_13 [i_6];
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_1] [i_0] = (~360293714246744096);
                        var_21 = (arr_20 [i_0] [i_1] [i_2] [i_4] [i_7]);
                        var_22 = ((!(arr_1 [i_1 + 2] [i_1 + 2])));
                    }
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_23 = ((arr_4 [i_1] [i_1] [i_1 + 1]) ? (arr_4 [i_1] [i_1] [i_1 - 1]) : var_4);
                    var_24 = arr_14 [i_0] [i_1] [i_2];
                    arr_29 [i_0] [i_0] [i_1] [i_2] [i_8] [i_8] = var_2;
                }
            }
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_25 = ((!(arr_2 [i_9 + 2])));
            var_26 = arr_13 [i_0];
        }
    }
    var_27 = min(((~(var_5 / var_2))), var_10);
    #pragma endscop
}
