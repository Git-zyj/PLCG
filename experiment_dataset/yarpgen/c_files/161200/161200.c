/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = (((arr_0 [i_1]) < ((var_12 << (var_14 + 82)))));
            var_16 = 16261;
        }

        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_17 = (11435915844125441995 / var_15);
            var_18 = var_0;
            arr_9 [4] |= var_11;
            arr_10 [i_0] [i_2] [i_0] = (arr_8 [i_0]);
            arr_11 [i_0] [i_0] = var_4;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_23 [i_6] [i_5] [i_0] [i_3] [7] = ((((var_10 ? var_12 : var_6)) + (arr_12 [i_0])));
                            var_19 ^= var_4;
                            var_20 = ((arr_2 [i_4]) | var_13);
                        }

                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_21 ^= (var_1 <= var_5);
                            arr_27 [i_0] [i_7] [i_7] [12] [6] = ((7010828229584109627 ? (arr_25 [i_7] [i_0] [6] [2] [i_0] [i_0]) : (arr_25 [i_3] [i_0] [i_4] [i_3] [i_0] [i_0])));
                            arr_28 [4] [i_0] [i_4] = var_3;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_22 = 11435915844125441995;
                            var_23 = (((arr_5 [i_0] [10] [i_5]) >= ((var_13 ? 8128 : var_3))));
                        }
                    }
                }
            }
            var_24 ^= ((((var_10 ? (-2147483647 - 1) : var_0)) + (arr_24 [i_0] [i_0] [14] [i_0] [i_3])));
            arr_33 [4] &= var_4;
        }
        arr_34 [16] [6] |= (((11435915844125441966 ? (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [10] [4]) : var_10)) % var_6);
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] = var_5;
        var_25 = (min(var_25, ((min((((((((arr_30 [0] [7] [1] [i_9] [i_9] [i_9] [i_9]) ^ 61))) ? ((27361 ? 7 : (arr_6 [i_9] [i_9]))) : 27361))), (arr_25 [i_9] [i_9] [i_9] [14] [6] [i_9]))))));
    }

    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_43 [6] = -5;
        var_26 = var_3;
        arr_44 [i_10] = (((min((arr_39 [i_10]), var_10))) ? var_15 : (var_4 == -5));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_27 = ((((max((arr_16 [5] [i_11] [i_11]), var_15))) ^ (max(var_14, var_2))));
        arr_47 [i_11] = (arr_45 [7]);
        arr_48 [i_11] |= var_5;
    }
    var_28 = ((var_8 ? var_9 : ((((((var_14 ? var_14 : 7049773894532451059))) >= ((var_10 ? var_2 : 0)))))));
    var_29 |= ((var_9 ? var_13 : var_11));
    #pragma endscop
}
