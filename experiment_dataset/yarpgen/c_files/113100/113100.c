/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (max(var_10, var_1));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 -= ((max(651566113, (arr_2 [i_0]))));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_18 = (max(((-((651566107 ? 0 : -114)))), -1507008731280826609));
            arr_5 [10] [10] &= ((((~(arr_4 [i_1 - 2]))) & (~var_13)));
            arr_6 [0] [0] [i_1] &= (arr_3 [i_0]);
            arr_7 [i_0] [i_0] [i_0] = (min(32767, 26477));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 = (((((-(arr_2 [i_0])))) ? (13835058055282163712 >= 70366596694016) : (((!(arr_2 [i_2]))))));
            arr_11 [1] [i_0] [i_2] = (--1217223613);
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (arr_4 [i_3])));

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_3] = ((((min((((arr_13 [i_4]) / -4065180589058489579)), ((min(var_7, var_1)))))) ? ((var_12 ? 6568 : (((((arr_1 [i_3]) + 2147483647)) << (((arr_15 [i_3] [i_3]) - 5051915473125986910)))))) : ((max(((((arr_12 [i_3]) <= 32767))), (arr_0 [i_3]))))));
            var_21 = (min(var_21, (arr_15 [i_4] [i_4])));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            arr_21 [i_3] = var_15;
            arr_22 [i_3] [i_3] [i_3] = (min(6199003427972402881, (arr_4 [i_5 + 1])));
            var_22 ^= ((+((((0 ? (arr_17 [i_3] [i_3] [i_3]) : -2147483617))))));
            arr_23 [i_3] [i_3] = ((((0 - (arr_8 [i_3] [i_5])))));
            var_23 = (6199003427972402870 ? (arr_2 [i_5 + 1]) : ((((!((((arr_2 [i_5]) ? (arr_4 [i_3]) : var_12))))))));
        }
        var_24 = (arr_20 [i_3]);
        var_25 ^= (min((((-6199003427972402855 + 9223372036854775807) << (19 - 18))), ((87 ? (arr_15 [i_3] [i_3]) : (arr_15 [i_3] [i_3])))));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_30 [i_6] = (min(0, 651566111));
            var_26 = 16;
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_34 [4] [i_6] [i_8] |= (min(var_12, -6199003427972402869));
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_27 = (min(var_27, ((((((arr_25 [14]) <= 8519710036367693686)) ? (arr_0 [i_6 - 1]) : (!var_13))))));
                        var_28 -= (arr_32 [i_6] [i_6] [i_6 - 1]);
                    }
                }
            }
            var_29 = var_8;
        }
        arr_39 [i_6 + 1] [i_6] = (min((((arr_18 [i_6 + 1]) - (arr_18 [i_6]))), (~var_11)));
        var_30 |= 9223372036854775807;
        var_31 -= ((((min((max(var_7, 3961481355)), (arr_18 [i_6 + 1])))) ? (((1 ? var_9 : (arr_36 [i_6] [i_6] [8])))) : ((var_9 ? var_13 : ((((arr_8 [i_6] [i_6]) ? (arr_1 [i_6]) : 255)))))));
    }
    for (int i_11 = 3; i_11 < 11;i_11 += 1)
    {
        arr_42 [i_11] = (min(6199003427972402882, 169));
        arr_43 [i_11] = ((0 << (1762 - 1751)));
        var_32 = ((233 ? 6199003427972402903 : 333485944));
    }
    #pragma endscop
}
