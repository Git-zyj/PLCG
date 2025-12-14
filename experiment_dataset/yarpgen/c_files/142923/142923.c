/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((max(var_1, var_7)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 = (max(1111197816388365561, 935655694));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_2] = (max(((var_1 ? var_8 : (arr_10 [i_0 + 3] [i_1] [0] [i_3] [i_4] [i_0] [11]))), ((var_1 << ((((arr_3 [i_4] [0] [17]) && var_2)))))));
                            var_13 = (min(((min(1, -18189))), ((var_6 ? (arr_9 [i_0] [i_0] [i_0 - 2] [i_2] [i_0 - 2] [i_0]) : 1))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_2] [i_2] [i_2] [i_3] = (46827 + 14575);
                            arr_18 [i_3 + 1] [i_1] [i_2] [i_1] [i_0 + 2] [i_0] [i_1] |= 2046;
                            arr_19 [i_5] [i_2] [i_1] [i_2] [7] = ((-(min(var_6, 1))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_1] = 238;
                            var_14 = ((((min((max(var_2, var_0)), 1))) * ((((-(arr_2 [1])))))));
                            arr_24 [i_2] [19] [19] [i_3] [i_3] [i_3] [19] = ((((var_8 ? (arr_21 [i_2] [i_2] [i_0 + 3] [i_3] [i_2] [i_3 + 3]) : (arr_21 [i_2] [i_1] [i_0 - 1] [i_0 - 1] [i_6] [i_3 + 3]))) - (28672 % 32744)));
                            var_15 = (((((((41513 ? 10 : var_5)) / 7307))) ? 4294967282 : (arr_6 [6] [6] [i_2])));
                        }
                    }
                }
            }
        }
        arr_25 [i_0] |= (~var_3);
        var_16 = ((max(-1150574609, var_7)));
    }
    var_17 = var_2;
    #pragma endscop
}
