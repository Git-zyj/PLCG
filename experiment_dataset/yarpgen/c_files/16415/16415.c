/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-(min(var_2, var_7)))) ^ 2024147401));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 -= (((3571210161697782506 - 3571210161697782506) + (min(2270819900, (3571210161697782506 + -3571210161697782508)))));

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_21 ^= var_6;
                    var_22 = ((~(arr_0 [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = -var_1;
                                arr_16 [i_0] [i_1] [i_0] [16] [i_4] = ((~((((arr_11 [3] [i_1] [i_1] [i_1] [i_1] [i_1]) || 3571210161697782508)))));
                                arr_17 [i_0] = (((((((-(arr_8 [i_0] [i_1]))) ^ var_9))) ? ((246289101 ? 3571210161697782506 : 2024147401)) : (((max((arr_11 [i_2] [i_2 + 3] [3] [i_2 + 2] [i_2 - 1] [i_2 + 3]), var_10))))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_1] [i_0] = (max(((var_1 * (arr_8 [i_0] [i_1]))), ((~(arr_8 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_23 = ((var_6 ? var_7 : (min(3571210161697782518, -3571210161697782484))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_34 [i_5] [i_5] [i_6] [i_7] [i_6] [i_9] [i_9] = (41 == 24490);
                                arr_35 [i_5] [i_6] [10] [i_6] [10] = (((-3571210161697782519 ^ -1876560510) ? var_0 : (0 ^ 3571210161697782528)));
                                arr_36 [i_6] [i_9] [i_9] [6] [i_6] [i_6] [i_6] = (((((!(1783794564 + 63)))) < 17002));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
