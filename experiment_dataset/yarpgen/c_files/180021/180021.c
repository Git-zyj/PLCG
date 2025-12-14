/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_2 + 1] [i_3] [i_3] = (((((3574692557008607601 ? (arr_9 [i_0] [i_3]) : (arr_0 [i_0 - 2])))) && (((-(arr_9 [i_0 - 1] [i_3]))))));
                        var_10 = (((((min((arr_6 [i_0] [i_1] [i_2] [i_3]), (arr_2 [i_0] [16] [i_0]))))) >> (((max(1716530738, var_2)) - 1716530724))));
                        arr_11 [i_3] [i_1 + 1] = (min((min((arr_6 [i_0 + 2] [i_0] [i_1 + 1] [i_2]), var_8)), var_0));
                    }
                }
            }
        }
        var_11 &= (min(-4583, 0));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_12 = ((var_3 ? -4031307726724391530 : 51863));
                                arr_24 [i_4] [i_5] [i_6] [i_5] [i_4] = (arr_21 [5] [9] [2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_29 [i_5] [i_5] [i_6] [i_9] [i_10] = (arr_3 [i_4]);
                                arr_30 [i_4] [i_5] [i_5] [i_9] [i_5] = (max(var_9, ((((((arr_12 [i_4] [i_5]) ? (arr_15 [i_4] [i_5]) : var_8))) ? ((var_9 ? 4202703587 : var_7)) : (1716530738 % var_5)))));
                                var_13 = (min(((max(var_2, 18446744073709551603))), (arr_9 [i_4] [i_5])));
                                var_14 = (max(var_14, 18446744073709551599));
                                arr_31 [i_5] = (((arr_13 [i_4] [i_4]) ? (max((arr_13 [i_5] [i_4]), ((6267693916213744115 ? var_6 : (arr_23 [i_4] [i_4] [i_4] [i_4]))))) : (max(var_5, 13673))));
                            }
                        }
                    }
                }
            }
        }
        var_15 -= (2318819808 >= 3048);
        var_16 = (min((arr_20 [i_4]), (min(var_4, (arr_2 [i_4] [2] [i_4])))));
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_17 = (min((((var_6 ? (arr_36 [i_13] [i_12] [i_13]) : var_4))), (min((arr_37 [i_11] [i_12] [i_13]), (arr_37 [i_13] [i_12] [i_13])))));
                    arr_40 [i_13] [i_13] = ((((min(((min(var_2, (arr_36 [i_11] [6] [i_13])))), (((arr_38 [i_13] [i_12] [2] [i_13]) ? var_5 : (arr_37 [1] [i_12] [i_13])))))) ? 22 : (arr_35 [i_13] [i_11])));
                    var_18 = (arr_37 [i_11] [i_11] [i_11]);
                }
            }
        }
    }
    var_19 = (((33554176 ? (((163 >> (13660 - 13631)))) : 3)));
    #pragma endscop
}
