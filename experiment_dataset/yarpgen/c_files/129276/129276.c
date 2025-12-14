/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((var_16 ? var_4 : var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((((-(arr_0 [i_0])))) || ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = var_9;
                    var_19 = 5317;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = var_16;
        arr_13 [i_3] = (((((((max(1, 28)))) + (min(var_1, 17358)))) + (max((arr_5 [i_3]), (((var_7 - (arr_11 [i_3] [10]))))))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_20 = (min(var_20, 3378353582));

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_19 [i_4] = (max(((!(~var_13))), ((!((max(var_16, 24515)))))));
            arr_20 [i_4] [6] = var_7;
            var_21 = (min((((arr_5 [i_4]) + (arr_5 [i_5]))), var_8));
        }
        arr_21 [2] = (((arr_17 [i_4] [i_4]) == (((((arr_5 [i_4]) && (arr_5 [i_4])))))));
    }

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_22 = (max(((0 ? 41021 : var_1)), -255));
        var_23 = ((var_12 && ((min(916613714, 62205)))));

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_24 = var_10;
                arr_30 [i_8] [i_8] [i_6] = (min(-8446, 13583278874295877983));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_25 = 18446744073709551604;
                            arr_38 [i_8] [i_7] = ((((min((arr_33 [i_6] [i_7] [i_8] [i_9] [i_8]), (arr_22 [i_6])))) >> ((((50351 / (arr_22 [i_6]))) - 13))));
                        }
                    }
                }
                arr_39 [i_6] [i_7] [i_8] = (((((~(arr_6 [i_8])))) ? (arr_37 [i_6] [i_7] [i_6]) : (arr_6 [i_6])));
            }
            var_26 = (min(var_26, (arr_31 [i_6] [12] [i_6])));
            var_27 |= ((+(min((arr_29 [i_7] [6]), 5316))));
            arr_40 [i_7] = 0;
        }
        arr_41 [i_6] = 41001;
    }
    #pragma endscop
}
