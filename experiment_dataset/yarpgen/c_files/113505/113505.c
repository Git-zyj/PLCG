/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [11] [i_0] [11] [i_1] [i_0] [i_0] = 5594774963541877229;
                                arr_16 [i_0] [10] [i_2] [i_3 + 1] [i_0 + 2] |= (((arr_7 [12]) ^ (arr_7 [20])));
                                var_20 &= var_16;
                                var_21 = (max(var_21, ((((((-(arr_7 [10])))) ? var_0 : var_14)))));
                            }
                        }
                    }
                    var_22 &= ((((var_0 % (arr_4 [i_1]))) % var_17));
                    var_23 -= (((0 == 55909) + (1266706281 <= 1266706282)));
                    arr_17 [i_0] [i_0] [i_2 + 1] [i_0] = var_7;
                }
                arr_18 [10] [14] [10] |= (min(-1266706281, (max(((~(arr_0 [22] [22]))), (min(var_0, var_11))))));

                /* vectorizable */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    arr_22 [18] [i_0] = ((var_17 || (arr_6 [i_0 - 1] [i_0 + 1])));
                    arr_23 [i_0] [i_0] = var_19;
                }
                /* vectorizable */
                for (int i_6 = 4; i_6 < 20;i_6 += 1)
                {
                    var_24 = var_9;
                    var_25 = -1266706282;
                }
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    arr_29 [i_0] [i_0] [22] [i_7] = var_17;
                    var_26 = (max(var_26, var_13));
                    arr_30 [i_0] [i_0] = -536870912;
                }
            }
        }
    }
    var_27 = (min(var_27, var_4));
    var_28 = var_14;
    #pragma endscop
}
