/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-1792054585 / var_4) - var_1))) ? var_6 : (-var_8 <= var_6));
    var_15 = -1073803480;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((~(((!(arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] |= (((arr_1 [i_0]) || (((var_9 % (arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1 - 1] = var_9;
        var_17 = (max((((arr_0 [i_1 + 2] [i_1 + 2]) ? (arr_5 [i_1 + 1] [i_1 + 1]) : (arr_5 [i_1 - 2] [i_1 - 2]))), ((var_13 ? (arr_5 [i_1 + 1] [i_1 - 1]) : var_4))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_18 = ((~((2814959667 >> (1792054584 - 1792054571)))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_3] [i_4] |= (arr_13 [i_4] [i_3] [i_3] [i_2] [i_1 + 2]);
                        var_19 = 25;
                        arr_17 [i_1] [4] [4] [i_1] [2] = ((!((((arr_2 [i_4] [i_4]) ? var_7 : 87)))));
                    }
                }
            }
            var_20 = -100;
        }
        arr_18 [i_1 - 2] |= ((((((-578738698 ? var_4 : var_10)))) == var_1));
    }
    var_21 = ((var_6 ? var_6 : var_3));
    var_22 = var_3;
    #pragma endscop
}
