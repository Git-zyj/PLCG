/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_15 = (min((!0), (min(var_5, (arr_0 [i_0 + 1])))));
        arr_3 [i_0 - 1] = ((+(max((((arr_1 [i_0 - 1]) ? -76 : var_8)), var_12))));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1 + 2] [i_1] = max(0, 3694331072);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_12 [i_1] = ((arr_9 [i_1 - 2] [i_1 + 1] [i_1]) ? var_5 : (arr_10 [i_1 - 1] [i_1]));

            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                var_16 = (((arr_15 [i_3 + 1] [i_3] [i_3 + 1]) ? 1104844828 : (arr_6 [i_1 - 1])));
                arr_17 [i_3] [i_2] = (arr_9 [i_1] [i_1] [i_1]);
            }
            var_17 = (max(var_17, (((-3977999195764987888 ? var_13 : (arr_7 [i_1 - 2]))))));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        arr_21 [i_4] = (-117 > var_1);
        arr_22 [i_4] = (var_13 % var_13);
    }
    var_18 -= var_0;
    #pragma endscop
}
