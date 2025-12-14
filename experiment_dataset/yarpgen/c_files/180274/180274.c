/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (!20);
                var_21 ^= var_14;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                arr_10 [i_3] = ((-((((min(65535, var_7))) ? var_6 : var_7))));
                var_22 = (min(var_22, (~17307872495244461870)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_21 [i_4] [i_4] [14] [i_4] [i_5] = ((((var_10 ? var_3 : -65535))) ? ((((((var_14 >= (arr_16 [14])))) == var_15))) : (max(((2 ? var_9 : -103)), 1)));
                                arr_22 [6] [i_5] [i_5] [i_7] [i_8] = (((((max((arr_4 [i_6 + 2] [i_6 - 2]), var_3)))) - -var_16));
                                arr_23 [i_8] [14] [i_6] [0] [0] &= var_4;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_23 &= 25;
                            var_24 -= 31;
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 19;i_13 += 1)
            {
                {
                    arr_35 [i_11] = ((~((-(arr_32 [i_12] [i_13 + 1] [i_13 + 3])))));
                    var_25 = (max(var_25, var_11));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    {
                        var_26 = 0;

                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            var_27 = (max(var_27, var_5));
                            var_28 -= ((((min(3813701981, var_1)) << ((var_0 ? (arr_37 [i_16 - 1] [i_16 - 1] [1]) : 35)))));
                        }

                        for (int i_18 = 1; i_18 < 20;i_18 += 1) /* same iter space */
                        {
                            arr_50 [i_16] [1] [i_15] = 9778;
                            var_29 = (min(var_29, ((max((arr_33 [1] [i_14] [i_14]), (max((arr_47 [1] [11] [11] [11] [i_16] [i_16] [i_18]), var_18)))))));
                        }
                        for (int i_19 = 1; i_19 < 20;i_19 += 1) /* same iter space */
                        {
                            arr_54 [i_16] [i_16] [13] [i_19] [i_19] [1] = ((!((var_3 >= ((((arr_43 [i_19] [9] [i_15] [i_15] [i_11] [i_11]) || var_6)))))));
                            arr_55 [i_11] [i_16] = (!1);
                            arr_56 [i_11] [i_16] [9] [i_11] [i_11] = (max(((((max(-21686, 9778))) ? -32475 : (max(-121, var_7)))), var_11));
                        }
                        for (int i_20 = 3; i_20 < 20;i_20 += 1)
                        {
                            arr_59 [i_16] = (15093838348264042584 / 65535);
                            arr_60 [i_16] [i_16] = ((-(arr_52 [i_11] [2] [1] [i_16] [i_20])));
                            var_30 = (min(var_30, (~-32490)));
                        }
                        arr_61 [21] [10] [i_16] [16] = (min(((min(0, -2))), (min((arr_46 [i_16] [i_15 - 1] [i_16 - 1]), var_17))));
                    }
                }
            }
        }
        var_31 = (max(var_31, ((min(((max(1236944296407466211, (21690 >= -32502)))), (((arr_29 [5] [5]) - (max(32501, var_0)))))))));
        var_32 = (min(var_32, ((max(((((!32517) ? ((var_5 ? var_18 : var_11)) : (var_6 | -1652116365)))), (max(((109 ? var_12 : (arr_45 [i_11] [14] [i_11] [i_11] [9] [i_11] [i_11]))), var_15)))))));
    }
    #pragma endscop
}
