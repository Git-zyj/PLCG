/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = -3562506640;
        arr_3 [i_0] &= var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, -var_9));
                    var_17 += ((!(arr_7 [i_0] [i_0] [i_1] [i_2])));
                    var_18 = (min(var_18, (~var_4)));
                    var_19 ^= (arr_6 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_20 = (max((((!(var_7 || 3562506640)))), (min(var_12, var_1))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_16 [i_4] [i_4] [i_4] = (min((max((max(732460656, 3562506639)), 0)), (((~(arr_10 [i_3]))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_21 = (max(var_0, (max(var_4, 1))));
                            arr_21 [i_4] [i_4] [i_5] [i_4] = (((max(var_7, 3562506640)) != (min((1 | var_1), (min(2874958277, var_0))))));
                            arr_22 [i_4] = ((((((((min(0, var_2))) && var_8)))) - (min((arr_15 [i_4]), (min(var_13, (arr_19 [i_4] [i_5] [i_5 - 1] [i_6])))))));
                            arr_23 [i_3] [i_4] [i_6] = (((var_12 || var_9) / ((((arr_10 [i_5 - 1]) && 127113058)))));
                            arr_24 [i_3] [i_4] [i_4] [i_4] [i_6] = min((min(var_1, (arr_19 [i_4] [i_5 - 1] [i_5 - 1] [i_5 - 1]))), (!1187534415));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
