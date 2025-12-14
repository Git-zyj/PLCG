/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_0 % var_4) ? (!var_15) : 18078781428332749411))) && var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, (17833 != var_0)));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((~((-(max(367962645376802191, (arr_5 [i_1 - 1]))))))))));
        var_20 = var_3;
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_12 [18] = (((var_16 != 1) ? ((((((arr_1 [17] [i_2]) - (arr_9 [i_2])))) ? (((((arr_0 [i_2] [i_2]) && var_2)))) : ((var_9 ? var_14 : (arr_11 [i_2] [i_2]))))) : (((47684 ? (!var_9) : ((4197537988301817231 ? var_13 : 24265)))))));
        arr_13 [i_2 - 1] [17] = (((((arr_6 [i_2 - 3] [i_2 - 2]) * (arr_6 [i_2 - 1] [i_2 + 1]))) % ((~(arr_6 [i_2 - 3] [i_2 - 2])))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, (~-var_6)));
                    var_22 = (((var_11 + -var_9) != (max(54424, var_0))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_23 [i_4] [i_5] [i_4 + 1] [i_3] [i_4] = (((!(((14249206085407734390 ? var_10 : var_0))))));
                                var_23 = var_7;
                            }
                        }
                    }
                    arr_24 [i_4] [i_3] [i_3 + 1] = min(((var_7 * ((((arr_16 [i_2] [i_3]) & var_4))))), (((!var_1) ? (((var_2 ? 1360009885 : 28287))) : (arr_20 [i_3 - 3] [i_3 - 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 2]))));
                    var_24 = (min(var_24, (((+((min((arr_7 [i_4] [i_3]), 9561))))))));
                }
            }
        }
    }
    var_25 = ((var_7 ? var_11 : -var_0));
    #pragma endscop
}
