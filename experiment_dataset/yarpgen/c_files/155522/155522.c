/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, (((57 == (arr_1 [i_0]))))));
        arr_4 [i_0 + 1] [i_0 + 1] |= 198;
        var_20 = (((min((~9), var_11))) - (arr_2 [i_0 + 1]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_21 = (arr_6 [i_4] [i_3]);

                        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_1] [i_5] = 255;
                            arr_18 [i_1] [1] [14] [i_1] = ((!(((154 ? var_3 : var_17)))));
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [1] [i_3] [i_4] [i_4] &= ((((arr_19 [i_2] [i_3] [i_4]) ? (arr_21 [i_6] [i_2] [i_3]) : 0)));
                            var_22 = var_18;
                        }
                        for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_1] [17] [i_3] [i_1] [i_7] = 1;
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [6] = ((var_18 ? ((var_8 - (arr_6 [i_4] [i_2]))) : (arr_25 [i_1] [i_2] [i_2] [i_3] [i_1] [i_4] [i_7 - 1])));
                        }
                    }
                }
            }
            arr_28 [i_1] [i_2] = -1;
        }
        var_23 += arr_1 [i_1];
        var_24 = (min(var_24, ((((~32505856) - (!15181))))));
    }
    var_25 = 3482862987;
    var_26 = ((var_7 ? ((((((var_4 ? var_5 : var_12)) == (1554108382 == 8858))))) : (max(var_14, (~var_8)))));
    var_27 = (max(((var_12 ^ (var_4 == var_17))), (((8 - 4096) ? var_3 : (~var_2)))));
    #pragma endscop
}
