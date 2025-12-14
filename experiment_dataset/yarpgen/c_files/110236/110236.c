/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((max(-57, ((0 ? -211326292 : -57)))), ((var_1 | (((var_11 + 2147483647) << (((var_0 + 29752) - 19))))))));
    var_13 = (((min(0, -1807264296)) & (((((var_9 * var_8) && (var_5 & var_6)))))));
    var_14 = ((((max(((var_8 ? 56 : var_11)), var_1))) || ((((~var_11) + (min((-2147483647 - 1), var_7)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (~1);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = (arr_1 [i_0]);
                        var_17 = var_8;
                        var_18 = var_7;

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            var_19 = (((var_2 / 332119614) % (arr_5 [i_4 - 3] [i_4 - 3] [i_4 - 2])));
                            arr_12 [i_1] [0] [i_4] [0] [i_1] [i_1] = ((-19149 % (arr_10 [i_4 - 1])));
                        }
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((!(arr_7 [i_0] [i_0] [1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
