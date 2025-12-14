/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = ((~(((((2424684931 ? 1902660613 : -24))) ? 0 : (-2147483647 - 1)))));
        arr_4 [i_0] [0] = ((!(((-((-1 * (arr_2 [i_0]))))))));
    }
    var_17 = var_0;
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = ((((~(max((arr_16 [i_4] [i_3] [i_2] [i_1]), 0)))) >> (((max((arr_15 [i_1 - 2] [i_2] [i_1 + 1] [2]), ((~(arr_10 [i_1]))))) - 17421399733480715325))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_5] = (max(((!(arr_17 [i_1] [11] [i_1] [i_1] [i_1 - 1]))), ((((-334005837 ? 18446744073709551587 : 114)) >= (arr_13 [i_3])))));
                            arr_20 [i_1] [i_2] [i_1] [i_4] = (arr_6 [i_1] [i_4]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_19 = (((!4294967295) ? ((var_13 ? 25408 : (arr_5 [i_1 + 1]))) : 6401283611837669480));
                            arr_24 [i_1] [i_2] [i_6] [i_6] = ((-35 + 2147483647) >> (14246474710281992223 - 14246474710281992213));
                        }
                        arr_25 [i_1] [i_2] [i_3] = 62800;
                        arr_26 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = ((((((arr_8 [i_2] [i_4]) & (arr_17 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 2])))) ? (arr_13 [i_4]) : (!1668416258)));
                    }
                    var_20 = (max(var_20, var_3));
                    var_21 = (max((((-14480 || (arr_12 [i_1 - 1] [i_1 - 1] [i_3])))), ((var_10 ? (((arr_12 [i_1] [i_2] [i_3]) ? (arr_12 [i_1] [i_2] [i_3]) : 65535)) : var_5))));
                }
            }
        }
    }
    var_22 = ((!((((((var_14 ? var_4 : var_7))) ? var_3 : 11)))));
    #pragma endscop
}
