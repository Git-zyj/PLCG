/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((((((max(var_4, var_0))) ? var_3 : 2147483647))) ? 7266596907718906528 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] [i_3] = var_9;
                            var_14 = (((var_12 + var_3) ? (((var_8 ? var_9 : (arr_3 [i_0] [i_1] [i_2])))) : 562486372002742361));
                            arr_10 [i_1] [i_1] [i_2] [i_2] [i_3 - 1] = (((!var_5) ? var_12 : ((var_1 ? 2147483647 : (min(17884257701706809260, -2147483647))))));
                            var_15 = (max(var_15, (((25257 ? 6994371027375163691 : ((((arr_6 [i_2] [i_3 - 3] [i_3 + 1]) ? var_1 : (arr_6 [i_2] [i_3 + 1] [i_3 - 3])))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_13 [i_1] [i_1] = ((2147483647 >> (4222124650659840 - 4222124650659834)));
                    var_16 = var_7;
                    arr_14 [i_1] [i_1] [i_1] = (((((var_12 ? var_3 : var_2)) & ((min(var_12, (arr_2 [i_4] [i_1])))))));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_17 = (max(var_17, var_6));
                    arr_19 [i_1] = (((17884257701706809243 ? (min((arr_16 [i_0] [i_5]), (arr_12 [i_1]))) : var_11)));
                }
                arr_20 [5] [i_1] [i_1] = (min(((-(min(2147483647, 52)))), (~-25240)));
            }
        }
    }

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_18 = var_0;
        arr_23 [i_6] = (0 < 0);
        var_19 *= var_5;
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_20 += (max((arr_8 [7] [i_7] [i_7] [6] [i_7] [i_7]), (((arr_0 [i_7]) ^ var_4))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 12;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_8] [i_8] = (min(-2147483647, ((((min(124, 247))) ? 105 : 2147483647))));
                    var_21 = (var_12 ? (arr_21 [i_7]) : var_5);
                }
            }
        }
    }
    #pragma endscop
}
