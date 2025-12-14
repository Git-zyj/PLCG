/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = var_7;
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((min((arr_0 [i_1]), var_3)));
        var_19 = (min((((var_7 ? (arr_5 [i_1]) : 1))), (min(12941170911768634543, var_13))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 -= (((var_11 ^ -22316) & ((var_5 ? (((arr_10 [i_2] [i_3]) & -22316)) : ((56 >> (var_11 - 3515351736562152283)))))));
                    var_21 ^= ((~(((((var_3 >> (var_1 + 1695)))) ? ((var_2 & (arr_9 [i_1] [i_1] [i_1]))) : ((8387584 ? var_16 : -22316))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = ((((arr_13 [i_4]) ? (arr_13 [i_4]) : (arr_13 [i_4]))));
        var_23 = (max(var_23, (((~(min(((22298 ? var_15 : (arr_14 [i_4] [i_4]))), (((arr_14 [i_4] [i_4]) & var_17)))))))));
        var_24 ^= ((((53715592 * (16686077988722980859 - -22315))) + (((-13498 + 9601862333401070863) * (((arr_14 [i_4] [i_4]) - var_17))))));
        arr_15 [3] [i_4] = (max(((((0 ? var_8 : 28421)))), ((((min(var_2, var_0))) ? ((((!(arr_14 [9] [i_4]))))) : (min(765594039, var_4))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_20 [i_5] [i_5] &= ((4038736157913445317 && (11290908710787071008 / var_11)));
        var_25 = (min(var_25, ((-28437 && (arr_19 [i_5 - 1])))));
        arr_21 [i_5] [i_5 + 3] = (var_16 ^ var_5);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_26 = ((4038736157913445316 >> (4038736157913445297 - 4038736157913445243)));

                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        var_27 = (~3114408957539996221);
                        var_28 = (arr_22 [i_5 + 4] [i_5]);
                        var_29 ^= (((arr_22 [i_5 - 1] [i_5 - 1]) - var_5));
                        arr_32 [i_7] [i_6] [i_7] [i_8] = var_15;
                    }
                    var_30 = (max(var_30, (((~(var_11 & 28437))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_38 [i_7] = ((var_0 ^ ((9223369837831520256 ? var_14 : var_13))));
                                arr_39 [i_5] [i_7] [i_7] [23] [i_10] = 13489;
                                arr_40 [i_7] [i_7] [i_7] [15] [i_7] = 38371;
                                arr_41 [i_7] = ((~((-1593794586091008085 ? var_6 : 21915))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_49 [i_5] [i_5] [i_7] [i_12] = ((112 ? 16383 : 118));
                                arr_50 [i_5] [i_7] [i_7] = ((-(arr_35 [i_5 - 1] [i_11 + 1] [i_7] [i_7] [i_12])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 &= var_15;
    var_32 = ((((((max(var_11, -9223369837831520256)) ^ (0 ^ 1196293180)))) ? (4095 && 18014398492704768) : (min(var_7, (var_4 && 4135122391110059768)))));
    var_33 = ((-121 ? 14408007915796106300 : ((((min(var_14, 23599))) ? var_2 : ((max(131, var_5)))))));
    #pragma endscop
}
