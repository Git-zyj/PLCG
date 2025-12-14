/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_12 = (!105);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = var_6;
                    var_13 = min((!-105), ((~(~var_10))));
                }
            }
        }
        var_14 = (arr_1 [i_0 - 3]);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_13 [0] [i_3] &= ((~(max(((var_10 ? var_0 : (arr_12 [i_3] [i_3]))), (-104 / var_10)))));
        var_15 = (~24165);
        var_16 -= ((((((max(0, 24165))) ? 7 : -120)) * ((max(((var_4 ? 24648 : (arr_10 [i_3] [i_3]))), var_7)))));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_17 [i_4] [i_4] [i_3] = (((((~((~(arr_11 [i_3])))))) ^ (((((arr_11 [6]) > 177)) ? var_2 : var_8))));
            var_17 -= ((-((var_3 ? var_10 : (arr_16 [i_4] [i_3])))));
            var_18 *= (max(4, (arr_14 [i_3] [i_4] [i_4])));
            var_19 = (((((var_7 ? var_0 : var_2))) ? (((arr_12 [i_4] [i_3]) ? (arr_12 [i_3] [i_4]) : (arr_14 [i_3] [11] [i_4]))) : ((((!(arr_12 [i_3] [i_4])))))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_20 = (((-(arr_14 [i_3] [i_3] [i_5]))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_21 *= var_4;
                        var_22 = var_0;
                    }
                }
            }
        }
        var_23 = ((-(42 % 1775344326)));
    }
    #pragma endscop
}
