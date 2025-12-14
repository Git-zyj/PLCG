/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((arr_6 [i_2 + 2] [i_2 - 1] [i_2]) ? (arr_6 [i_2 + 3] [i_2 + 3] [i_2 + 2]) : var_9));
                    var_17 = (arr_6 [i_0] [i_1] [i_2]);
                }
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_18 = var_9;
                                arr_19 [i_4] [i_1] [8] [i_1] [7] = (((1113044721 ? 4294967295 : 2832791678107203600)));
                            }
                        }
                    }
                }
                var_19 = (min(var_19, ((((((max(0, var_13))) ? (min((arr_17 [i_0] [i_1] [i_1]), var_1)) : (max((arr_11 [i_0]), 1554)))) / var_0))));
            }
        }
    }
    #pragma endscop
}
