/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(((19277 ? -19303 : var_5)), (!var_10)));
                arr_5 [i_1] = (max(((min(-19278, 27322))), (min(((0 ? (arr_0 [2]) : var_14)), -var_13))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [1] [1] [4] [i_5] [i_2 + 3] [1] = ((((-(max(var_14, 1)))) * (((1 ? (!2258665270) : 6806)))));
                                var_22 = var_6;
                                var_23 = (min(var_23, (((~((-((0 ? 3494200884 : (arr_17 [i_2] [i_4] [i_5 + 1] [i_6]))))))))));
                            }
                        }
                    }
                    var_24 |= ((!((((((-1518448156 ? 0 : var_4))) ? (arr_21 [i_3] [2] [2] [i_3]) : -2029337564411952009)))));
                }
            }
        }
    }
    #pragma endscop
}
