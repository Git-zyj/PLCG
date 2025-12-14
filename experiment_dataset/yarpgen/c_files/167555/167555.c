/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((max((min(242, 18748), 6340))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 ^= (-(max(5654376736021341858, 0)));
                                var_16 = (max(var_16, ((max(6340, -6341)))));
                                arr_13 [i_3] [i_3] = ((~(max(-1, (((arr_11 [i_1] [i_3] [i_1] [i_1] [i_1 + 1]) + 5654376736021341858))))));
                                arr_14 [i_4 + 1] [i_3] [4] [i_2] [i_3] [4] = (max((((arr_3 [i_0 - 2] [i_3] [i_4 + 1]) ? var_2 : (arr_12 [i_0 + 1] [i_1] [i_1 - 1]))), 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, var_3));
    var_18 = (min(var_18, (3352757645 + 110)));
    var_19 = 145;
    var_20 = ((var_11 ? ((((0 > var_5) <= ((min(var_0, var_11)))))) : var_7));
    #pragma endscop
}
