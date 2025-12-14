/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_5, (var_1 == 0)));
    var_11 = min(var_4, 153);

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [1] = (max(((min(153, (arr_0 [i_0])))), var_9));
        arr_3 [i_0 - 3] |= (((arr_0 [i_0 - 2]) / (min(-2510403359717737560, (var_4 + 49291)))));
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 6;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                var_12 = (((arr_4 [i_1 - 2] [i_2 + 4]) != (arr_4 [i_1 + 1] [i_2 + 1])));
                arr_11 [i_1] [i_1] = 1;
                var_13 = var_2;
                var_14 += 31787;
            }
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                arr_16 [i_1] [i_2] = -var_7;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_22 [i_1] = ((-57 && (arr_17 [5] [i_1] [i_1] [5] [i_1 + 2])));
                            arr_23 [i_1] [i_2 + 4] [i_4 + 2] [i_5] [1] = var_2;
                            var_15 = var_1;
                            var_16 = (arr_0 [i_1]);
                            arr_24 [i_4] &= ((1 ? (!-30111) : (arr_8 [i_2] [i_5] [i_6])));
                        }
                    }
                }
                var_17 = ((var_2 || (arr_18 [i_1] [i_2] [3] [i_1] [i_4 - 1] [1])));
            }
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                arr_29 [4] [4] [4] |= (arr_9 [i_2 + 1] [i_1 - 1] [4] [6]);
                var_18 = (min(var_18, ((((arr_4 [i_1 - 2] [i_1 - 2]) < 0)))));
                arr_30 [i_1 + 2] [i_1] [i_7 + 1] = ((var_6 ? 148 : var_3));
                var_19 = (arr_19 [i_2 - 1] [i_1] [i_2 + 4] [i_2 - 1] [i_2 + 4]);
            }
            arr_31 [i_1] [i_1] [i_2] = (((arr_4 [i_1 - 2] [i_2 + 2]) ? 0 : 1));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_36 [2] [i_2] [i_8] [i_1] = (arr_0 [i_1]);
                        arr_37 [i_1] [i_1] = ((158 < (arr_12 [i_1] [i_1] [i_8] [3])));
                    }
                }
            }
            var_20 -= -154;
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 6;i_10 += 1) /* same iter space */
        {
            var_21 = ((var_6 - (arr_32 [i_1] [i_1 - 1] [i_1])));
            var_22 = (arr_26 [i_1 - 3] [i_1 - 1] [i_1]);
        }
        var_23 = (min(var_23, (~1)));
    }
    #pragma endscop
}
