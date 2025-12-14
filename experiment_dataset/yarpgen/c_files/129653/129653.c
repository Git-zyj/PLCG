/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (((((~(arr_2 [i_1 - 1] [i_1 - 1])))) ? (!-31850) : (((((-(arr_3 [9])))) ? -18 : (arr_0 [i_1 + 1] [i_1 + 2])))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, ((min((-127 - 1), (arr_2 [i_0] [i_1]))))));
                    arr_8 [i_0] [i_1] [i_2] [4] = (-127 - 1);
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_22 = ((~((min((min(65535, (-127 - 1))), ((min(16885, (arr_11 [8])))))))));
                    var_23 = ((-(~0)));
                }
                var_24 = (min((min((arr_10 [i_1 + 1] [i_0] [i_1 - 1]), 5537)), (min((arr_10 [i_1 - 1] [i_0] [i_1 + 2]), 88))));
                arr_12 [i_0] [i_0] [i_1 + 2] = ((~((-((-24261 ? (arr_5 [i_0] [i_0] [i_1 - 1]) : -29))))));
            }
        }
    }
    var_25 *= var_16;
    #pragma endscop
}
