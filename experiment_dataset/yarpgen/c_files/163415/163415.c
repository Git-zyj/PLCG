/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [0] = ((22546 ? (arr_1 [i_0] [i_0 - 1]) : (arr_0 [i_0] [i_0 - 1])));
        arr_3 [i_0] [5] = ((var_12 % (arr_0 [i_0] [i_0 - 1])));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] [6] = var_13;
        arr_9 [i_1] = var_12;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = 14489;
        arr_14 [5] = var_1;

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_17 [8] [i_2] = (((arr_4 [16] [i_3]) ? (((~((0 ? 29046 : (arr_10 [i_3] [i_2])))))) : ((1 ? (arr_11 [i_2]) : var_0))));
            arr_18 [11] = ((((((min(var_8, 226))) ? ((max((arr_12 [i_3]), -1))) : 0)) >> (((((arr_16 [17] [i_2]) ? (((-18476 ? -14489 : (arr_6 [i_2])))) : -1962960615)) + 14511))));
            arr_19 [i_2] [i_2] [i_2] = ((((arr_7 [i_2]) ? 2644842712 : (arr_7 [1]))) ^ (max((arr_5 [i_2]), 2644842689)));
            var_15 = ((1650124607 ? (((((28715 ? 2644842689 : 2))) ? ((var_9 ? (arr_11 [i_2]) : 9223372036854775807)) : ((min(226, 4106690285))))) : ((((arr_15 [i_2]) ? (arr_6 [i_2]) : 26342)))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_16 = (min(var_16, (((-(min(9223372036854775807, (min(1328097074, 3530745419492805894)))))))));
            var_17 += min(((((max(2584, 15339230711871747400))) ? (arr_7 [i_4]) : 181)), (min(15012341395822495669, ((-29341 ? var_14 : var_6)))));
            var_18 |= ((((min(((3566819075 ? (-32767 - 1) : 29341)), ((max(44454, 23250)))))) ? ((59877 ? 1962960614 : 1)) : (((arr_6 [i_2]) ? (arr_21 [1] [1] [7]) : 14489))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_19 += (max((min(1593704630, 3049949124)), 566384160));
            var_20 = (min(var_20, ((var_2 ? 6471 : (max(((((arr_15 [15]) ? var_8 : 32739))), 2783588611))))));
            arr_24 [i_2] [1] = 4294967280;
        }
    }
    #pragma endscop
}
