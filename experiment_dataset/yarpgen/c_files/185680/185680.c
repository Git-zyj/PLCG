/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_19 = ((((max((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1])))) ? (max((arr_0 [i_0 - 4]), (arr_0 [i_0 - 1]))) : (max((arr_0 [i_0 - 4]), 65533))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [1] [3] = ((max(48500, 128)));
            var_20 ^= (((!(!128))));
            var_21 = 115;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_22 = (max(var_22, 2));
            arr_9 [1] [i_2] = ((-(arr_8 [i_2 - 1])));
            arr_10 [i_2] = arr_0 [i_0 + 1];
        }
        arr_11 [i_0] = ((!(~24)));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_23 = (!var_9);

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_24 = ((-(((~58) ? (((62438 ? 14385 : 128))) : ((var_17 & (arr_15 [i_0] [i_4])))))));
                arr_18 [6] [9] [i_3] [i_4] = var_5;
            }
        }
        var_25 = (min(var_25, (~23)));
    }
    var_26 = (!var_0);
    #pragma endscop
}
