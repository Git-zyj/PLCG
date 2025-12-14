/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (min((min(-1161493309, (((arr_0 [i_0 + 3] [i_0]) ? 2985481337572653021 : var_0)))), ((min(var_6, (min(5693469942105461738, var_7)))))));
        var_17 = (max(var_17, ((((((var_7 ? (arr_1 [i_0] [i_0 + 3]) : (arr_1 [i_0] [i_0 + 2])))) ? (min(((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 34))), (min((arr_1 [i_0] [i_0]), (arr_0 [i_0 - 1] [i_0]))))) : ((var_10 ? (var_6 & 15461262736136898594) : var_13)))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 += (min((min((-5693469942105461748 / 15461262736136898594), var_7)), 6037389984373422756));
        var_19 = (min((min((min((arr_1 [i_1] [i_1]), 3632355225122488646)), (1 && var_16))), (arr_3 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_7 [i_2 + 1] &= (arr_3 [i_2]);
        var_20 = 147;
    }
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        var_21 = (arr_5 [i_3] [i_3]);
        var_22 = ((min(var_4, (min(13875157096062839799, (arr_6 [i_3]))))) - 50492);
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 6;i_5 += 1)
        {
            {
                var_23 = (((min(var_4, (arr_0 [i_4] [i_5 + 2]))) | (min((arr_10 [i_4]), var_14))));
                var_24 = (min(5693469942105461738, (min((arr_6 [i_5 + 2]), 16990005321387135166))));
                var_25 += (((((((9036 ? (arr_10 [i_4]) : 319542444)) / ((((arr_13 [i_4]) * var_13)))))) ? (min((min((arr_8 [i_4]), var_10)), var_3)) : (((min(1, var_16))))));
                arr_15 [i_5] [i_5] = min((min(((((arr_9 [i_4]) ? (arr_12 [i_4]) : (arr_6 [i_4])))), (arr_14 [i_5]))), ((min((min((arr_0 [i_4] [18]), -42)), (arr_12 [i_4])))));
            }
        }
    }
    var_26 = var_15;
    #pragma endscop
}
