/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 ^= ((-(((((var_10 ? 193 : var_4))) ? var_3 : (min(var_6, var_13))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = (var_15 ? -var_4 : ((~(arr_1 [i_0] [16]))));

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_19 = (min(var_19, ((((((1 ? var_12 : 1))) ? ((-(arr_0 [i_0] [i_1]))) : var_1)))));
            arr_4 [1] = (((arr_3 [i_1 + 3] [i_1 - 1]) ? var_1 : (arr_3 [i_1 - 1] [i_1 + 1])));
            var_20 = -var_10;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_21 = ((3252734689665693788 ? (-19210 + 1) : 1));
            var_22 = arr_1 [i_2] [i_0];
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_23 &= -41;
            var_24 = (max(var_24, var_11));
            var_25 = (max(var_25, ((~(-21868 / -82)))));
        }
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = var_5;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] = var_9;
                        var_26 ^= (((arr_12 [i_6] [i_5] [i_0]) ? (~var_3) : (1 / var_3)));
                    }
                }
            }
            arr_21 [i_4] = 4216661345;

            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                arr_24 [i_0] [i_7] [i_0] [i_0] = (arr_0 [i_0] [i_4 - 1]);
                arr_25 [i_0] [i_4 + 1] [i_0] &= (arr_7 [i_7 - 1] [14] [i_7 - 1]);
                var_27 = (arr_1 [i_7] [i_4]);
            }
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                var_28 = (arr_7 [i_0] [i_0] [i_8]);
                var_29 += ((~(arr_3 [i_4] [i_8])));
                var_30 = (max(var_30, -1778561901382399019));
                arr_29 [i_4] = (((((-(arr_23 [i_0] [i_4 - 2] [8] [i_4 - 2])))) ? (arr_26 [i_0] [i_4 + 1] [i_0] [i_8 + 1]) : (((-(arr_16 [i_4] [i_4]))))));
                arr_30 [9] [i_4] [i_0] [i_4 - 1] &= ((var_1 ^ (arr_27 [i_8 + 1] [i_4 - 3] [i_4 - 2] [i_0])));
            }
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            var_31 = (max(var_31, (((var_14 ? (((var_8 ? 160 : -485429702))) : (((arr_35 [i_9]) ? (min(2055339905142631169, var_14)) : ((var_1 ? 2272342181545230500 : 1)))))))));
            arr_37 [i_9] [i_10 - 1] = var_8;
            var_32 += (arr_19 [i_9] [i_10 - 1]);
        }
        var_33 = ((arr_16 [i_9] [i_9]) ? 21867 : (arr_27 [i_9] [i_9] [i_9] [i_9]));
    }
    var_34 = var_5;
    #pragma endscop
}
