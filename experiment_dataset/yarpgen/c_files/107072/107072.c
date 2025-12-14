/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_4 - var_0);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max(1073741823, 116));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [1] = ((((min(62, (arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))) ? (arr_7 [i_3 - 2] [i_2 - 1] [i_3 - 2]) : (max(var_6, var_4))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_2] [19] = (((min((arr_11 [i_0] [i_1] [i_2] [i_2] [i_0]), var_11))));

                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                var_13 -= (((1 ? 218 : 153)));
                                arr_19 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
