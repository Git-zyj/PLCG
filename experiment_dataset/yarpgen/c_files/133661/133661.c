/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (arr_1 [17]);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_19 = ((229 ? var_16 : (27 <= 809593115302301522)));
                    var_20 = min(0, 18446744073709551615);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_3] [i_0] = (arr_5 [i_0] [13]);
                    var_21 = (arr_9 [i_0] [i_0] [i_0]);
                    var_22 *= var_12;
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_0] [15] = ((!(arr_0 [i_4 - 1])));
                    var_23 = ((!(arr_4 [15] [i_1] [i_1])));
                }
            }
        }
    }
    var_24 = var_3;
    var_25 = var_13;
    var_26 = ((var_4 ? (7708 / var_3) : (max(16561960066599903805, var_0))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                var_27 = (min(var_27, ((min(((min(229, var_3))), var_9)))));
                var_28 += (arr_17 [i_5]);
            }
        }
    }
    #pragma endscop
}
