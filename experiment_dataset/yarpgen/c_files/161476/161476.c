/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((~((-(arr_0 [i_0 - 1] [5])))))) ? 3224378466 : (((~(arr_4 [i_0] [5]))))));
                arr_7 [i_0] = -19;
                var_16 = (arr_3 [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_17 = (arr_8 [i_2]);
        arr_12 [i_2] = ((((-(min(18446744073709551615, -10)))) | (((~(((arr_9 [i_2]) ? var_7 : -19)))))));
        var_18 -= (8384512 << 38);
        var_19 = ((((((arr_9 [i_2]) ? (arr_10 [i_2]) : (arr_9 [i_2])))) ? 238 : (min(339380521553407358, (arr_11 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_15 [i_3] &= (arr_9 [9]);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = ((((((max(6917529027641081856, 159))) ? (arr_14 [i_5 + 2]) : (!2047))) / 1501146280));
                    arr_22 [i_5] [i_4] [i_4] [i_3] = (min(var_0, (((-2300117735387647025 >= (((11529215046068469760 ? 238 : 63480))))))));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        arr_27 [i_3] [i_4] [i_4] [i_6] = var_15;
                        var_21 = (((arr_10 [i_4 - 1]) <= (arr_10 [i_4 - 1])));
                        arr_28 [i_3] [i_4] = 45;
                    }
                    arr_29 [i_3] [i_4] [i_4] = (arr_25 [i_3] [i_3] [i_3] [i_3]);
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_22 = 54846;
        arr_34 [i_7] = (max(87682714864266234, 30));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_38 [i_8] = var_2;
        arr_39 [i_8] = arr_35 [i_8] [i_8];
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_43 [i_9] [19] = -2582163455718502764;
        var_23 = var_7;
    }
    var_24 = (min(var_24, var_6));
    #pragma endscop
}
