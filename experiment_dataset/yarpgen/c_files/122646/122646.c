/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((max(var_13, var_14)) % (var_6 && var_0)))) ? var_1 : var_5));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [2] = (max((((arr_0 [i_0]) ? ((((!(arr_0 [i_0]))))) : var_7)), var_7));
        var_16 &= (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] &= (min((~var_4), (((((var_2 && (arr_5 [i_1]))) && ((min((arr_3 [2]), var_1))))))));
        arr_8 [3] = 1246091265;
        var_17 |= (251 | ((min(124, (arr_6 [i_1])))));
        var_18 = (min(23089, (198 ^ 3157493244)));
    }
    var_19 &= ((!((((((max(-1, var_9)))) * (min(var_6, var_10)))))));
    #pragma endscop
}
