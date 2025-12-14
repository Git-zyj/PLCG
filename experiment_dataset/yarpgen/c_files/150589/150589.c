/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 16327332787706507609;
    var_11 = (min((((((95 ? 7197 : 0))) ? ((26588 ? 18753 : var_1)) : -95)), ((((((var_8 ? 27610 : var_1))) || (!3106019983))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0 + 1]) : (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [0] &= (arr_0 [8] [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_12 ^= (max((((!(arr_4 [0])))), (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = ((max((((-121 ? 1669503916 : var_6))), (((arr_5 [i_1] [i_1]) ? 17493150375169968547 : (arr_5 [i_1] [i_1]))))));
        var_13 ^= ((((((-(arr_5 [i_1] [i_1]))) + 2147483647)) << (((((((var_6 ? 1 : 1))) % (((arr_4 [12]) ? 1456385845 : (arr_4 [10]))))) - 1))));
        var_14 = ((!((((min((arr_4 [i_1]), (arr_5 [i_1] [i_1])))) || (2369014002 - 92)))));
        var_15 = (max((max(-91, -30)), ((min((22460 | 1), (arr_5 [i_1] [i_1]))))));
    }
    #pragma endscop
}
