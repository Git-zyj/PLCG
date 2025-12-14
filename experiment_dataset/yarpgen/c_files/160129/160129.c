/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = -1;
                                arr_14 [11] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = 1;
                                var_13 = (var_6 & 3511440511214939345);
                                var_14 = (max((~3297057816838711778), ((199 ? 3511440511214939345 : 69))));
                                var_15 = 14935303562494612270;
                            }
                        }
                    }
                    var_16 -= ((((min(18446744073709551584, (!var_10)))) ? ((((((arr_1 [i_0] [i_0]) ^ (arr_0 [i_0])))))) : ((min(3204139446077945846, var_5)))));
                    var_17 = (arr_3 [i_0]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_17 [i_5] = ((((3297057816838711778 ? 1 : 1))) ^ (max(14935303562494612270, 0)));
        arr_18 [i_5] = (arr_15 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = ((((((arr_23 [i_5] [i_5] [i_5]) | var_0))) ^ (max(var_1, (arr_23 [i_5] [i_5] [i_7])))));
                    var_19 = (((((!(arr_25 [i_5] [i_5]))) ? (175586601570471902 * var_8) : -var_7)));
                    var_20 = ((((max(var_7, (arr_15 [16]))) <= var_1)) ? (max(((1 ? 69 : var_2)), ((min(var_5, (arr_15 [i_5])))))) : (((max(12236, -22)))));
                    arr_26 [i_5] [i_6] [7] = (max((~1), 17863803514740257094));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_30 [i_8] = min(var_7, (((((var_2 ? 175586601570471897 : (arr_27 [i_8])))) ? ((var_10 ? 1 : var_2)) : (arr_22 [i_8] [i_8] [i_8]))));
        var_21 = (arr_19 [i_8]);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_37 [i_10] [i_9 - 1] [i_8] = ((~(min(((141 ? 1 : 22)), 0))));
                    var_22 = (((-(((!(arr_27 [4])))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_23 = ((+(((arr_41 [i_11] [7]) ? 1 : var_1))));
                    arr_45 [i_11] [i_11] [i_12] [i_11] = (((var_10 >= (arr_41 [i_11] [i_12]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                {
                    arr_50 [i_11] [i_11] [i_11] [i_11] = var_6;
                    var_24 = (!1);
                }
            }
        }
    }
    for (int i_16 = 3; i_16 < 23;i_16 += 1)
    {
        arr_53 [i_16] = ((((0 >= ((18446744073709551615 ? 159 : 1))))) >= ((min(0, 1))));
        arr_54 [i_16] [i_16 + 1] = -108;
        var_25 = (((arr_48 [i_16] [i_16] [i_16 - 3]) % (((arr_44 [i_16] [i_16] [i_16] [i_16 - 3]) % (arr_39 [i_16] [i_16 - 1])))));
    }
    #pragma endscop
}
