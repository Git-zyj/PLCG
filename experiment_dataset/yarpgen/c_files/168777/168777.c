/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_20 = ((-62 ? var_19 : (arr_5 [i_1 + 1])));
                var_21 = (((arr_6 [i_0] [i_0] [i_0]) ? 251 : var_3));
            }
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_13 [i_3] = 511;
                    var_22 |= (arr_4 [i_1 + 1] [i_3] [i_3]);
                    var_23 = (arr_3 [i_0] [i_3]);
                    var_24 = (arr_3 [i_1 + 2] [i_1 + 1]);
                }

                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_3] [i_0] [i_1] = (arr_10 [i_0] [i_3] [i_1 - 1]);

                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_25 = ((((var_12 - (arr_18 [i_3] [i_3] [i_3]))) * (((arr_9 [i_3] [i_5]) % (arr_17 [i_0] [i_3] [i_3] [4])))));
                        var_26 = ((4 * (arr_12 [i_6 + 3] [i_5 - 1] [i_1 + 1] [i_1 + 2])));
                        arr_19 [i_3] [i_1] [i_3] [0] [i_6] = ((((var_15 ? var_15 : (arr_5 [6]))) ^ (((arr_3 [11] [i_1]) ^ -86))));
                    }
                    for (int i_7 = 4; i_7 < 13;i_7 += 1)
                    {
                        var_27 = (arr_18 [i_3] [i_1 - 2] [i_3]);
                        arr_22 [i_7 - 2] [i_3] [i_5] [12] [i_1 + 1] [i_3] [i_0] = (((arr_21 [i_7 + 1] [i_1 - 1] [i_3] [4] [i_7] [9]) * 19));
                    }
                    var_28 = ((1048575 ? -14077 : (77 && 2)));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_29 = ((29 * (arr_18 [i_0] [i_1 - 1] [i_3])));
                    arr_25 [i_3] [i_1 - 2] [i_3] [12] [i_0] = ((((-30187 ? (arr_1 [i_3]) : 23)) ^ var_8));
                }
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_28 [i_1] = ((-75 ? (arr_21 [i_9] [i_1] [i_9] [9] [i_9] [i_1 + 1]) : (!54)));
                var_30 = (min(var_30, (((224 ? (arr_21 [i_0] [i_1 + 1] [i_0] [i_1 + 2] [i_9] [i_0]) : (arr_21 [0] [0] [i_1] [i_9] [i_9] [i_9]))))));
                arr_29 [10] [0] [6] = (arr_15 [i_1 - 1] [i_1 - 1] [2] [i_1 + 1]);
                var_31 += (((arr_24 [i_1] [i_0] [i_0] [4] [i_9]) && ((((arr_10 [i_0] [i_9] [i_9]) * var_7)))));
            }
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                arr_34 [1] [11] [13] = (((-80 * 4) * 0));
                var_32 = (arr_15 [i_0] [i_1] [5] [i_10]);
            }
            arr_35 [i_0] = (arr_11 [4] [i_1 + 2] [8] [8] [i_1] [i_0]);
            var_33 = ((!(arr_2 [i_1 + 2])));
            arr_36 [12] [i_0] [i_1] = 247;
            arr_37 [i_0] [i_0] [i_1 + 2] = -63;
        }
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            arr_40 [9] = ((~(arr_3 [i_0] [13])));
            var_34 = (min(64, 3));
            var_35 = (((((((arr_7 [i_0]) && var_2)))) ? (arr_20 [i_0] [i_11 + 1] [i_0] [i_11]) : (arr_0 [i_0])));
            var_36 = (arr_3 [i_0] [i_11]);
        }
        var_37 -= -67;
    }
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        var_38 += (max(((97 ? (max((arr_41 [i_12]), (arr_41 [7]))) : (((arr_41 [i_12]) / (arr_41 [8]))))), (max(((-22053 ? var_3 : (arr_41 [i_12]))), 51))));
        arr_43 [6] &= (min((arr_42 [10]), (!-75)));
    }

    for (int i_13 = 3; i_13 < 20;i_13 += 1)
    {
        var_39 = (max(((~((((arr_44 [i_13 - 2] [0]) || 233))))), var_18));
        arr_46 [i_13 + 2] = ((max((arr_44 [i_13 - 3] [i_13 - 3]), (min(var_8, (arr_44 [i_13] [i_13]))))) | ((((max((arr_44 [i_13] [i_13]), 74))) ? (arr_45 [i_13 + 1]) : 11)));
    }
    #pragma endscop
}
