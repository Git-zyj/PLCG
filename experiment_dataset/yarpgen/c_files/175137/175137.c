/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 = var_14;
        var_17 = (arr_0 [i_0 + 3] [i_0]);
        var_18 = 99;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_19 = (arr_1 [i_0]);
                        var_20 = (~var_12);
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_21 = var_2;
            var_22 = (arr_8 [i_4] [i_4] [i_4] [i_4]);
            var_23 = ((((max((arr_9 [i_4]), (arr_1 [i_4])))) ? ((~(arr_0 [i_4] [i_5]))) : (~0)));
            var_24 = (max(var_24, (arr_9 [1])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 = ((-(arr_5 [i_4 - 1] [i_4] [i_4] [i_4 - 1])));

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_26 = (arr_8 [i_4] [i_6] [i_4] [i_4]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_27 = (min(var_27, ((((((arr_10 [i_9 + 1] [i_4 - 1]) ? (arr_10 [i_9 - 1] [i_4 - 1]) : (arr_10 [i_9 - 3] [i_4 - 1]))) - (((arr_10 [i_9 - 3] [i_4 - 1]) ? (arr_10 [i_9 + 1] [i_4 - 1]) : (arr_10 [i_9 - 2] [i_4 - 1]))))))));
                            var_28 -= (arr_6 [i_7] [i_6] [i_7]);
                            var_29 = (((-99 < 99) ? (max(2147483647, (arr_11 [i_9 - 3] [i_9 - 3]))) : 107));
                        }
                    }
                }
            }
            var_30 = var_1;
            var_31 = (~-100);
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            var_32 = var_4;

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                var_33 += ((!((((arr_7 [i_4 - 1] [i_10] [i_11] [i_4] [i_10 - 1] [i_11]) ? (arr_1 [i_11]) : (arr_1 [i_11]))))));
                var_34 |= -2147483647;
                var_35 = (max((min((arr_28 [i_4] [i_10 + 1]), (arr_4 [i_4]))), ((((arr_6 [i_4] [i_4 - 1] [i_11]) ? (arr_15 [i_4] [i_4 - 1] [i_10 + 1]) : (arr_23 [i_11] [i_4] [i_11] [i_11] [i_10 + 1] [i_4] [i_10 + 2]))))));
                var_36 = (arr_16 [i_4]);
            }
        }
        var_37 = (min(var_37, (((var_14 ? var_14 : (((((arr_29 [i_4 - 1] [0]) <= ((-(arr_29 [i_4] [14]))))))))))));
        var_38 = (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
    var_39 = var_10;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            {
                var_40 = (-1359883735427486741 & 449763469);
                var_41 = ((((var_15 ? (arr_11 [i_12] [i_13]) : (arr_11 [i_13] [i_12]))) > ((((!(arr_11 [i_12] [i_13])))))));
                var_42 = ((((((!(arr_14 [i_13] [i_13] [5]))))) ^ (arr_24 [i_12] [i_13])));
                var_43 = ((((min(var_14, -1359883735427486741) * ((((18446744073709551615 <= (arr_3 [i_13])))))))));
            }
        }
    }
    var_44 = var_15;
    #pragma endscop
}
