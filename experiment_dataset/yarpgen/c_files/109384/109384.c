/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0] [7]);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 = ((max((arr_2 [i_0 - 1] [i_0 - 1]), 24228)));
            var_17 = (~var_13);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_18 = (min(var_18, 0));
            var_19 = (min(var_19, ((max((arr_8 [i_0 - 1] [i_0 - 1] [i_2]), (((~(min(4294967289, 0))))))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_20 = (((((!1835008) + (((arr_9 [i_0]) ? var_1 : var_13)))) - -var_4));
            arr_12 [i_0 - 1] = (1 == 18446744073709551600);

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_17 [i_4] [2] [i_3] [i_4] = (max((max((((arr_13 [i_0] [3] [i_4]) ? 1 : (arr_5 [i_0]))), ((max((arr_16 [i_4]), (arr_9 [i_3])))))), (arr_0 [i_0 - 1])));
                arr_18 [i_0] [i_4] [i_4] = -7115222707861819059;
                arr_19 [i_4] [i_3] [i_3] = ((~(min(2665038650, 1))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_22 [i_0] [i_0] [i_0] = (min((arr_8 [i_0 - 1] [i_3] [19]), (((70364449210368 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))))));
                var_21 = (max(var_21, (((arr_20 [i_3] [i_0 - 1] [i_0 - 1]) >> (((arr_20 [i_5] [i_0 - 1] [i_0]) & 1))))));
                arr_23 [i_0] [22] [i_5] = (min((max((arr_5 [i_0 - 1]), ((min(var_5, (arr_1 [10])))))), ((~(min(2665038650, -104))))));
            }
            arr_24 [i_0] [i_3] = ((-var_5 && ((((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_3]) : var_8)))));
        }
        arr_25 [1] = ((min((arr_3 [i_0 - 1]), (arr_15 [8]))));
    }
    var_22 = ((((min(var_15, (-70364449210375 && 0)))) ? var_2 : ((-17697 ? (min(1629928638, var_6)) : ((var_5 ? -103 : -3704304131887614120))))));
    #pragma endscop
}
