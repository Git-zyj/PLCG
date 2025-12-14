/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = ((~(((((-14667 | (-2147483647 - 1)))) ? ((max(1, 24576))) : 11957))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_13 = (arr_1 [i_0 - 4] [i_0]);
        arr_4 [i_0] = (((1662460981 ? (arr_0 [i_0 - 4] [13]) : var_2)) & (arr_0 [i_0 - 1] [i_0 - 1]));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_9 [i_1] = var_6;
        arr_10 [i_1] = ((!(arr_2 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_14 = (--11957);
        arr_14 [i_2 + 1] = ((11960 ? -1662460980 : 8125257132669358716));
        var_15 = ((2456236335 ? 5051550353518924311 : 3502407809));
    }
    #pragma endscop
}
