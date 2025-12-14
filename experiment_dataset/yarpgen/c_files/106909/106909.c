/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [7] [7] = (-1108034079 < 177);
        arr_3 [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = 9223372036854775807;
        var_16 = var_4;
        arr_6 [i_1] [i_1] = (((((var_9 ? 77 : var_5))) ? var_3 : var_1));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_11 [4] |= ((((((((18446744073709551611 ? -1108034079 : -8807))) ? var_4 : var_4))) ? var_2 : ((6695 ? (((var_11 ? -75614626 : -1108034079))) : -8386536382715410242))));
        arr_12 [i_2] [9] = (1467945018 - var_0);
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_21 [i_5] [12] |= (((((var_11 ? var_7 : var_5))) ? ((var_13 ? var_6 : -11)) : var_10));
                    arr_22 [i_3] [i_3] [1] = ((((var_11 ? var_12 : var_2)) + (1 - -102)));
                    var_17 = ((var_4 ? 75614626 : var_5));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = (var_7 == var_13);

                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        arr_33 [1] [i_6] [i_8] [i_3] [i_7] = ((var_3 ? var_2 : var_12));
                        var_19 = var_3;
                        var_20 = (min(var_20, ((((((var_8 ? var_9 : var_13))) ? ((var_0 ? var_0 : 90)) : (((var_7 <= ((8423485455380884323 ? var_10 : 8423485455380884323))))))))));
                        var_21 = ((((((var_0 ? var_1 : -12)) | var_11)) >= var_13));
                        arr_34 [i_3] = 191585017;
                    }
                }
            }
        }
    }
    #pragma endscop
}
