/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_1;
    var_11 ^= (max((((((126 ? -8519871952542191900 : 124)) >= var_6))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (!197);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_13 = 1098169857419664719;
                        var_14 = ((((max(var_3, var_8))) ? var_5 : (var_5 >= var_8)));
                    }
                    for (int i_4 = 4; i_4 < 21;i_4 += 1)
                    {
                        var_15 = (min(23978, var_7));
                        arr_15 [i_0] [i_1] [i_1] [18] = (var_6 ? var_9 : ((((!(!2))))));
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_23 [i_0] [i_5] [i_2] [i_5] [i_5] = var_3;
                            var_16 = (var_8 ? var_2 : var_4);
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_17 = var_1;
                            var_18 = var_3;
                            var_19 -= 197;
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] [i_7] = var_4;
                        }
                        arr_28 [13] [i_5] [i_2] [10] = (((((var_5 ? 0 : 171)) & -126)));
                        var_20 |= 173;
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_1] [i_8] = var_7;
                        var_21 = (max(var_21, (((var_0 ? (((((17798746449115984041 ? var_6 : var_1))) ? var_0 : var_3)) : var_7)))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_22 *= ((min(var_0, ((var_7 ? -31 : 1)))));
                                var_23 &= (var_4 / var_8);
                                var_24 = (min(((2 ? var_8 : var_4)), (((81 ? var_1 : -25)))));
                                arr_38 [i_0] [i_1 + 1] [22] [12] [i_9] &= var_3;
                            }
                        }
                    }
                    var_25 |= (((((var_0 ? var_5 : var_8))) ? (466 > var_3) : var_1));
                }
            }
        }
    }
    var_26 ^= var_7;
    #pragma endscop
}
