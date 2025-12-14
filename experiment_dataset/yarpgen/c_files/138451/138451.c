/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (min(var_19, (~1904503550069482496)));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            var_20 = ((((arr_4 [i_1]) ^ var_7)));
            arr_5 [i_0] [i_0] = (-(((arr_0 [7]) + var_14)));
            var_21 = 5621178273349374830;
            arr_6 [i_0] [i_0] [i_1] = 1904503550069482497;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [9] = min(16, (max(16542240523640069102, 88)));
                            arr_20 [i_5] [i_3] [i_3] [i_2] [i_0] = ((max(((var_3 ? 16 : (arr_1 [i_2] [i_4]))), ((((arr_16 [i_0] [8] [7] [8] [8] [i_0]) < (arr_12 [i_0] [9] [i_3] [9])))))));
                            var_22 = (((arr_8 [i_0]) < (max(var_2, var_18))));
                            var_23 = -8938;
                            arr_21 [i_0] [i_4] [8] [1] [i_0] = ((min((((2243926285 ? -1 : 3955870084))), var_1)));
                        }
                    }
                }
            }
            arr_22 [i_0] [i_2] [9] = var_5;
            arr_23 [i_0] [9] = (((~1904503550069482496) && var_13));
            arr_24 [i_0] = arr_2 [i_2];
        }

        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_29 [i_0] = ((var_8 ? ((-(min((arr_18 [4] [i_0] [11] [11] [4] [i_0]), 6017963714346492031)))) : (((var_6 ? (arr_11 [i_0] [i_0] [i_6] [i_0]) : (arr_18 [i_0] [11] [i_0] [i_0] [i_6] [i_0]))))));
            var_24 = (((1904503550069482496 >= 17) + (arr_26 [i_0])));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_33 [i_0] [0] [i_0] = ((((var_3 ? var_6 : var_5))) ? ((-29 - (arr_13 [i_0] [i_0]))) : ((var_6 ? var_9 : var_1)));
            var_25 = ((((var_13 ? var_17 : var_17)) % 16));
            arr_34 [i_0] = ((!var_6) ? ((var_16 ? -1 : 12428780359363059585)) : (-17 + 16210415247392518704));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            arr_37 [i_0] = ((~(var_10 < var_11)));
            var_26 = ((((~(arr_1 [i_0] [i_0]))) & (~var_14)));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_27 = ((!(((-1 ? -1 : -29244)))));
        var_28 = (!-43);
        var_29 = (min(var_29, (((-16210415247392518704 ? (var_16 % -102) : (~-8146))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_30 = (arr_39 [0]);
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                {
                    arr_48 [i_10] = (((!16210415247392518706) / ((0 ? 111 : -127))));
                    var_31 = (~var_12);
                    arr_49 [9] = ((~(var_8 >= var_1)));
                }
            }
        }
    }
    var_32 ^= ((var_13 ? (min(7621, 33849762)) : ((((~var_0) ? (((-127 - 1) ? 127 : -13551)) : (!var_5))))));
    #pragma endscop
}
