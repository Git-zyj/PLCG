/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = ((!((min(((var_5 ? var_7 : var_10)), (arr_1 [i_0]))))));
        var_12 = -97;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = var_7;
        var_14 = (((((arr_4 [i_1]) ? (~var_6) : (arr_3 [i_1]))) * (!var_4)));
        arr_6 [i_1] [i_1] = (arr_4 [i_1]);
        var_15 = (min(var_15, ((((arr_5 [i_1]) & ((-(max(var_9, var_7)))))))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_16 = ((var_5 ? ((var_4 - (arr_0 [i_2 + 1]))) : -29069));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_3] = (i_2 % 2 == zero) ? ((min(((((arr_14 [i_2 + 1] [i_2 + 1] [i_2]) || 536838144))), ((498395012 << (((arr_14 [i_2 + 1] [i_2 + 1] [i_2]) + 3844232647699790042))))))) : ((min(((((arr_14 [i_2 + 1] [i_2 + 1] [i_2]) || 536838144))), ((498395012 << (((((arr_14 [i_2 + 1] [i_2 + 1] [i_2]) - 3844232647699790042)) - 1798283230818674353)))))));
                        arr_19 [i_2 + 1] [i_3] [i_4] [i_2] = ((((((((arr_3 [i_2]) != -594888105)) ? -var_7 : ((1458769076 - (arr_15 [i_2] [i_2] [i_2] [i_4] [i_5])))))) % (max((max(var_10, 1)), (arr_8 [i_4])))));
                    }
                }
            }
        }
    }
    var_17 += (((((~var_2) ? -329493756886330303 : var_4)) & var_8));
    #pragma endscop
}
