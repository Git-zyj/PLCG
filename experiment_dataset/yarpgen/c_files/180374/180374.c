/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_2);

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = (-32 ? ((((((-21767 + 2147483647) >> (21777 - 21775))) | 21779))) : (((((arr_3 [i_0] [i_0]) >> 1)) << (((-776953665403854487 & -21767) + 776953665403871128)))));
                        arr_11 [i_2] [i_1] [i_2] = var_10;
                        var_20 = (min((((arr_3 [i_0 - 2] [i_0]) ? var_11 : (arr_3 [i_0 + 2] [i_0]))), (((arr_3 [i_0 - 2] [i_0]) ? var_15 : (arr_3 [i_0 - 1] [i_0])))));

                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            arr_15 [i_0] [0] [0] [1] [i_2] [i_0] = ((((min((arr_12 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1]), (arr_12 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_3 + 2])))) >> ((((arr_13 [i_0 + 2] [i_1] [i_2] [1] [i_4]) <= (arr_7 [i_0 - 2] [1] [i_3 - 2] [i_4]))))));
                            var_21 = ((+(max((arr_4 [i_2] [i_3 - 2]), (arr_3 [i_0 + 1] [i_1])))));
                            arr_16 [i_3] [i_1] [i_2] = (arr_0 [i_2] [i_2]);
                            var_22 ^= (((arr_10 [i_0 - 3] [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 3]) : 21758));
                            var_23 *= (arr_14 [i_0] [i_4 + 4] [i_0 - 1]);
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_2] [1] [i_2] [i_3] [i_5] [11] = 21766;
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_2] [i_2] = max(-21767, ((27537 ? var_8 : ((206985043 << (-98 + 116))))));
                        }
                    }
                }
            }
        }
        var_24 = ((((((max(1459439428, 1))) ? (arr_5 [i_0 - 3]) : var_17)) / (((-(arr_18 [i_0] [i_0 - 3] [i_0] [9] [i_0]))))));
        var_25 = var_0;
    }
    for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_26 *= (((arr_10 [i_6 - 1] [i_6] [i_6]) || (arr_10 [i_6 + 1] [1] [i_6])));
        var_27 = (arr_7 [i_6] [i_6 - 3] [i_6] [i_6]);
        var_28 = (arr_23 [i_6]);
    }
    #pragma endscop
}
