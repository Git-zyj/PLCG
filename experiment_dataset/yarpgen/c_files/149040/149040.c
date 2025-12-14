/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((min(((110 ? 655576566 : 3639390713)), (((var_3 ? (arr_5 [i_1 + 2] [i_1 - 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 20;i_4 += 1)
                            {
                                arr_12 [i_4] [i_3 + 1] [i_2] [i_1] [i_0] [i_0] = (var_8 ? -1382888738 : 3);
                                var_15 = var_5;
                                var_16 = var_0;
                            }
                            var_17 = (arr_11 [i_3 - 1] [i_3 - 1] [i_2] [i_2] [i_2]);
                            var_18 = (max(var_18, var_10));
                            var_19 = ((var_4 != ((~(~995770366)))));
                            var_20 = var_3;
                        }
                    }
                }
            }
        }
    }
    var_21 = -4291402688;
    var_22 = var_1;
    #pragma endscop
}
