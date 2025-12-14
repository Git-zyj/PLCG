/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((min(0, 1)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = (((((~(~var_9)))) ? ((min((arr_5 [i_0] [i_0]), var_9))) : (!var_2)));
            var_14 += (arr_2 [i_0]);
            var_15 += var_11;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_0] = var_11;
            arr_10 [i_0] [i_0] [i_2 - 1] = 2147483647;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_16 = (min(var_9, 1));
                var_17 += max(var_1, var_4);
                var_18 = (~var_1);
                var_19 = min(((-((-(arr_1 [10] [i_0]))))), ((var_9 ? -var_4 : (~var_3))));
            }
        }
        var_20 = ((-2937214694466012585 ? var_8 : ((var_8 ? 0 : var_3))));
    }
    var_21 = (2147483647 ? 1 : 6786096212724863861);
    var_22 = max(var_12, (min(((1 ? 2661020959450681881 : var_3)), var_3)));
    var_23 = var_1;
    var_24 += min(11487727228993471273, 1);
    #pragma endscop
}
