/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!-9081952590079159750);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [8] = (min((((arr_1 [i_0] [i_0]) << (((max(1, var_7)) - 1555189342)))), (~14555)));
        arr_5 [i_0] [i_0] = ((((var_17 && (arr_3 [i_0]))) ? 1 : 14555));
        arr_6 [i_0] = (min((((1 || ((min(var_7, var_6)))))), (~14555)));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_11 [i_0] [i_1 + 1] [i_0] = (((((0 | (1030500375 ^ 2130062357)))) ? (!var_6) : (60 > -3044)));
            arr_12 [i_0] [i_0] = ((-var_0 ? (min(((-(arr_10 [i_0] [i_0] [i_0]))), var_9)) : -2021622559));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((((~(-9223372036854775807 - 1)))) + var_9);
                        arr_20 [i_0] [i_0] [1] [i_0] = (~(arr_2 [i_0]));
                        arr_21 [i_0] [i_0] [i_0] [i_0] = (((var_17 ? var_12 : (arr_1 [i_2] [1]))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_25 [i_4] [i_4] = var_0;
            arr_26 [i_4] = ((~var_12) < (arr_18 [i_0] [15]));
            arr_27 [4] [4] [4] = arr_24 [12] [i_4] [i_4];
        }
    }
    #pragma endscop
}
