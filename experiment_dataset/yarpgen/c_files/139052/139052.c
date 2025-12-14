/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = -6550450948551171198;
                var_21 = ((6550450948551171198 ? (arr_0 [i_0]) : 25165824));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        var_22 |= ((~(arr_2 [i_2 + 2] [i_2 + 1])));
        var_23 = ((-6550450948551171184 ? (!6) : var_15));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_9 [i_3] = (arr_7 [2]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_24 ^= (arr_7 [i_4]);
                        arr_18 [i_3] [8] [8] [i_5 - 2] [i_6] = (((~(((118 || (arr_6 [i_4])))))));
                        arr_19 [i_3] [i_3] [5] [i_4] [i_5] [12] = (max(-1, -6550450948551171198));
                        var_25 = (-5201232374951354997 - 237488055);
                    }
                }
            }
        }
        arr_20 [8] [8] = var_7;
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_23 [i_7] [i_7] = var_15;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_26 ^= var_13;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_27 = (max(var_27, (128 < 0)));
                                var_28 *= (((((!(arr_28 [16] [i_9] [i_7]))))) < ((-(-28375 * var_2))));
                                var_29 = (arr_33 [i_7] [i_8] [i_7] [i_8] [i_10] [i_11]);
                                var_30 = (min(var_30, (((-1 | var_2) >> (((arr_33 [i_7] [i_7] [i_8] [i_9] [i_10] [i_11]) ? (arr_33 [i_7] [i_7] [i_8] [i_9] [i_10] [1]) : 0))))));
                                arr_34 [i_8] [i_8] [i_8] [20] [5] = var_2;
                            }
                        }
                    }
                    var_31 *= ((-1 ? var_8 : (arr_32 [i_7] [i_8] [1] [i_7])));
                }
            }
        }
        var_32 = ((-(((arr_24 [i_7]) ? var_19 : (arr_25 [i_7] [2] [i_7])))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_33 *= var_13;
        arr_37 [i_12] = 18446744073709551605;
    }
    var_34 = -1499548958;
    #pragma endscop
}
