/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_9 ? var_8 : var_1)))) ? 20610 : ((min(var_6, (!var_2))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (max(var_13, var_0));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        var_14 = (~var_6);

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_8 [18] &= var_0;
            arr_9 [i_0] [i_1] = (min(((~(arr_6 [i_1 + 2] [i_1]))), var_5));
        }

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_15 = (min(var_15, ((min(var_5, var_3)))));

            /* vectorizable */
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                var_16 = ((~(arr_13 [i_2 + 2])));
                var_17 -= ((~((~(arr_10 [i_0])))));
                var_18 = ((~(~var_5)));
                arr_14 [i_2] = ((var_6 ? (~var_2) : (arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 2])));
            }
            arr_15 [i_2] [i_2] [i_2] = (min((~var_1), (arr_2 [i_0] [i_0])));
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            var_19 = ((!((min((min(127, var_8)), var_8)))));
            var_20 = (max(var_20, var_9));
            var_21 = (max(var_21, ((min((arr_0 [i_4]), (min((arr_13 [1]), ((var_10 ? var_3 : 16383)))))))));
            var_22 = (((-127 - 1) ? 9 : 4294967295));
            arr_19 [i_0] [i_4] [i_0] = var_5;
        }
    }
    var_23 = (min(var_1, var_7));
    #pragma endscop
}
