/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((var_9 < var_8), var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 ^= var_6;
                                var_14 = (max(14355, ((-(arr_8 [i_0] [i_0 + 1] [i_4 + 1] [14] [i_4 - 1])))));
                            }
                        }
                    }
                    var_15 += ((-18036 ? 18036 : 16777215));

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_16 = var_3;
                        var_17 += (arr_3 [i_1] [i_0]);
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_18 = (arr_6 [i_0]);
                        var_19 = ((((arr_11 [i_0] [i_1] [i_1] [i_6 + 2] [i_0 - 1]) % var_6)));
                        var_20 += (arr_0 [i_1] [i_1]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_21 += ((max(-18036, 18048)));
                        var_22 = (((((arr_21 [i_0]) ? var_4 : (arr_21 [i_0])))) ? (((arr_20 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) - var_5)) : (((arr_21 [i_0]) + var_1)));
                    }
                    arr_22 [i_0] [i_0] = ((min(7227, var_2)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    var_23 = (~var_11);
                    var_24 = ((~(max((max(var_0, (arr_23 [i_9 - 1]))), (((0 ? var_7 : (arr_27 [i_8] [i_9]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 11;i_12 += 1)
        {
            {
                var_25 = (max((arr_31 [i_12 - 1]), (arr_16 [i_12 + 1] [i_11] [i_11])));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        {
                            arr_41 [i_11] [i_11] [6] [0] [i_11] [i_11] = (min((((var_2 ? 38 : var_7))), (max(16633417527024527278, (arr_18 [2] [i_12 - 1] [i_12 - 2] [i_14])))));
                            arr_42 [i_11] [i_11] = ((1 ? (arr_3 [12] [i_12]) : (max(((7971080914025577304 ? var_2 : 18)), ((min((arr_33 [i_11]), -4393)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
