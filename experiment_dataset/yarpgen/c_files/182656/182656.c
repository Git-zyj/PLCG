/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, var_12));
        arr_3 [i_0] = (~141);
        arr_4 [i_0] [i_0 - 1] = (arr_2 [i_0]);
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_21 = (((((!(((arr_5 [i_1 - 4]) >= (arr_6 [9] [9])))))) >= (arr_7 [i_1 - 3])));
        var_22 = (max((arr_5 [i_1 + 1]), (((arr_5 [i_1 + 1]) * (arr_5 [i_1 + 3])))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_1] = (((((arr_10 [i_1]) <= 108)) ? var_1 : (arr_10 [i_1 - 2])));
            var_23 = (min(var_23, ((((((arr_7 [i_1 + 3]) && var_4)) ? (!108) : var_13)))));
        }
    }
    var_24 = ((((max(-3979444131102270959, 126))) ? var_7 : var_6));
    #pragma endscop
}
