/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 / (min(var_10, var_13))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = ((!(arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = (min((arr_1 [i_0] [i_0]), var_0));
        var_20 = -31171;
        var_21 = (!(arr_0 [i_0]));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] &= ((((-((((arr_3 [i_1]) != var_11))))) * (arr_3 [i_1])));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [1] = (1048574 == 31167);
            var_22 = (min(var_22, (((((arr_4 [i_1] [i_2]) & (arr_4 [i_2] [i_2])))))));
        }
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_23 = (min(var_23, (arr_8 [20])));
            var_24 = (~var_9);
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_25 = (max(var_25, var_0));
        var_26 = (max(var_26, (arr_7 [i_4] [i_4] [i_4])));
    }
    #pragma endscop
}
