/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 &= (max((arr_2 [i_0] [i_0]), 23615));
        var_16 &= (max(5887222239713731629, (arr_3 [7] [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_17 = (~((-1413705891 ? (arr_6 [i_0] [1]) : 8424885920531414734)));
                    var_18 = (((arr_6 [15] [i_1]) ? -7 : 1));

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = ((var_11 ? (arr_9 [i_4 - 1] [1] [i_2] [1] [i_4]) : (arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_3] [i_4])));
                        var_19 = ((-(arr_7 [i_1] [i_4 + 2] [i_4 + 1] [i_4])));
                        var_20 |= ((arr_1 [i_4 + 1] [i_4 + 2]) ? 46 : (arr_1 [i_4 + 2] [i_4 + 1]));
                    }
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_21 = (((arr_9 [i_5 + 1] [8] [i_5] [i_5 - 1] [i_5]) ? -8424885920531414735 : -7));
                    var_22 = (min(var_22, -8424885920531414735));
                    var_23 = (370847145269459726 ? (arr_4 [i_5 + 1]) : ((var_11 ? (arr_14 [i_1] [i_2]) : var_2)));
                    var_24 *= (arr_13 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]);

                    for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, (((217 ? (arr_13 [i_6] [i_6 - 2] [i_5 - 1] [i_5 - 1]) : (arr_13 [i_6 - 1] [i_6 - 2] [i_5 - 1] [i_5 - 1]))))));
                        var_26 = (((arr_15 [i_5] [i_1] [i_6 - 2] [i_5 - 1] [i_5 - 1]) ? (arr_9 [i_0] [i_1] [i_6 - 2] [i_5] [i_5 - 1]) : (arr_9 [i_0] [i_0] [i_6 - 2] [i_1] [i_5 - 1])));
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_0] [i_0]);
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] [i_0] [11] [i_0] [15] [i_0] = ((-12577651344411399006 ? (arr_9 [i_5 + 1] [10] [i_5 + 1] [i_5 - 1] [i_5 - 1]) : -110866024));
                        var_27 = ((-(arr_17 [i_0])));
                    }
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_28 [i_8] [i_8] &= var_6;
                        var_28 = ((!(~-6611399590410797682)));
                    }

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_29 = (min(var_29, ((((arr_16 [i_0] [10] [5] [i_8] [10]) ? 4456 : (arr_20 [i_0] [i_0] [i_0] [4] [i_0] [i_0] [i_0]))))));
                        arr_33 [14] = ((arr_27 [i_0] [i_0] [i_1] [i_2] [i_8] [i_10]) ? (arr_23 [i_0] [i_1] [i_2] [i_0] [i_10]) : (arr_23 [i_0] [i_0] [i_2] [i_2] [i_10]));
                        var_30 = ((var_4 ? var_14 : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2])));
                        var_31 = (min(var_31, ((-(arr_16 [1] [6] [i_2] [i_1] [i_0])))));
                    }
                    var_32 = -2;
                }
                arr_34 [i_0] [i_0] [i_2] = ((-(arr_3 [i_0] [7])));
                var_33 = -5887222239713731628;
                arr_35 [i_0] [i_1] [i_2] = var_0;
            }
            arr_36 [i_0] [i_1] = ((~(((arr_11 [i_0] [i_1] [i_0] [i_0] [i_0]) ? 7113265816574910328 : (arr_25 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])))));
            arr_37 [i_0] = var_7;
        }
    }
    var_34 = var_0;
    var_35 = var_4;
    #pragma endscop
}
