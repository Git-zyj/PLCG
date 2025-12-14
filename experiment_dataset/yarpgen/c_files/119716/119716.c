/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_17 ? (((((var_16 << (var_4 - 221132515))) != (~var_12)))) : (-2147483647 - 1)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (~(~1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_1] [i_1]);

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_19 *= (min((((!(arr_0 [i_3 - 1])))), (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2])));
                        var_20 -= ((-1356041418 - (((!((((-2147483647 - 1) ? 48 : var_11))))))));
                        arr_16 [i_3] [i_1] [i_1] [i_1] [i_1] = (!var_5);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_4] = 1;
                            arr_20 [i_0] [1] [i_0] [i_3] [i_4] = 8372224;
                            arr_21 [i_3] [i_2] [i_2] [i_1] [i_3] = ((!(arr_14 [i_0] [i_3] [i_0] [i_0])));
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 = ((0 | ((0 - (arr_6 [i_0])))));
                        var_22 += -11;
                    }
                }
            }
        }
        var_23 -= (min(var_15, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_24 [i_0] [i_0] = ((((((var_12 + 0) >= (~1016957170)))) << (887480993 - 887480989)));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_28 [i_6] &= (((max((arr_26 [i_6]), (arr_26 [i_6]))) - (arr_26 [i_6])));
        arr_29 [i_6] = arr_26 [i_6];
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        var_24 -= (((arr_30 [2]) | (arr_25 [i_7 + 1])));
        arr_33 [i_7] [i_7] = 0;
        arr_34 [i_7] = (arr_30 [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_40 [i_7] [i_7] [i_7] [i_9] = (arr_26 [i_7]);
                    arr_41 [i_7] = (17 ? (~15) : (arr_36 [1] [i_8]));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_56 [i_10] [i_10] [i_10] [i_10] [i_14] [i_10] = (arr_48 [i_11]);
                                arr_57 [i_10] [i_10] [i_11] [i_11] [i_11] [i_10] &= (arr_44 [i_10 + 2]);
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        var_25 = (min(var_25, -15792));
                        arr_60 [i_15] [i_15] = (((arr_37 [i_10 - 3] [i_10 - 3] [i_10 - 3]) != (arr_25 [i_10 - 3])));
                        var_26 *= ((~(arr_52 [i_12] [i_15])));
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        arr_63 [i_10] [i_10] [i_11] [i_12] [i_12] [i_16] = 1;
                        var_27 = ((7436941528761386828 < (~15795)));
                    }
                    for (int i_17 = 4; i_17 < 11;i_17 += 1)
                    {
                        arr_67 [i_10] [i_10] [i_10] [i_10] [i_17] = 1;
                        arr_68 [i_17 - 1] [i_17] [i_17] [i_10 - 2] = 10716;
                    }
                }
            }
        }
        arr_69 [i_10] = ((+((((arr_58 [i_10] [8]) || 1884055998600528690)))));
        arr_70 [i_10] = (((((22598 << (((arr_64 [i_10 + 3] [12]) - 8993097609424841610))))) ? 3278010125 : (arr_39 [i_10] [i_10] [i_10 - 3] [1])));
        arr_71 [i_10] [i_10] = ((((((arr_47 [i_10] [1] [i_10 + 2]) << (var_4 - 221132474)))) ? -2108414183 : (arr_62 [i_10] [i_10] [i_10 - 3] [i_10])));
    }
    var_28 = (max(var_28, -8));
    var_29 = min((max((var_8 || var_7), (~var_2))), (max(((-4 ? -15792 : 15792)), (!var_17))));
    var_30 = (((((var_14 ? var_4 : -4))) ^ (((-29 + 9223372036854775807) << ((((((966126560 ? var_17 : 1)) + 40)) - 13))))));
    #pragma endscop
}
