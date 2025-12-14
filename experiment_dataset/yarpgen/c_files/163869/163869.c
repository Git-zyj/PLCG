/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (~var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_4] = ((min(-56, (arr_11 [i_0] [i_1] [i_4]))));
                                arr_14 [16] [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((-(((-10516 || (arr_12 [i_4 - 1] [i_3 + 3] [i_2] [i_1] [5]))))));
                                arr_15 [12] [20] [i_1] [i_2] [i_1] [22] = ((!(((arr_8 [i_4 - 1] [i_3] [i_3 + 1] [i_0 - 1] [i_0]) <= 10451861755755264670))));
                                var_11 = arr_1 [i_0];
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_5] |= 2176818109;
                    var_12 = (i_5 % 2 == zero) ? (((((81 << (arr_16 [i_5]))) > ((max((arr_17 [i_0 + 2] [i_0 + 2] [i_0 - 1]), var_0)))))) : (((((81 << (((arr_16 [i_5]) - 92)))) > ((max((arr_17 [i_0 + 2] [i_0 + 2] [i_0 - 1]), var_0))))));
                    arr_19 [i_0] [i_0] [i_5] = arr_12 [i_0] [i_0] [i_1] [i_5] [i_5];
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    arr_24 [i_6 + 1] [6] [7] = 0;
                    var_13 = (max((~39), (~var_3)));
                    var_14 = (max(var_14, (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
