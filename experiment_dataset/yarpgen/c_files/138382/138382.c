/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (min(var_19, ((((-8109173176262071328 ? -30948 : 193))))));
        arr_3 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (min((-3901761512006948022 / 1), (min(((63 ? (arr_2 [i_1]) : (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [i_1])))));
        var_20 = ((8109173176262071342 > (((arr_5 [i_1] [i_1]) & -var_12))));
    }
    var_21 |= -29482;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_3] = ((-(var_7 <= 65535)));
                    var_22 = (arr_8 [i_2]);

                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            arr_23 [i_5] [i_3] [i_5] [i_5] [13] [18] [i_5] = 3901761512006948003;
                            arr_24 [i_2] [12] [i_3] = 6;
                        }
                        arr_25 [i_2] [14] [i_4] [i_2] [i_3] [i_5] = 1;
                        var_23 = (min((!-8109173176262071313), ((var_17 ? (arr_1 [i_5 - 1] [i_3 - 1]) : var_2))));

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            arr_28 [i_3] = (!17815832340080811358);
                            var_24 = (((-32766 + 2147483647) >> (-113 + 131)));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_25 = var_0;
                            var_26 = ((!(-8109173176262071298 & var_16)));
                            var_27 = (min(var_27, 0));
                            arr_33 [i_2] [i_3] [4] [i_5] [14] |= 1990804833;
                            var_28 = (arr_9 [4] [i_3 - 1]);
                        }
                        var_29 = ((((~(~var_8))) ^ (~183)));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_37 [8] [i_2] [i_2] [i_2] &= (arr_22 [i_9] [i_3] [i_2]);
                        var_30 = ((((((arr_7 [i_3 - 2]) / -1439636049))) ? var_16 : var_10));
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_31 = -2359533882996042132;
                        arr_40 [i_2] [i_3] [i_2] [i_3] [i_2] = ((-(((((17469300187265340087 ? var_4 : 63))) ? 0 : var_2))));
                    }
                }
            }
        }
    }

    for (int i_11 = 3; i_11 < 20;i_11 += 1)
    {
        arr_43 [16] = 44322;
        var_32 = var_10;
        var_33 -= (~(min(var_10, (arr_41 [i_11 - 3]))));
    }
    var_34 = var_16;
    #pragma endscop
}
