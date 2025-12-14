/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((~((var_3 ? var_1 : (max(1140920032, var_6))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = var_1;
        arr_4 [i_0] = (((((~(~0)))) ? ((((~3154047274) ? var_4 : (((arr_1 [i_0]) ? var_9 : (arr_2 [i_0] [i_0])))))) : (max(1140920022, 9223372036854759424))));
        arr_5 [i_0] [i_0] = (~var_1);
        var_11 = (min(var_11, (((-12197 ? -5691983780783656137 : -11745)))));
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_12 [i_2] &= (!9223372036854759424);
            var_12 = (min(var_12, 32765));
            var_13 = var_4;
            var_14 = (min(var_14, var_1));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_15 = (((((~(arr_10 [i_3] [i_3])))) ? (arr_16 [i_1] [i_3] [i_4] [i_4 + 1]) : (arr_16 [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 1])));
                var_16 = (max(var_16, (arr_17 [i_1] [i_1] [1] [i_1])));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_17 = (~var_3);
                    var_18 = (max(var_18, (~32765)));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_23 [i_4] [i_3] [i_3] [i_3] [6] = (((arr_13 [i_4 + 1] [i_4]) ? (arr_13 [i_4 - 3] [i_4 + 1]) : -15519));
                    var_19 = -3894288133;
                }
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_20 = ((!((-367384013 < (arr_25 [i_3] [i_7])))));
                var_21 = 117;
                var_22 = 11758;
                var_23 = (max(var_23, ((((arr_11 [i_7] [i_3] [i_1]) ? 400679163 : 242)))));
            }
            var_24 = var_9;
            var_25 = -2068449568;
        }
        arr_26 [i_1] = ((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((max(106105009986526094, 1)) ^ (((-5691983780783656160 ? (arr_25 [i_1] [i_1]) : -1))))) : (9167464320939290034 ^ var_4));
    }
    #pragma endscop
}
