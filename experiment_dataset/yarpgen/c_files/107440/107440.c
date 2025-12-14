/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [7] = ((arr_0 [1] [i_0]) + (arr_2 [i_0]));
        var_10 = (max(var_10, (((-22 - (((-2147483647 - 1) ^ (arr_0 [i_0] [1]))))))));
        arr_4 [i_0] [i_0] = var_5;
        arr_5 [i_0] = 2147483647;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (~(min((arr_2 [13]), (min((-2147483647 - 1), var_5)))));
        arr_10 [i_1] = ((~(max((max(4294967295, -2147483618)), ((max(var_6, 255)))))));
        arr_11 [i_1] = 63;
        var_11 = (((min(((0 << (((arr_8 [i_1]) - 25453)))), (!25))) == -2147483647));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_14 [8] [i_2] = (max(((min((arr_13 [i_2]), ((!(arr_12 [i_2])))))), (min(-2147483647, var_9))));
        arr_15 [9] [i_2] &= 4;
    }
    var_12 = var_7;
    #pragma endscop
}
