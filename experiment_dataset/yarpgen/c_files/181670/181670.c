/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = arr_0 [i_0];

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_2] [i_3] = (!(arr_3 [i_0 - 2]));
                    var_19 += (arr_10 [i_0] [i_0] [i_2] [i_3]);
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_20 -= ((~(arr_5 [i_0 - 2] [i_0] [i_0 - 2])));
                    var_21 += (arr_0 [i_0]);

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 += (arr_6 [i_0] [i_0] [i_0] [i_5]);
                        var_23 = (arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2]);
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_1] [i_0] = ((!(arr_16 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_24 = (max(var_24, (arr_10 [i_0] [i_0] [i_0 - 2] [i_1])));
                        var_25 = (arr_16 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2]);
                        var_26 = (min(var_26, (arr_2 [i_0 + 1] [i_0 + 1])));
                    }
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0 + 2] [i_0 + 2] [i_8 + 2] [i_8 + 1]);
                        var_27 = (arr_12 [i_8 + 4] [i_6] [i_1] [i_1]);
                        var_28 ^= ((!(arr_16 [i_0] [i_1] [i_8 - 1] [i_6] [i_8] [i_0 + 1])));
                        arr_28 [i_8 + 1] [i_6] [i_1] [i_1] [i_0 - 2] [i_0 - 2] = ((-(arr_2 [i_8 - 1] [i_0 + 2])));
                    }
                    var_29 = (min(var_29, (arr_14 [i_0] [i_0] [i_2] [i_6])));
                    var_30 += (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_31 = (-(arr_6 [i_6] [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                    var_32 -= (arr_7 [i_0 - 2] [i_0]);
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_33 = (min(var_33, (((!(arr_0 [i_0 - 1]))))));
                    var_34 += ((-(arr_29 [i_0] [i_9] [i_2])));
                }
                var_35 ^= (arr_12 [i_0 + 2] [1] [i_2] [i_0 + 2]);
                var_36 = (max(var_36, (arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
            }
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_37 [i_0] = ((!(arr_14 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 2])));
            var_37 ^= ((!(arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])));
            arr_38 [i_0] = (~13879778961654577890);
            var_38 ^= ((~(arr_2 [i_0 - 1] [i_0 - 1])));
            var_39 ^= (arr_34 [i_0 + 1]);
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_40 = (min(var_40, (((~(arr_26 [i_0 - 2] [i_11] [i_11] [i_11] [i_11]))))));
            var_41 ^= (arr_36 [i_0] [i_0] [i_0]);
            var_42 -= (arr_18 [i_0] [i_0 - 1]);
            var_43 = (max(var_43, (arr_25 [6] [i_11] [i_11] [i_11] [i_11] [i_0 + 1] [i_11])));
        }
        arr_41 [i_0] = (arr_11 [i_0] [i_0] [i_0]);
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_44 += (((-(arr_42 [i_12] [i_12]))));
        var_45 = (arr_42 [i_12] [i_12]);
        arr_44 [i_12] = (max((!3071680299), (max((arr_42 [i_12] [i_12]), (arr_43 [i_12])))));
        var_46 = (min(var_46, ((max(0, 458878682067304495)))));
    }
    var_47 = var_12;
    #pragma endscop
}
