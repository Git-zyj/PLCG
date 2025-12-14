/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 0));
    var_14 = 53935;
    var_15 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 = var_2;
        arr_2 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [11] [i_1] = var_12;
            var_18 = (min(var_18, var_2));
            var_19 = var_12;
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_18 [i_1] [i_1] [i_1] = -1600715565931082319;
                        var_20 ^= var_8;
                    }
                }
            }
        }
        var_21 = var_9;
    }
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        var_22 ^= ((max(((((arr_21 [i_6] [i_6]) == -17381))), -1)));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_23 = -80;
            arr_24 [i_7] [i_6] [4] = ((((((!68) ^ 79))) ? (((arr_19 [i_6 + 1]) ? 4978341030814712967 : var_5)) : (((min(var_2, var_2))))));
            var_24 -= (max((127 ^ 3875608556), ((~(arr_1 [i_6 + 1])))));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_25 = (((((20 ? 0 : 23962))) ? ((824633720832 ? ((13023203831549545627 ? 3875608556 : 112)) : 5423540242160005980)) : var_3));
                        arr_34 [i_8] [i_8] [i_6] = (((arr_30 [i_6 - 1] [i_9 - 2]) - (((arr_30 [i_6 + 1] [i_9 + 2]) ? (arr_30 [i_6 + 1] [i_9 + 1]) : var_7))));
                    }
                }
            }
            arr_35 [i_6] [i_6 + 2] [20] |= (((arr_28 [0] [i_6 + 1] [i_6] [22]) >> ((((~(arr_32 [i_6]))) + 6396885791351998239))));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {
            var_26 = var_0;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    {
                        var_27 += 1;
                        var_28 = -20;
                        arr_45 [i_6] [i_6] [i_11] [i_6] = (min((var_10 - 10209922223215345874), (arr_36 [i_6] [i_6 + 1])));
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
        {
            var_29 = (((((((-2468643022993201559 ? -48 : -126))) == 2499907529)) ? ((min((arr_25 [i_6 - 1] [2]), (35184372088831 > var_8)))) : (((var_11 > (arr_40 [i_6 + 1]))))));
            var_30 = (47 == 537642790);
        }
    }
    #pragma endscop
}
