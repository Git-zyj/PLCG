/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((-var_16 ? var_13 : (min(98, 100663296))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 -= 223;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_3] [8] [i_2] [i_3] = (((((min((-32767 - 1), 5372591278514036061))) ? (arr_8 [i_4 + 1] [i_0 - 2]) : (min(var_8, -100663296)))));
                                arr_15 [10] [10] [i_2] [16] = -6771297427234576070;
                                var_19 ^= ((((((arr_5 [i_4 + 2] [i_4 + 1] [i_4 + 1]) ^ (arr_9 [i_0 + 1] [i_4 + 2])))) ? ((~(arr_5 [i_4 + 2] [i_4 - 1] [i_4 + 1]))) : (arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                                var_20 += -13;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] = ((min(((-7986 ? (arr_16 [i_5] [i_5 + 1]) : 0)), (!514448587))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_21 = (~(arr_19 [i_5 + 3] [i_5 + 1] [i_5 + 3]));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_22 += 33953;
                            arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= (arr_24 [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 - 1]);
                            var_23 = (arr_23 [22]);
                            var_24 = (min(var_24, ((((13074152795195515555 ? (arr_26 [i_9 + 2] [i_9 + 1] [i_9] [17]) : 25450))))));
                        }
                    }
                }
            }
            arr_30 [i_5] [i_6] [i_6] = (!1154080252);
        }
        var_25 = (min(var_25, 6820315749332866885));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        var_26 = (min(var_26, ((var_15 << (var_1 - 1508993488)))));
        var_27 = (arr_32 [i_10]);
    }
    for (int i_11 = 3; i_11 < 21;i_11 += 1)
    {
        arr_37 [i_11] = (arr_34 [i_11]);
        arr_38 [i_11] [i_11] = (-var_13 > -100663296);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                {
                    var_28 ^= (max(((((min(217, (arr_43 [i_12] [1] [i_12] [i_12])))) ? (!217) : (~4294967281))), var_16));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_29 = (3780518709 & 23282);
                                arr_50 [i_11] = -5754236958604378137;
                                var_30 = ((!((((arr_40 [i_11 - 2] [i_13 - 1]) ? 2485823521261426660 : (arr_41 [i_11] [i_11 - 3]))))));
                                arr_51 [i_11] [i_12] [i_11] [11] [i_11] [i_11] [i_15] = ((((((((arr_44 [i_11 + 4] [22] [16] [22] [i_15]) ? (arr_46 [i_11 + 3] [i_13] [i_14] [i_15]) : var_11))) ? var_9 : (arr_47 [i_11] [i_12] [i_13] [i_11] [i_12]))) << ((var_6 ? (7986 / -1831523527) : (arr_32 [i_12])))));
                            }
                        }
                    }
                    arr_52 [i_11] [i_11] = (min((min((((var_4 ? var_7 : var_10))), ((-(arr_48 [i_11]))))), (arr_41 [i_11] [i_12])));
                    arr_53 [i_11] [i_12] [i_13] [i_13] = (((min(76, (-32767 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
