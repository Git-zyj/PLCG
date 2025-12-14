/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 += (((+-1449649214505357704) ? var_4 : (((1 ? 1 : 1)))));
    var_19 = var_9;
    var_20 = var_12;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((min((!var_11), (max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0 + 2]))))));
        arr_5 [i_0] [6] &= (min(1, ((1 ? 59978 : (-127 - 1)))));
        var_21 = (max(2032, 10));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_22 = (max(var_22, ((((arr_7 [4]) ? (((var_14 + 2147483647) >> (147 - 121))) : (arr_7 [0]))))));
        arr_8 [i_1] = (arr_7 [i_1]);
        var_23 = ((-(2092878843 + var_15)));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        var_24 = (max(var_24, ((((((var_16 ? (arr_10 [i_2 + 1]) : (arr_9 [i_2 - 3] [4])))) ? -1721949150 : 1)))));
        arr_13 [8] &= (!var_0);
        var_25 = var_15;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_17 [i_3] = (arr_10 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    var_26 += var_16;
                    arr_23 [i_3] [1] [i_4] [1] = 120;
                    var_27 = (((arr_20 [i_4 + 1] [i_4 + 1] [i_4 - 1]) ? (arr_20 [i_5 + 1] [i_4] [i_4 - 1]) : ((~(arr_20 [i_4 + 1] [1] [i_4 - 1])))));
                    arr_24 [i_3] [i_4] [i_3] = (((((((arr_1 [i_5]) || 147)))) - ((1 ? var_0 : (arr_11 [i_5] [1])))));
                }
            }
        }
        arr_25 [14] = 37;
        var_28 = (((arr_11 [4] [i_3]) ? -99 : ((-(arr_16 [i_3])))));
        var_29 *= (((((arr_3 [6] [6]) ? (arr_19 [i_3]) : var_1)) < var_5));
    }
    #pragma endscop
}
