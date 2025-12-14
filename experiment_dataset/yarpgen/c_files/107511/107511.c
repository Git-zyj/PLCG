/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(-20785, (max(var_3, var_12))))) ? (((var_4 * ((-3815450763297090453 ? var_9 : 5676230386861362683))))) : var_3));
    var_18 = var_15;
    var_19 &= var_13;
    var_20 = var_1;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (-127 - 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = 5676230386861362684;
                                arr_19 [i_0 - 1] [i_0] [i_0 - 1] [i_1] [i_0] = var_1;
                                arr_20 [i_1] [i_1] [i_1] [i_1] [2] = ((min((arr_7 [i_0 - 1] [i_2] [i_4 + 3]), (arr_7 [i_0 - 1] [i_0 - 1] [i_4 + 3]))));
                                arr_21 [i_0] [i_0] [i_0] [i_0 + 1] [i_2] = (var_11 ? (((!((((arr_16 [i_2] [i_4]) ? (arr_5 [i_4]) : 27310)))))) : (~var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
