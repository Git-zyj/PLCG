/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_11;
    var_19 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((-((-(arr_1 [i_1 + 1] [i_1 - 1])))));
                var_21 = ((34359738367 ? var_17 : (var_2 ^ var_12)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_22 |= var_10;

                            for (int i_4 = 3; i_4 < 24;i_4 += 1) /* same iter space */
                            {
                                var_23 = -84;
                                var_24 = (((((163 ? var_8 : 128))) ? -11 : (((232 > (max(var_12, var_3)))))));
                            }
                            for (int i_5 = 3; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                arr_15 [8] [i_3] [10] [20] [i_3] |= (((-854074680075929515 % var_4) | (((~(arr_11 [i_0] [i_1] [1] [i_3] [i_3]))))));
                                var_25 = (((((((131 & 72057589742960640) > (112 % var_8))))) | ((72057589742960648 ? ((var_3 ? var_3 : var_14)) : (var_4 >= 16768198703160577178)))));
                            }
                            var_26 = ((((0 ? 0 : -4747529966989878749)) | 0));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
