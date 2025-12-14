/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? (((!(((var_7 ? var_19 : var_14)))))) : (((((var_13 ? 2648 : var_12))) ? (!var_12) : ((var_17 ? var_7 : var_13))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 = var_4;

            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                arr_6 [i_0] [7] [9] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                var_22 = (arr_0 [i_2 + 1]);

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_23 = 8568568407599739233;
                    var_24 ^= 13;
                    var_25 = ((arr_4 [i_2 - 2] [i_2 + 1] [i_2 - 2]) + (arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2]));
                    var_26 = arr_7 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1];
                }
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    arr_12 [i_1] [i_1] [i_1] = ((-66 ? (arr_0 [i_1]) : (arr_5 [i_1] [i_1] [i_2 - 3] [i_4 + 1])));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_1]) || (arr_2 [i_0] [i_0])));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((~((-(arr_4 [i_0] [i_0] [7])))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((-var_13 ? var_1 : var_14));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_27 = (((arr_15 [i_0] [i_1] [i_2] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_2 - 2] [i_0] [i_2 - 2] [i_0] [i_0])));
                        arr_22 [6] = ((-(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_28 = (((arr_10 [i_0] [i_2 + 1] [i_2 + 1] [i_0] [i_4 - 3]) ? var_9 : (arr_10 [i_0] [i_2 + 1] [i_0] [i_0] [i_4 - 3])));
                        arr_23 [i_1] [i_1] = ((13 ? 44 : 9));
                    }
                    var_29 = (((arr_19 [i_0] [i_0] [i_0] [i_4] [i_0] [i_4] [i_0]) - ((((arr_19 [i_0] [i_1] [i_2 - 3] [i_1] [i_0] [i_1] [i_2 - 3]) == (arr_10 [1] [1] [1] [i_4 + 3] [i_4 + 2]))))));
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_30 = (((4340201150382359723 ? var_3 : var_12)));
            arr_26 [i_0] [13] = ((var_17 <= (!var_6)));
            arr_27 [i_0] [14] [i_0] = (((arr_2 [i_7] [i_0]) & var_11));
        }
        var_31 = var_15;
        var_32 = (arr_3 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
