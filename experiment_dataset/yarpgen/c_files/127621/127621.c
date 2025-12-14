/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_11 = 8474020848030551349;
                            arr_14 [i_0] [i_1] [i_1] [i_3 + 1] = 9223372036854775807;
                            arr_15 [i_0] [i_1] [i_2 - 3] [i_0 + 2] [i_4] [i_3] [16] = 14228;
                        }
                        arr_16 [i_1] [i_1] [i_2] [i_3] = ((((((arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_1] [i_0 + 1]) >= (483468598 >= 2016079680)))) - (arr_7 [i_0])));
                    }
                }
            }
        }
        arr_17 [i_0] = (arr_10 [i_0] [i_0] [i_0] [12] [i_0] [i_0]);
        arr_18 [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_12 = ((~(arr_2 [i_5] [i_5])));
        arr_22 [16] = 1;
        var_13 = (max(var_13, -873349431));
    }
    var_14 = var_8;
    var_15 = (min(3968, 9940298204562193785));
    #pragma endscop
}
