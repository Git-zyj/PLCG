/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_13 -= ((((((arr_0 [i_3 + 1]) != (arr_0 [i_3 - 1])))) == ((var_10 ? 7765 : 7766))));
                            var_14 = (!(((var_1 ? (arr_6 [i_0] [i_0]) : (arr_6 [i_0] [i_0])))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_15 = -var_5;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_16 = 59202;
                                arr_17 [i_5] [i_1] [i_0] [i_5] [i_6] [i_4] = (max(((((arr_13 [i_6 + 2] [i_6 + 2] [i_6 - 2]) != (-32767 - 1)))), var_11));
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] = 879935409;
                    var_17 &= ((((arr_12 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? 33824 : 25395)));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_18 = ((((((((arr_1 [i_0]) ? -1 : -8367))) && 274877906943)) ? 7022207501597532081 : ((((var_5 && (((12378896195378830445 ? var_7 : (arr_20 [i_7]))))))))));
                        var_19 = (((((-83 - (arr_1 [i_1 + 1])))) + ((54 - (min(var_11, 19))))));
                        arr_25 [i_8] [i_7] = 2147483647;
                        var_20 = (min(0, (-78 && 7765)));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_21 -= ((-(((((-(arr_22 [i_0] [i_0] [i_0] [i_0])))) ? var_10 : ((32738 ? -32763 : (arr_20 [i_9])))))));
                                arr_30 [i_0] [i_1] [i_7] [i_9] [i_10] = (max(((max(1714705674, (arr_28 [i_0] [i_1] [i_9] [i_10])))), (arr_22 [i_0] [i_1] [i_1] [i_9])));
                                arr_31 [i_0] [i_9] = (~-1);
                                var_22 = (min(var_22, ((~(arr_22 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    arr_35 [i_1] [i_1] = var_1;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_23 |= var_8;
                                var_24 = (min(var_8, 27));
                            }
                        }
                    }
                }
                arr_42 [i_0] [i_1 + 1] = (-2147483647 - 1);
                arr_43 [i_0] = (((var_4 && (arr_37 [i_1] [i_1 + 1] [i_1 - 1] [i_0]))));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 8;i_16 += 1)
                        {
                            {
                                var_25 |= (((min(var_4, (arr_7 [i_16 - 1] [i_16 + 1] [i_16 - 4])))) ? (var_11 < 59209) : -1714705674);
                                var_26 = (~68);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                {
                    var_27 = (((((arr_57 [i_18] [i_18]) ? (((-32767 - 1) & (arr_59 [i_18] [i_18] [i_19]))) : 4606291173101174442)) >> (((var_0 <= (arr_57 [i_19] [i_17]))))));
                    var_28 = (min(var_28, var_8));
                }
            }
        }
    }
    #pragma endscop
}
