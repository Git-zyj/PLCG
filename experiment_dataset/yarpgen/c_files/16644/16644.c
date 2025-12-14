/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-2147483647 - 1) ? (!49) : 29));
    var_13 = ((252 + (((1 | 63477) ? var_4 : var_7))));
    var_14 = (min(var_14, (((~(-2147483647 - 1))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [i_1] [i_0 - 2] = 106;
                var_15 = ((10887010731565629690 ? (arr_1 [i_0 - 1]) : 30163));
                var_16 = 0;
                arr_7 [i_0 + 2] [i_1] = (((926212134665163023 ? 2451518786 : 30163)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_4] [i_3] [16] = (10887010731565629690 - 2147483647);
                    arr_16 [i_2] = ((2012515468 & (arr_13 [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_23 [i_5] [14] [10] [i_5] = ((~(arr_8 [i_3])));
                                arr_24 [i_5] = (-(arr_14 [i_2] [20]));
                                arr_25 [i_5] [i_3] [i_3] = (~55);
                                arr_26 [i_5] [i_6] [2] [i_4 - 1] [i_3] [i_5] = 65535;
                                arr_27 [i_6] [i_5] [i_5] [i_3 + 2] [i_2] = ((7789314758220742913 ? 10887010731565629684 : 1957));
                            }
                        }
                    }
                    var_17 = (min(var_17, (arr_11 [i_2] [i_3])));

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_18 += (arr_12 [i_4 - 1] [i_4] [i_7]);
                        arr_31 [i_2] [i_2] [i_3] [i_4] [4] = 3072;
                    }
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_19 = (((((~((-72 ? 274874760 : -61))))) ? (arr_36 [i_2]) : var_7));
                                arr_40 [i_2] [i_3] [i_8 - 1] [i_9 - 1] [i_10 + 1] = 1;
                            }
                        }
                    }
                    arr_41 [i_3] [i_8] [i_8 - 1] = 1609142953;
                }
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_49 [i_2] [i_3] [i_11 + 2] [i_11] [i_13] = ((5721116410479873447 ? var_3 : (((max(var_9, (arr_42 [i_11] [i_3 - 1] [i_3] [i_11])))))));
                                arr_50 [i_2] [i_11 + 3] [i_12] [i_11] = (arr_22 [i_2] [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
