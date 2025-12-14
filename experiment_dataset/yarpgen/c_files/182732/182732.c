/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, var_6));
        arr_2 [i_0] [i_0] &= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = (!var_10);
        var_14 = arr_4 [i_1] [i_1];
        var_15 = (max(var_15, ((min(((-var_4 * (!-542689972912052974))), (((!(((~(arr_1 [i_1]))))))))))));
        var_16 = (max(var_16, -var_0));
    }
    var_17 = (((min(var_4, var_0))) ? ((-(min(var_3, var_9)))) : (var_4 <= 4089653014510475368));
    #pragma endscop
}
