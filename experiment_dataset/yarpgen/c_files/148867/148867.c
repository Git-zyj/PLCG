/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 -= ((((max(-89, 4294967294))) ? (min(var_5, (arr_1 [i_0] [i_0]))) : (((min(var_8, var_10))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = 0;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_15 [i_4] [i_2] [i_0] [i_0] = (max(114, ((min((arr_11 [5] [i_1] [i_3 - 1] [i_3 - 1]), (arr_11 [i_0] [i_1] [i_3 - 1] [i_3]))))));
                            arr_16 [i_4 - 1] [i_3] [i_2] [i_1] [i_0] = var_7;
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = var_10;
        arr_18 [i_0] [i_0] = ((((min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_14 [i_0] [i_0] [1] [i_0] [i_0]) : ((max(1, (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_15 = var_6;
        arr_23 [i_5] [i_5] &= ((((max((((var_8 != (arr_20 [i_5] [15])))), (~var_8)))) ? (arr_21 [i_5]) : (arr_20 [i_5] [i_5])));
        var_16 ^= ((~(!var_12)));
        arr_24 [i_5] = var_7;
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        arr_27 [i_6] = (min(var_6, 2434288733));
        arr_28 [i_6] [i_6] = -1136671761;
    }
    var_17 = ((var_2 ? var_4 : ((var_12 ? -var_10 : var_2))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                arr_34 [i_7] [i_7] = (((((1 ? ((1136671761 ? var_4 : 1)) : 0))) ^ ((var_3 ? 1 : (arr_1 [i_8] [i_7])))));
                arr_35 [i_7] [i_8] = var_11;
            }
        }
    }
    var_18 = (max(var_18, var_4));
    #pragma endscop
}
