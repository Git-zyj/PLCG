/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (max(var_12, (((!(arr_2 [6] [i_0]))))));
        var_13 -= (arr_1 [17] [i_0]);
        arr_3 [9] [i_0] = ((-((max(var_5, (arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = (((~((21947 / (-32767 - 1))))));
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_10;
        var_14 = (((arr_1 [i_1 - 1] [i_1 + 1]) - (arr_2 [i_1 - 2] [i_1 + 2])));
        arr_8 [i_1] = (((arr_5 [i_1 + 1] [i_1 - 3]) < (arr_5 [i_1] [15])));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_21 [5] [i_3] [i_3] [i_3] = ((21947 << ((((18446744073709551615 ? var_9 : 2105386755)) - 658250645))));
                        var_15 = 28322;
                        arr_22 [i_3] [i_3] [i_3] [i_3] [i_4] = (~21947);
                        var_16 = (min(var_16, var_8));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        arr_27 [i_5] [i_5] = ((~(arr_1 [i_5 + 2] [i_5 + 1])));
        var_17 = (arr_26 [i_5 - 1]);
    }
    #pragma endscop
}
