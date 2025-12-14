/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_2] = (((arr_4 [i_0 + 1] [i_0 + 1] [i_0]) >= (arr_3 [8] [i_0])));
                var_12 = (min(var_12, (((4438573743733611624 ? 4688235203819189405 : -1739960362557800207)))));
                arr_9 [i_0] [i_1] = ((var_8 ? var_2 : -111));
            }
            var_13 = ((var_9 ? -3847561895636251790 : 111));
            arr_10 [i_1] [i_0] &= 113;
            var_14 &= -92;
            arr_11 [i_0] [i_1] = 117;
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_16 [i_3] = (arr_13 [i_3] [i_3 + 4]);
            var_15 = (min(var_15, var_11));
            arr_17 [i_0 + 1] [i_0] [i_3] = var_5;
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                var_16 = (arr_14 [i_4]);

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_26 [i_0 + 1] [i_0] [i_4] [i_4] [2] [i_6] = ((~(arr_24 [i_0] [i_4] [i_5] [i_6])));
                    arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = var_5;
                    arr_28 [i_0] [i_0] [i_4] [i_0] [1] = ((-25769 ? 105 : -95));
                }
            }
            arr_29 [i_4] = ((-(arr_23 [i_0 + 1] [i_0 + 1])));
            arr_30 [i_4] = var_7;
            var_17 = (((arr_20 [i_4] [3] [i_0 + 1]) ? (arr_20 [i_4] [i_0 + 1] [i_0 + 1]) : var_11));
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_18 = (((arr_12 [4]) ? 1 : var_8));
            var_19 = (min(var_19, ((((((var_10 << (((arr_3 [i_0] [i_0]) + 22952))))) ? (~var_7) : (arr_14 [6]))))));
        }
        var_20 &= (--96);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_21 = (max(var_21, (((-(arr_25 [i_8] [i_8] [i_8] [13] [i_8] [i_8]))))));
            var_22 = (max(var_22, (((((var_8 ? var_11 : var_3))) ? ((~(arr_35 [i_9]))) : var_2))));
            var_23 = (arr_1 [i_9]);
            var_24 = 74;
        }
        var_25 = (min(var_25, (((!(arr_14 [6]))))));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_26 = (arr_4 [i_10] [i_10] [i_10]);
        var_27 = (max(var_27, (arr_3 [i_10] [i_10])));
        var_28 = var_7;
    }

    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] = var_11;
        var_29 = ((var_2 ? ((var_3 ? var_9 : (arr_45 [i_11]))) : (((arr_44 [i_11]) ? (var_11 && -115) : var_0))));
        var_30 = (max(var_30, 48));
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_31 = (min(var_31, ((min(114, (arr_44 [i_13]))))));
            var_32 = ((((((((var_10 ? 113 : 9))) ? 90 : -121))) ? -99 : (((-(arr_45 [i_13]))))));
            arr_52 [5] [i_13] = (((var_8 <= (arr_47 [i_13]))) ? (((max((arr_49 [i_12] [i_12]), (arr_49 [i_13] [i_12]))))) : (((arr_44 [i_13]) ? (arr_49 [i_12] [i_13]) : var_5)));
        }
        arr_53 [i_12] [i_12] = ((((max(1779796043, (((var_9 < (arr_48 [i_12]))))))) ? (((((-(arr_45 [4])))) ? var_2 : (8191 & var_5))) : (((((var_11 ? var_4 : var_4))) ? 198 : (arr_48 [i_12])))));
    }
    #pragma endscop
}
