/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_10 = ((10942790178037553252 ? 18446744073709551615 : -1));
                                arr_13 [i_3] = (~102);
                                var_11 = ((-((max(111, -1)))));
                                arr_14 [i_3] = (max((((arr_12 [i_4] [i_4 - 2] [10] [i_3] [i_4 - 2] [i_4]) | (arr_12 [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_3] [10] [i_4]))), (((arr_12 [i_4] [i_4 + 1] [3] [i_3] [i_4] [i_4 - 2]) ? -11 : (arr_12 [i_4] [i_4 + 1] [i_4 - 2] [i_3] [i_4] [9])))));
                            }
                        }
                    }
                    var_12 = (((((((((arr_0 [1]) * -1))) ? ((min(1, -111))) : (arr_3 [i_2] [2])))) ? (arr_6 [i_2] [i_1] [i_0]) : (arr_11 [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                {
                    var_13 = (max(var_13, ((((122 < 42) * 1)))));
                    var_14 -= ((((((arr_17 [i_5]) < var_4)))) % (((((arr_20 [i_6 + 1] [i_6 + 1]) * 255)) / 1)));
                    arr_24 [8] [8] [i_7] [i_5] = ((((max(4294967279, (((arr_23 [18] [i_7 - 3]) ? 53 : (arr_16 [i_5] [i_5])))))) ? (((max(4294967295, 5)))) : var_2));
                }
            }
        }
    }
    #pragma endscop
}
