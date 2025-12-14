/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_7;
    var_12 = (max(var_10, var_2));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_5;
        var_13 = (min(var_10, (max(2147483647, (arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_14 = var_1;
                            var_15 = min((((!var_7) ? var_4 : -49)), ((2147483647 ? (arr_5 [i_0] [i_0] [3]) : 0)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_16 = max(var_3, ((((max(2147483644, var_3))) % (min(var_7, (arr_15 [3]))))));
                        arr_17 [i_0] [i_1] [i_0] [8] = -17;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            var_17 = var_3;
            arr_20 [i_0] [i_7] [i_7] = ((((((-2147483647 - 1) ? var_1 : var_9))) ? (arr_19 [i_7 - 2] [i_7 - 2]) : ((2147483647 ? -6783623785155981817 : 13070383950810862001))));
        }
        for (int i_8 = 3; i_8 < 8;i_8 += 1)
        {
            arr_24 [i_0] [i_8] [i_8] = (min((min((((arr_2 [i_0]) ? var_4 : (arr_8 [i_0]))), ((((arr_15 [i_8]) ? var_8 : -20801))))), (max(((-28892 ? (arr_23 [i_8]) : var_10)), (var_4 | 2185133493)))));
            var_18 = (((((max(-28873, 0)) <= (((28892 ? -28892 : (-32767 - 1)))))) ? (!-6549721587629206168) : (((var_3 != var_8) | var_6))));
            var_19 = ((max((min(var_10, var_7)), (((var_6 >> (1047233695 - 1047233694)))))));
        }
    }
    #pragma endscop
}
