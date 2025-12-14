/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (min(var_7, ((~(max(var_3, -1))))));
    var_12 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_1 + 1] = (arr_1 [i_0]);
            var_13 = ((~(arr_3 [i_0] [i_0] [13])));
            var_14 = (((arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2]) ^ (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2])));

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_15 = ((16052 == (arr_5 [i_2 + 3] [i_1 - 2] [i_1 - 2])));

                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_16 |= (((arr_13 [i_4 - 2] [i_4] [i_4] [i_4 - 2] [i_1]) != (arr_13 [i_4] [i_4 - 1] [i_4] [i_4 - 2] [i_4])));
                        arr_14 [i_0] [i_1] [1] [i_3 + 3] [i_3 + 3] &= ((arr_6 [i_2 - 2] [i_4 + 1] [i_4] [i_4]) / (arr_0 [i_2 + 2]));
                        var_17 = (~7870275680737965132);
                    }
                    var_18 = -125;
                    var_19 = ((!(arr_8 [i_3 + 2])));
                    var_20 *= 249;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_21 = 14712;
                    var_22 = (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                    var_23 = (arr_11 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]);
                    arr_19 [i_5] = (~-1);
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_24 = ((1869516769 + (arr_20 [i_2 + 2] [i_2 + 3] [i_2 - 2])));
                    var_25 &= (arr_18 [i_1 - 2] [i_1 - 1] [i_2 + 2] [i_2 + 3]);
                }
            }
        }
        arr_22 [i_0] = 5896409819394468729;
        var_26 = (arr_20 [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        arr_26 [6] [i_7] = (max((((!(arr_13 [14] [i_7 + 1] [i_7 + 1] [i_7] [i_7])))), ((0 & (((~(arr_20 [i_7] [i_7] [i_7]))))))));
        var_27 = (min(((~(arr_8 [i_7 + 1]))), (arr_8 [i_7 - 3])));
        var_28 ^= (arr_0 [10]);
        var_29 *= min((arr_2 [14] [i_7]), (max((arr_3 [i_7 - 2] [i_7 - 1] [i_7 - 2]), (arr_3 [i_7 + 1] [i_7] [i_7 - 1]))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_30 [i_8] = (-(arr_27 [i_8] [i_8]));
        arr_31 [i_8] [i_8] = ((arr_16 [i_8]) <= (arr_0 [i_8]));
    }
    #pragma endscop
}
