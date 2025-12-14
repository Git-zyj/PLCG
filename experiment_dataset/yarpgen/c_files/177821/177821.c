/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = 1;
            var_19 = (min(var_19, (((((10 ? 0 : 17)) >> (28249 - 28236))))));
        }
        var_20 = (max(var_20, (((~((((16 > 14590) && (arr_0 [i_0])))))))));
        var_21 = ((+(((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_22 = ((min(var_6, ((18 ^ (arr_9 [i_2] [7] [i_2]))))));
                        var_23 = (((((min(var_18, 8411))) ? (arr_3 [i_2] [i_4]) : ((4095 ? 255 : var_12)))));
                        var_24 = 35;
                    }
                }
            }
        }
        arr_15 [i_2] = var_3;
        var_25 = (arr_8 [i_2] [i_2] [i_2]);

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_26 ^= (((((51 ? -86 : 0))) ? (((min((arr_4 [i_6] [i_2]), 7)))) : (max(var_17, (arr_11 [i_6] [i_6] [i_2] [i_2])))));
            var_27 ^= (--4294967279);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_21 [i_2] = var_4;
            var_28 = var_11;
            arr_22 [i_2] = ((((4294967294 && (arr_4 [i_2] [i_7])))));
            var_29 = (max(var_29, (((-(((arr_20 [1] [i_2]) ? (arr_20 [1] [i_7]) : 17)))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    {
                        var_30 = (((!171) ? var_14 : -111));
                        var_31 ^= 4294967290;
                        var_32 -= ((((arr_27 [i_9 - 2] [i_9] [i_9 - 1] [i_9] [i_9 + 3] [i_2]) / var_3)));
                        var_33 = (~var_18);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_34 = ((((((arr_28 [i_10]) ? (arr_28 [i_10]) : var_11))) && ((((arr_28 [i_10]) ? -95 : -8)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_35 |= ((-(((~15) ? (arr_30 [i_10]) : (min(10, 5))))));
                                var_36 = (arr_32 [5]);
                                var_37 = (min((((~(arr_30 [i_13])))), 18));
                                arr_42 [i_10] [i_12] [i_10] [i_10] [i_14] = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                var_38 = 2759;
                                var_39 = (((((arr_45 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) ? 7 : (arr_38 [i_10]))) * (((var_16 ? var_0 : 10)))));
                                var_40 = (min((max(((min(var_16, (arr_43 [i_10] [i_11] [i_12] [i_15] [10])))), ((3471650084 ? (arr_30 [i_15]) : (arr_35 [i_10] [i_11] [i_12] [1]))))), -119));
                                var_41 = ((-((-111 ? 1 : 2147483647))));
                                arr_48 [i_10] [i_10] [11] [i_10] [i_12] [i_10] [i_10] = ((-((255 ? 25 : (arr_47 [i_10] [i_15])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_42 = 117;
    #pragma endscop
}
