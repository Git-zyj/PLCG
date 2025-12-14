/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((min((min(-908684945, (max(var_5, 3159133000988811376)))), var_0)))));
                            arr_13 [i_0] [i_1 - 2] [4] [i_4] [i_4] = arr_2 [i_2] [i_2] [12];
                        }
                    }
                }
                var_18 ^= ((-(max((arr_2 [3] [i_1 - 1] [18]), 475129964))));
            }
            /* vectorizable */
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_21 [i_6] [12] [i_1 - 1] [7] [12] [12] = arr_12 [i_0] [i_1 - 2] [7] [i_6] [i_1 - 2];
                    var_19 = (min(var_19, var_11));
                }
                for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_20 = -var_16;
                    arr_25 [i_0] [i_1 - 1] [i_5] [i_5] = 1;
                }
                for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_21 = 4294967288;
                    var_22 = (arr_2 [i_8] [i_8 - 1] [i_8 + 1]);
                }
                var_23 = var_12;
            }
            var_24 = (arr_9 [1]);
        }
        arr_30 [23] [17] = (max((max(1635213661, (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_25 = var_15;
    #pragma endscop
}
