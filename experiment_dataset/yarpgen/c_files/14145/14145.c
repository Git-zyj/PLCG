/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 8935141660703064064;
    var_19 = var_13;
    var_20 = (((var_4 < 219009689331182721) ? -5244156489225231810 : var_9));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~(max((arr_1 [i_0]), var_15))));
        var_21 = (((!(arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = max((arr_3 [i_1]), (((arr_0 [i_1]) ? (max((arr_4 [i_1]), var_1)) : ((max((arr_3 [i_1]), var_14))))));
        arr_6 [i_1] = (arr_0 [i_1]);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_22 = 1157585464;
        arr_9 [i_2] [i_2] = (min(26252, (((arr_4 [i_2]) ? (arr_4 [i_2]) : (arr_4 [i_2])))));
        var_23 = (max(var_23, (((((arr_4 [i_2]) ? (arr_4 [i_2]) : (arr_4 [i_2])))))));
        var_24 = (max(var_24, var_8));
    }
    #pragma endscop
}
