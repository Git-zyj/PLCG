/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 *= 1;
                    var_21 = min((min((((var_3 ? 0 : 589605954))), (min(var_3, var_7)))), (((-((-589605954 ? var_0 : (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    var_22 = ((!(((((-589605955 ? -7 : -589605954)) % var_9)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] [i_3] [i_4] = (((55696 + -589605955) ? -589605955 : (arr_4 [i_0 + 1])));
                                arr_14 [i_2] [i_2] [i_3] = ((var_4 ? 13729280033090078466 : (((var_11 ? var_5 : -32)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (var_6 * var_11);
    var_24 = ((-(4717464040619473169 <= 13729280033090078448)));

    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = ((((arr_15 [i_5]) ? (((arr_17 [i_5]) ? 4717464040619473149 : 0)) : (((var_12 ? -589605951 : -11347))))));
        arr_20 [i_5] [i_5] = var_6;

        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            var_25 *= (((((((arr_15 [i_5]) / (arr_18 [15])))) ? var_9 : (((589605951 ? 589605953 : 1))))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_36 [i_7] [11] [i_7] = (((arr_34 [i_5] [i_7]) ? ((min((min(-589605955, 589605954)), var_15))) : (min(-19, (arr_32 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])))));
                            arr_37 [i_6] [i_7] = (min((((13729280033090078466 * -1) ? (min(589605972, 589605953)) : (arr_18 [i_9]))), (min(var_5, -589605954))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_26 = ((((arr_35 [12] [i_5 + 1] [i_10] [1] [i_10]) ? (arr_35 [11] [i_5 - 1] [i_10] [i_10 - 1] [13]) : -589605954)));
            var_27 = (max(var_27, (arr_25 [i_5])));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_28 = (max(var_28, -109));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    {
                        arr_48 [i_12] &= ((((arr_24 [i_13]) ? 2031371486 : (max((arr_15 [i_5]), var_10)))) == (arr_21 [i_5]));
                        arr_49 [i_5] [i_5] [i_11] [i_5] &= 1;
                        var_29 = (min(var_12, ((var_15 ? 8301268531952776711 : (arr_35 [i_5] [i_11] [i_13] [i_13] [i_5 + 2])))));
                    }
                }
            }
            arr_50 [i_5] = (((-589605968 ? ((min(-76, var_10))) : ((((arr_35 [i_5] [i_5] [i_11] [i_11] [i_11]) > var_9))))) == (min((arr_44 [i_5] [9] [i_5] [i_11]), (((arr_46 [i_5] [i_5 + 2] [i_11] [i_11] [i_11]) ? var_4 : -4)))));
        }
        arr_51 [i_5] = var_12;
    }
    for (int i_14 = 1; i_14 < 14;i_14 += 1) /* same iter space */
    {
        var_30 = ((((arr_17 [i_14 + 1]) < -589605954)));
        arr_54 [8] |= min((arr_38 [3]), (min(-1, 0)));
    }
    for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
    {
        arr_58 [i_15] = -1;
        var_31 += (arr_23 [i_15] [i_15]);
        arr_59 [i_15] = -21;
    }
    var_32 = (max(var_32, ((589605953 ? 64 : 1265710334))));
    #pragma endscop
}
