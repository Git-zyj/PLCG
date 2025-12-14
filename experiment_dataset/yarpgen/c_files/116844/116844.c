/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_10 = (((((~(((877740454 > (arr_0 [i_1]))))))) ? 28 : 3417226841));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_11 = -2112213330;
                        var_12 += (arr_0 [i_3]);
                        var_13 = -3417226841;
                        var_14 = (max(var_14, (((((((arr_2 [i_3 + 1] [i_3] [i_3]) ? (arr_2 [i_3 + 1] [i_3] [i_3]) : (arr_2 [i_3 + 1] [i_3 + 1] [i_3])))) ? (arr_2 [i_3 + 1] [i_3] [19]) : (arr_2 [i_3 + 1] [i_3] [i_3]))))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_15 = (((877740459 | (arr_5 [i_4] [i_4] [i_4]))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        var_16 = 2014052178;
                        var_17 = ((-(((arr_0 [i_6 - 2]) ? var_5 : (arr_0 [i_6 + 3])))));
                        var_18 = 34;
                    }
                }
            }
            arr_17 [i_0] [i_4] [i_0] = ((!(~var_2)));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_19 = 16864;
            var_20 = (min(var_20, (arr_7 [i_0])));
        }
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            var_21 = ((((((arr_15 [6] [i_0] [i_0] [i_0] [i_0]) & (arr_10 [i_0] [i_8] [i_8 + 1])))) ? ((0 ? (arr_15 [20] [i_8] [i_8] [i_8 - 1] [i_8 - 1]) : (arr_10 [i_0] [i_8] [i_8]))) : (!167)));
            var_22 = (min(var_22, (((((((!(arr_20 [i_0] [1]))))) ? (!-1902810309) : (((arr_9 [i_0] [i_8 + 2]) ? (min(var_9, var_1)) : (((-28 ? (arr_6 [5] [5] [1]) : (arr_22 [i_0] [i_0] [i_0])))))))))));
        }
        arr_23 [i_0] = ((arr_6 [i_0] [1] [15]) ? (arr_16 [i_0] [19] [9] [i_0] [i_0]) : 34);
    }
    for (int i_9 = 4; i_9 < 12;i_9 += 1)
    {
        var_23 = ((-(((!(((var_5 ? -1770398027 : 1283072045))))))));
        var_24 = (arr_22 [i_9] [i_9] [i_9]);
        var_25 = 31761;
        arr_26 [i_9] = (((((-(arr_2 [i_9] [i_9] [i_9 - 2])))) ? (arr_7 [i_9]) : ((min((arr_13 [i_9] [i_9] [i_9] [i_9 - 1]), 34)))));
    }
    var_26 = var_5;
    var_27 += var_1;
    var_28 = var_0;
    var_29 = (max((((((var_3 ? 3417226841 : 770065686))) ? var_6 : var_0)), var_8));
    #pragma endscop
}
