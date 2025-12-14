/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-8, 577164559));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_21 -= (min(((((((1 >= (arr_3 [i_0] [1] [1]))))) - (min((arr_3 [10] [16] [16]), (arr_2 [i_0]))))), (((((var_7 ? var_3 : (arr_0 [i_0]))) < (arr_4 [8] [8]))))));
                arr_5 [i_1] [i_1] = (20 > 0);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = (min(var_22, (--7194)));
                            var_23 = -2042339404;
                            var_24 = (-21518 ? 46 : -1275227696);
                            arr_11 [i_0] [i_1] [i_1] [i_1] = var_1;
                        }
                    }
                }
                var_25 = 3282;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_26 = ((var_9 == (((3304142698 ? (var_5 >= var_11) : 20664)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_23 [i_4] [7] [i_5 - 3] [i_4] [i_7] [i_8] = (((arr_0 [13]) ? (((~var_9) ? ((~(arr_18 [i_8] [i_7] [1] [i_4]))) : 63)) : (((var_14 & -972702107) ? ((min(-1, -1))) : (arr_0 [i_4 - 2])))));
                                var_27 = 255;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_30 [i_4 - 3] [i_5 - 1] [i_6] [i_6] &= ((-(max((arr_10 [i_5 + 1] [i_4] [i_4 + 1] [i_4]), ((~(arr_14 [i_4] [i_5])))))));
                                var_28 = (((((-(var_14 % -29925)))) ? 0 : 13176));
                                arr_31 [i_4 - 4] [8] [i_6] [i_9] [i_10] = ((11938038271156043158 % (((((-48 ? var_4 : (arr_21 [i_4] [i_4] [i_4] [i_4])))) ? var_13 : 240))));
                                arr_32 [i_4] [i_5] [i_6] [6] [i_10] [i_10] [i_9] = (var_11 * ((~(arr_0 [i_5 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
