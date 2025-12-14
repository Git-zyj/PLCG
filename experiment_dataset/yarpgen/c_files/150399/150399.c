/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (((((var_10 + (((var_7 ? 66 : 32767)))))) ? ((var_4 ? 7 : ((var_11 ? 63 : 7)))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((-(!1))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] [0] [i_1] [i_1] = var_11;
                    var_17 = (!-var_2);
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_3] = ((((max((arr_1 [i_0 - 3]), 75))) - ((7 ? (arr_2 [i_0 - 3] [i_0 - 3]) : (arr_10 [i_0] [11] [i_1] [i_3])))));
                    arr_12 [i_3] [8] [8] [8] = (((-(820488859 == -10))));
                    arr_13 [i_3] = (max((((arr_3 [i_1 + 1] [i_0 + 2]) ? (arr_3 [i_1 + 1] [i_0 - 3]) : (arr_9 [i_1 + 1]))), (arr_1 [i_0 - 1])));
                    arr_14 [i_0] [i_0] [i_3] [i_0] = ((+(((-6 >= 0) ? (arr_7 [7] [7] [i_3]) : var_8))));
                }
                arr_15 [i_0] = (((min((96 * 18), (((arr_3 [i_1] [i_1]) ? var_10 : -88)))) != (arr_10 [i_1] [i_0] [8] [i_0])));
            }
        }
    }
    #pragma endscop
}
