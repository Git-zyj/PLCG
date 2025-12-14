/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] [i_1 + 3] [i_2] = var_8;
                                arr_15 [2] [i_4] [10] [6] [i_4] = var_5;
                                arr_16 [i_2] [i_2] [i_0] [i_3] [i_4] = var_1;
                                arr_17 [1] [6] [i_2] [i_2] [i_4] = ((!((min((arr_6 [i_1 + 2] [i_1 - 1] [i_0] [2]), (arr_4 [i_1 + 2]))))));
                                arr_18 [i_2] [i_1] [9] [i_1] [i_1] [0] [i_1] = -var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_24 [1] [i_2] [1] = ((-(((((8020931272687471598 ? 8020931272687471598 : 8020931272687471598)) != (((min(var_0, var_11)))))))));
                                arr_25 [i_0] = ((-(min(-2047087863050619395, (((var_3 ? (arr_7 [i_0] [i_1] [i_1] [i_1]) : 1)))))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_32 [i_2] = (((!(arr_1 [i_1 - 1]))));
                                arr_33 [i_0] [1] [5] [i_2] [i_8] [i_2] = 8020931272687471598;
                                arr_34 [i_0] [10] [i_2] = ((min(-8020931272687471599, -1770151552)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = 1;
    #pragma endscop
}
