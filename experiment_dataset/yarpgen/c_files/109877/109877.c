/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_17, var_6));
        var_18 += var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((7 ? 18446744073709551614 : (arr_3 [i_0 - 1] [i_2 - 3] [i_2])));
                    var_20 = (18446744073709551609 < 1);
                    var_21 = ((11 / (255 >= 10)));
                    arr_8 [i_0] [i_0] [i_0] [i_2 + 1] = ((~(7 * 0)));
                }
            }
        }
        arr_9 [i_0] = ((1 / (arr_1 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_13 [i_3] = var_4;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_22 = (!var_0);
                        arr_22 [i_3] [i_5] [i_5] [i_5] [5] [i_3] = (max((arr_11 [i_4] [i_5]), ((0 ? (~1) : 113595330160234951))));
                        var_23 = (min(0, (((1 / 203) ? var_6 : (arr_2 [i_3])))));
                    }
                }
            }
        }
    }
    var_24 = var_9;
    var_25 = (!var_10);
    #pragma endscop
}
