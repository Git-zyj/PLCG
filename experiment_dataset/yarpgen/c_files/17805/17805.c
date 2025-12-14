/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (!-1);
        arr_3 [i_0] = var_1;
        arr_4 [i_0] = 21625;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [8] = (~var_3);
        arr_9 [i_1] = (min((max((var_3 && var_13), (!var_6))), (((!var_14) || (arr_5 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = (-1 ? (1 || 2077681248) : 1);
        var_16 = ((~(((!((min((arr_12 [i_2] [i_2]), (arr_5 [i_2])))))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_16 [i_2] [i_2] [i_2] = var_6;
            arr_17 [i_2] [0] = (arr_11 [i_3]);
            var_17 = (arr_7 [16] [i_2]);
            arr_18 [i_2] [i_2] = (arr_10 [i_2]);
        }
    }
    var_18 = (max(var_18, var_7));
    #pragma endscop
}
