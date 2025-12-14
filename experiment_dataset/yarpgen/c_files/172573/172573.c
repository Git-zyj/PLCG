/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 -= (1 && 1772737132);
                        arr_9 [1] [i_3] [i_2] [i_0] [i_0] = -var_0;
                        var_20 *= (arr_8 [i_0] [i_3] [i_0] [i_3] [i_3]);
                    }
                }
            }
        }
        var_21 = (min(var_21, (arr_6 [i_0] [i_0] [i_0] [i_0])));
        arr_10 [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 = ((((((!((((arr_17 [i_4] [i_5] [13] [i_7]) * (arr_5 [i_5] [i_6] [i_7])))))))) == ((-(arr_11 [i_4])))));
                        var_23 ^= ((((var_5 ? var_9 : (arr_0 [i_4] [i_5])))));
                    }
                }
            }
        }
        arr_20 [i_4] [i_4] = (arr_13 [i_4]);
        arr_21 [i_4] = (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]);
        arr_22 [i_4] = (arr_0 [i_4] [i_4]);
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] = ((arr_14 [i_8] [i_8] [1]) ? (!var_15) : var_10);
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_24 ^= (arr_6 [i_11] [i_11] [i_11] [6]);
                        arr_33 [i_8] [i_8] = ((~(arr_14 [i_9 + 1] [i_10 - 1] [i_11])));
                        var_25 = (min(var_25, (arr_31 [i_8] [i_10] [i_8] [i_8])));
                        arr_34 [i_8] [i_8] [i_9] [i_10] [i_11] = var_16;
                    }
                }
            }
        }
        var_26 = ((-(((arr_13 [i_8]) ? (arr_13 [i_8]) : (arr_13 [i_8])))));
    }
    var_27 += var_14;
    /* LoopNest 3 */
    for (int i_12 = 4; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                {
                    arr_45 [i_12] [i_12 - 3] [i_12 - 3] = ((~((~((var_1 ? var_12 : (arr_38 [4] [i_13])))))));
                    arr_46 [i_12] [17] [17] = ((!(((-(~var_13))))));
                    arr_47 [i_12] = (arr_1 [i_12 - 4] [i_13]);
                    var_28 = (max(var_28, ((((-var_15 + 2147483647) >> (arr_42 [i_14]))))));
                }
            }
        }
    }
    var_29 = ((max(var_5, (1 * -1))));
    var_30 = (~(!var_10));
    #pragma endscop
}
