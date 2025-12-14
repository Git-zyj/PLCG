/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_12;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_6, var_13));
        var_16 = ((!(arr_2 [12])));
        var_17 = (max(var_17, ((max((!var_10), 16198947135308467223)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = (min(var_18, (((((~(arr_4 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    var_19 = var_13;
                    arr_11 [i_3 - 1] [i_2] [i_1] = var_4;
                }
            }
        }
        arr_12 [i_1] = ((((min(((var_2 ? var_12 : (arr_3 [i_1]))), (!var_12)))) ? ((+(((arr_8 [i_1] [i_1] [i_1]) ^ var_5)))) : var_13));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_20 = (arr_7 [i_4] [13]);
        var_21 = (max(var_21, (((!(((var_4 ? (arr_7 [i_4] [i_4]) : var_8))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_21 [8] [i_4] [i_5] [i_5] [i_7] [i_5] = (arr_8 [i_6] [i_7 + 1] [i_6]);
                        var_22 = ((~(arr_20 [i_7 - 3] [i_7 + 1] [i_7 + 2] [i_7 + 2] [0])));
                    }
                }
            }
        }
        var_23 = 16198947135308467217;
    }
    #pragma endscop
}
