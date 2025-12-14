/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~-3) ? var_4 : var_4));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 |= ((-(-3 && 3732036034)));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] = max(((-(arr_1 [i_0]))), (min(-7, ((-15 ? (-2147483647 - 1) : -3)))));
            var_12 = -3;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_13 = ((((arr_7 [i_0]) ? var_1 : (arr_3 [i_0] [i_3] [i_3]))));

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_14 = ((144115188075855871 ? var_2 : (arr_3 [i_0] [i_0] [i_0])));
                    var_15 = var_3;
                    arr_14 [i_0] [i_0] [i_3] [i_4] = arr_4 [i_2] [i_2];
                }
            }
            arr_15 [i_0] = ((24 / (arr_2 [i_0])));
            var_16 = 89;
        }
    }
    var_17 = -4273286251766510270;
    var_18 = (min(var_2, 1));
    #pragma endscop
}
