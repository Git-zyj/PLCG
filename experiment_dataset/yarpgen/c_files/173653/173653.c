/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 -= ((((-1008376793000192549 || (arr_0 [i_0])))));
        var_19 = min(11091, ((((max(3684886886700333731, 42072))) ? ((max(var_6, var_12))) : (arr_2 [i_0] [i_0]))));
        arr_3 [1] [1] = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_20 += (((var_15 << (((arr_7 [i_1 + 1]) - 45)))) >= ((-29486 * (arr_7 [i_1 - 1]))));
        arr_8 [i_1] = (arr_4 [i_1] [i_1 - 1]);
        var_21 = var_12;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_3] [i_3] [0] = 9223372036854775807;
                            var_22 = (arr_17 [i_5] [i_2]);
                        }
                    }
                }
                var_23 = ((max(30101, ((var_2 ? var_4 : var_13)))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 = (min(var_24, 1209232816266191868));
                                var_25 = ((!((min(3684886886700333731, (arr_5 [i_2] [i_2]))))));
                                arr_28 [i_2] [i_2] [1] [i_7] [i_7] = ((min((arr_9 [i_8]), 18446744073709551610)));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_9 = 3; i_9 < 14;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_26 = ((!(arr_29 [i_9 + 3] [i_9 + 3] [i_9 + 1])));
                        var_27 = var_12;
                        var_28 = (var_6 > -9223372036854775807);
                        var_29 = (((((-6225840916276433450 / (-9223372036854775807 - 1)))) ? 17134772399462671829 : var_15));
                    }
                    var_30 = (min(var_30, ((1 || (arr_24 [i_9 + 2] [1] [i_9 + 2] [i_9 + 3])))));
                    var_31 = var_9;
                    var_32 = (6225840916276433437 / ((((arr_12 [2] [i_3] [2]) + 1))));
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    arr_37 [i_2] [i_3] [i_2] [i_2] = ((min(47, 3684886886700333754)) <= (((var_14 ? 110 : (arr_13 [i_2])))));
                    var_33 -= ((23458 ? ((max((arr_15 [i_11] [i_2] [i_2] [i_2]), ((var_1 ? var_1 : 1))))) : ((((max(var_8, (arr_11 [i_2] [16])))) ? (((1 ? var_7 : var_6))) : (~var_11)))));
                }
            }
        }
    }
    #pragma endscop
}
