/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (max(var_16, (arr_3 [i_0] [i_0])));
            arr_5 [i_1] = var_15;
            arr_6 [15] = ((~((~(arr_2 [i_1])))));
        }
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = ((((var_15 ? (arr_0 [i_0]) : (((min(var_15, var_5)))))) << (arr_4 [i_2] [i_2] [i_0])));
            var_17 = (arr_4 [1] [4] [1]);
            var_18 = ((-(((((1 ? 1 : -696558629981308682))) ? ((max(9, 7))) : (arr_1 [i_0 - 1] [i_0 - 1])))));
            arr_10 [i_0] [i_2 - 2] = (-(max((arr_8 [i_0 - 1] [i_0 - 1] [i_2 - 2]), (arr_8 [i_0 + 2] [i_2 - 3] [i_2 - 4]))));
        }
        arr_11 [8] = ((var_4 ? var_10 : (((((min(var_4, var_8))) == var_2)))));
        arr_12 [i_0] = var_5;
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 -= -var_1;
        var_20 *= (--65527);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 &= var_10;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_4] = (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_8] = 1;
                            var_22 = (max(var_22, var_5));
                            arr_30 [i_4] = ((((var_3 ? 65521 : var_8)) + ((+(((arr_15 [11]) ? var_11 : var_11))))));
                        }
                    }
                    arr_31 [i_5] [8] [14] |= 65519;
                }
            }
        }
        arr_32 [i_4] [i_4] = (((((arr_24 [i_4] [i_4] [i_4]) != 18)) ? (((var_3 || var_10) ? -var_9 : (~var_9))) : ((min(var_3, (arr_20 [i_4] [i_4] [i_4]))))));
        var_23 = ((max(((1 ? 57 : 18)), var_2)));
    }
    #pragma endscop
}
