/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [12] = (~-13);
        arr_5 [i_0] [1] |= ((((-157933094533184006 ? (arr_1 [i_0]) : (arr_3 [i_0]))) | (arr_3 [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_12 [i_2] = -10802;
                    arr_13 [i_0] = (((((-2068623492 ? var_10 : (arr_9 [8] [9])))) ? (~var_12) : (arr_11 [i_0] [i_1 + 1] [i_2] [i_0])));
                    arr_14 [i_1] = (((((-(arr_10 [i_2] [i_1])))) ? ((((arr_8 [i_0] [i_0] [i_0] [i_0]) / (arr_2 [i_1 + 2] [i_0])))) : var_3));
                    arr_15 [i_0] [i_0] [i_0] |= ((-17050 ? (2147483647 | -1) : -1));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        arr_20 [i_3 - 1] = (arr_3 [i_3]);
        arr_21 [i_3] [i_3] = -1;
    }
    var_16 = (min(((((!-10785) % var_2))), var_13));
    var_17 &= var_2;
    var_18 &= var_13;
    #pragma endscop
}
