/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [8] [i_1] [i_4] [i_4] = ((((~70360154243072) ? 31 : 38)));
                                arr_16 [i_0] [i_1] [i_0] = ((~((max(19, -24050)))));
                                var_16 = ((var_7 ? (((var_0 && (32746 >= -38)))) : (var_13 && 19390)));
                                var_17 = ((-(max(67, (min(63, 254))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] = ((1 ? 219 : 246));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_20 [i_1] [i_0] = var_14;

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_24 [i_0] [16] [i_5] [i_0] = var_5;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] = -38;
                            arr_28 [9] [i_1] [i_0] [12] [i_1] = (var_6 / var_9);
                            var_18 = (min(var_18, (219 + 255)));
                            arr_29 [i_1] [i_1] [i_6] [i_6] &= (241 <= var_12);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_32 [i_0] = ((1 ? 24 : -67));
                            var_19 = (var_12 < var_14);
                            arr_33 [i_0] [i_0] [i_6] [i_8] = (!var_5);
                            var_20 = (~-248518462933450663);
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            arr_36 [i_0] [i_5] [i_9 + 2] = var_2;
                            arr_37 [i_0] [i_0] [i_5] [i_6] [i_9] = 1;
                        }
                        arr_38 [i_0] [i_0] [i_6] &= (((((248 ? 38 : 1))) || var_10));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_21 -= -49;
                        var_22 = (min(var_14, var_10));
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 23;i_11 += 1)
                    {

                        for (int i_12 = 4; i_12 < 23;i_12 += 1)
                        {
                            var_23 = (1 < 38);
                            arr_48 [i_0] [i_1] [20] [i_5] [i_1] [i_0] = ((-38 ? var_11 : var_14));
                        }
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            var_24 = (!(var_6 & 85));
                            arr_53 [i_0] [i_0] [20] [19] [i_11] [i_5] [i_0] = ((8293187980270578052 ? 4121751528987719704 : (-127 - 1)));
                            arr_54 [i_0] [i_0] [i_5] [i_0] [i_13] = var_1;
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_25 = 0;
                            var_26 &= -2521621954265367431;
                            arr_58 [i_0] [i_0] [i_0] [i_0] [21] [i_0] [i_0] = -40;
                            arr_59 [i_0] [i_1] [i_14] [i_11] [i_0] = ((~(((-36 + 2147483647) << (2097151 - 2097151)))));
                        }
                        var_27 = ((14336 << (41 - 35)));
                        var_28 ^= (var_13 ? -1 : var_9);
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_29 = -917615217364356074;
                        arr_62 [i_5] [i_1] [7] [23] [i_0] [i_0] = var_5;
                        arr_63 [i_0] [i_0] = ((var_10 << (var_2 - 19747)));
                        arr_64 [i_5] [i_5] [i_5] [i_0] = var_2;

                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            arr_68 [i_0] [i_0] [i_0] [6] [i_0] = ((var_5 >> (-5144814048156067850 + 5144814048156067858)));
                            var_30 = var_10;
                        }
                    }
                }
                arr_69 [i_0] [4] [i_0] = (((((var_10 ? -67 : 51199))) || (((var_11 ? var_14 : var_9)))));
                arr_70 [i_0] = var_12;
            }
        }
    }
    var_31 &= (19554 << 1);
    #pragma endscop
}
