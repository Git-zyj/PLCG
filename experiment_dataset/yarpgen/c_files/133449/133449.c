/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((min(var_3, 99))) && var_8))), ((var_4 ? (~185) : ((0 ? var_6 : var_8))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (max(((41425 ? 1 : 1)), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((+(((!((((arr_2 [i_0]) - var_8))))))));
        arr_4 [i_0] [i_0] = (max((((min(var_0, -494031863)))), (~1)));
        arr_5 [i_0] [i_0] = var_3;
        arr_6 [i_0] = ((((min(var_3, (min((arr_2 [i_0]), var_1))))) ? ((min(98, 98))) : (min((((arr_1 [i_0]) ? (arr_2 [i_0]) : var_10)), 1))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_13 *= var_2;
        var_14 = (min(((min((~var_4), -32116156))), (min((arr_8 [i_1] [i_1]), (min((arr_8 [i_1] [i_1]), 53274))))));
        var_15 = ((((~(arr_8 [i_1] [i_1]))) + 1));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] &= var_3;
        arr_13 [i_2] [i_2] = (((((var_9 ^ var_7) ? (arr_9 [i_2]) : (arr_8 [i_2] [i_2]))) & var_9));
        var_16 = (max(var_16, ((((-6243621800224843549 < 138) ? ((-(-32767 - 1))) : (((((((arr_10 [i_2] [i_2]) / (arr_10 [i_2] [i_2])))) <= -1489047523282348330))))))));
        arr_14 [i_2] [i_2] &= (max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])));
        var_17 = (((((!(arr_11 [i_2])))) > ((max(85, 0)))));
    }
    var_18 = (95 >= 3496);
    #pragma endscop
}
