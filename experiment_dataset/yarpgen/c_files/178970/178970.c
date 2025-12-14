/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [7] [i_2] = arr_6 [i_0 - 1];
                    arr_8 [i_0] [i_0] [i_0 + 1] = (max(3, 18446744073709551613));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = 19;
                                var_18 = 219;
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_2] [i_3] [i_1] [4] = (((arr_0 [i_1] [5]) != (((((arr_11 [i_1 - 1] [i_0 + 1]) < var_13))))));
                            }
                        }
                    }
                    var_19 = (max(var_19, (~var_10)));
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_31 [i_5] [4] [i_5] [i_5] = (arr_29 [i_7 - 1] [i_6 + 2] [i_5 - 2]);
                            var_20 = var_7;
                        }
                        arr_32 [i_5] [i_7] [i_6 + 2] [i_6 + 2] [i_5] [i_5] = (min(128, 824056967162149692));

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_21 = ((min((arr_9 [i_5] [i_6] [i_7 + 1] [i_8] [i_10]), var_12)));
                            var_22 = ((-(arr_25 [i_5 + 1] [i_5 + 1] [i_6 - 1])));
                        }
                    }
                }
            }
        }
        var_23 = (arr_22 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5]);
        arr_35 [2] |= (arr_34 [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1]);
        arr_36 [i_5] = (min((5488267456923852861 >> 24), 44));
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_24 = var_5;
        arr_40 [10] [i_11] = (min(var_9, -var_8));
    }
    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {
        arr_43 [i_12] = ((!(arr_6 [i_12 - 1])));

        for (int i_13 = 1; i_13 < 8;i_13 += 1) /* same iter space */
        {
            var_25 -= ((-(arr_17 [i_13])));

            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                arr_50 [i_12] [i_12] = ((5488267456923852861 || ((((arr_46 [i_14] [i_12 + 1]) & (arr_46 [i_12] [i_12 - 1]))))));
                var_26 = (!9028430001784335848);
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                var_27 += (((arr_2 [i_13 + 2]) <= 218));
                var_28 &= ((((arr_48 [i_12 - 1] [i_13 + 2] [i_12 - 1]) % (arr_48 [8] [i_13 - 1] [i_12 - 1]))));
            }
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 8;i_16 += 1) /* same iter space */
        {
            arr_57 [i_12] = var_15;
            var_29 = 2626990076128687470;
            var_30 = var_7;
            arr_58 [i_12] [i_16] [i_16] = (arr_30 [i_12] [i_12] [3] [i_12] [i_16 - 1] [i_16 + 1] [i_16]);
        }
    }
    #pragma endscop
}
