/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= var_6;
        var_18 &= ((((((var_12 & var_16) ? ((max(var_16, 222))) : (35 || var_12)))) ^ (((arr_1 [i_0]) * (((-8893939239511940197 ? (arr_0 [10]) : var_16)))))));
        var_19 = var_14;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 -= ((var_7 ? ((8893939239511940209 ? 34 : 2017512953)) : (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                {
                    var_21 += var_9;
                    arr_12 [6] [i_2] [7] = var_14;
                    var_22 = (max((((var_17 + var_17) ? (arr_5 [i_2] [i_1]) : 222)), ((((var_3 ? 18083 : var_3)) & var_13))));
                }
            }
        }
        var_23 = (((((arr_1 [9]) ? (((max(1, 1)))) : (var_13 ^ -8893939239511940197))) == var_13));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_24 ^= (((((var_15 ? -var_0 : 1))) % ((+((216 ? (arr_16 [i_4]) : var_8))))));
                        arr_26 [i_7] [i_6] &= (min(((36 * (arr_20 [i_7] [i_7]))), (((arr_19 [i_7] [i_5 + 1] [1]) ? var_3 : var_3))));
                        arr_27 [i_4] [8] [i_5] [20] = ((-((-((29094 ? -7 : var_8))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    {
                        var_25 = ((max(1, (max(1, var_6)))));

                        for (int i_11 = 3; i_11 < 20;i_11 += 1)
                        {
                            var_26 *= (((((~(1372127249 | var_10)))) ? var_6 : (~var_15)));
                            var_27 += var_10;
                        }

                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            arr_42 [3] [3] [i_9] [i_10 - 1] [i_12] = ((((var_7 < (arr_36 [i_10 - 1] [i_12 + 3] [i_12] [i_12] [i_12] [i_12]))) || ((max(59, (arr_15 [13]))))));
                            arr_43 [i_12] [i_10 + 1] [i_10 - 1] [15] [i_8] [i_4] [i_4] = ((((max(222, -8893939239511940199))) ? ((18 ? 254 : 1015985268)) : -1982294298));
                        }

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_48 [i_4] [i_4] [i_4] [i_10] [i_9] [i_8] = -var_3;
                            var_28 = (((1 ? 821375744 : var_7)));
                            var_29 = var_10;
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            var_30 = var_2;
                            var_31 = (min(var_31, ((((arr_9 [i_8] [i_9] [i_14]) * var_11)))));
                        }
                        arr_52 [i_10 + 1] = (max(((17 ? 202 : 99)), (arr_6 [2] [i_10 + 1] [i_10 + 1])));
                    }
                }
            }
        }
    }
    var_32 = var_7;
    var_33 = ((((!var_2) ? var_16 : (min(50081, var_0)))));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                arr_59 [i_15] [2] &= ((((~((max(33, var_15)))))) - var_17);
                var_34 = (var_8 ? (arr_14 [i_15]) : (((arr_14 [5]) ? var_9 : var_12)));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_35 = (var_1 - var_5);
                            var_36 *= (((!99) ? ((var_8 & (-1015985238 - 1))) : ((((max(244, -8893939239511940205))) ? var_12 : ((-1015985285 ? -1015985272 : 1))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
