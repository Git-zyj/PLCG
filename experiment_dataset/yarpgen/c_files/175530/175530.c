/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((min(var_3, ((7944 ? var_17 : 57591))))) ? -var_11 : var_5);
    var_21 = var_10;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_22 = (!1);
        var_23 += (!var_9);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_24 += (max((~var_15), ((max(0, 57591)))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_25 = ((((max(7944, var_8))) || 63));
                            var_26 = (~-5292338656196891019);
                            var_27 = 1935995664;
                            var_28 = (max(var_28, ((((max((min(var_16, var_9)), ((min(var_14, var_17))))) % ((~(max((-127 - 1), 4901638820136099362)))))))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_29 = ((7945 * ((var_9 ? 1152263702 : 0))));
                            var_30 = max((((-2147483647 - 1) ? -54 : 249)), (--7547));
                            arr_21 [i_1] [i_1] [1] [i_1] [11] [i_1] = ((-var_17 ? (((var_19 ? -410653452 : 0))) : (max(var_13, var_6))));
                        }
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            var_31 = (-((-1 ? 1 : -16382)));
                            arr_25 [i_1] [i_4] [i_1 + 1] [2] &= 2019852507;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                {
                    arr_31 [i_1] [i_1] [i_1] = ((~(-69 | 7944)));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_32 = (((max(16336397830052361385, var_16)) / (max(-41, var_12))));
                                arr_36 [i_1] [7] [i_1 - 1] [i_1] [i_1] [i_1] = ((max(8170736185683751730, var_6)));
                                var_33 = var_0;
                                arr_37 [i_1] = (((max(0, 14423659949438844170)) >= (!18446744073709551615)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 9;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 8;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    {
                        arr_48 [i_12 - 2] [i_12] [i_12] [i_12] &= ((((max(2147483647, -5047248817553238988))) ? ((var_10 ? ((var_5 ? 7720227759790482474 : 11332)) : var_17)) : (!-1731710535)));
                        var_34 = var_14;
                        var_35 -= (min(44310, 6327));
                        arr_49 [i_12] [i_12] [i_12 - 1] [i_15] = (min(1, 110));
                    }
                }
            }
        }

        for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
        {
            arr_52 [i_12 - 1] [5] = ((-(0 - var_18)));
            var_36 = ((max(var_14, -54)));
        }
        for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
        {
            arr_55 [i_12] [i_12] = (max((max(var_2, ((var_4 ? var_12 : 0)))), 1));
            var_37 = -var_5;
        }
        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
        {
            var_38 = ((!(!var_1)));
            var_39 = (~-1);
        }
    }
    for (int i_19 = 0; i_19 < 19;i_19 += 1)
    {
        var_40 ^= (~((0 ? var_13 : var_1)));
        arr_62 [12] = ((min(92, var_7)));
        var_41 *= max(var_3, 1);
    }
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        for (int i_21 = 1; i_21 < 11;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                {
                    arr_69 [i_20] = ((max(((1797243904 ? var_7 : var_6)), 55573)));
                    var_42 = ((-((560793474 ? 53514 : 0))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 23;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 23;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 23;i_25 += 1)
            {
                {
                    var_43 = (max(-129, 0));
                    var_44 = 1;
                    var_45 ^= ((((max((~var_13), 0))) ? -1257988598 : (((!((max((-9223372036854775807 - 1), var_4))))))));
                }
            }
        }
    }
    #pragma endscop
}
