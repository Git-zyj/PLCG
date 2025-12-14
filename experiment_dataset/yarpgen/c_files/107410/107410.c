/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -65528;
        arr_3 [1] = (((arr_0 [i_0] [i_0]) ? var_14 : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((arr_1 [i_1]) | 22860)));
        var_15 = (min(var_15, (((4223432041 * ((((min((arr_0 [i_1] [i_1]), var_6)) & (((arr_4 [i_1] [i_1]) ? var_3 : -30595))))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_16 = var_2;
        var_17 = (((arr_4 [i_2] [i_2]) & var_9));
        var_18 += (arr_8 [i_2]);
        arr_10 [i_2] [i_2] = ((((33109 ? var_9 : (arr_8 [i_2]))) ^ (((var_3 != (arr_8 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((!((((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3]))))));
        arr_15 [i_3] = 973;
        var_19 = ((((min(8275705534654277941, 60575))) ? (((35570 ? (!var_6) : (((var_11 && (arr_13 [i_3] [i_3]))))))) : (0 + 1977070427)));
    }
    var_20 -= var_11;
    var_21 = (~var_8);
    #pragma endscop
}
