/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (max(21140, ((max(var_10, 25375)))));
                                arr_16 [i_0] [i_0] [i_0] [i_2] = ((min((var_12 < 25359), 1)));
                                arr_17 [i_2] [i_1] [i_1] = (((min(0, -20260))) | ((max((7839 != -8), (1 ^ 100)))));
                                var_19 = (min(var_19, -29944));
                                var_20 = (min(32767, 100));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_2] = ((29944 ? 1 : -29944));
                                var_21 = 65535;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(1125898833100800, 1));
    var_23 = ((31 || ((min(1, -32762)))));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_27 [i_7] &= (var_9 * var_13);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        arr_37 [i_8] [i_9] [i_7] [i_8] = ((-2 >= (!12)));
                        var_24 = 92;
                        arr_38 [i_8] [i_8] [i_8] [i_8] = var_16;
                        var_25 += -1;
                        arr_39 [i_7] [i_8] [i_8] [i_7] = (1 / 87);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_26 = -9129;
                            arr_52 [i_7] [i_11] [i_13] [i_13] = (1 || -10);
                            var_27 = (-32765 ^ var_11);
                        }
                        var_28 = (max(var_28, (0 <= 1859239414)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                {
                    var_29 = (min(var_29, ((((1 >= 1) ? 1 : (var_5 || var_15))))));
                    arr_61 [i_7] [i_7] [i_7] [i_16] |= 1462000861509146816;
                    var_30 = var_12;
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        arr_65 [i_17] = ((((max(640380479, (var_11 > 31)))) ? (min((min(2508923156016690204, 1)), (~var_8))) : (var_3 != 0)));
        var_31 = -3846454452871643827;
        var_32 &= (min(1078461335, 1));
    }
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        var_33 += (min(1, (12133981648796076816 / 1)));
        var_34 *= var_6;
    }
    #pragma endscop
}
