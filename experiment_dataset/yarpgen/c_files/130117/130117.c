/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (181971424 - 3420945766);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_11 = (!0);
        var_12 = 2594248348;
        var_13 = var_7;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_14 = (2594248348 ? var_6 : (arr_6 [i_2] [i_2 + 1]));
            arr_8 [i_1] [i_2 + 3] [i_1] = (~((0 ? 1335784782 : 2959182524)));
            var_15 = ((3456799702 ? ((var_2 ? var_7 : (arr_0 [i_1] [i_1]))) : -3815));

            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                arr_11 [i_3] [i_3] = 38759;
                var_16 = (~(arr_6 [i_3 - 2] [i_3]));
                var_17 = (61704 ? var_7 : var_4);
            }
        }
        var_18 = (1 <= var_4);
    }
    #pragma endscop
}
