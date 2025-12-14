/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] = (var_18 > var_18);
                            arr_11 [i_0] [i_2] [i_0] [i_0 - 1] = ((((max(((-256 ? 2 : (arr_7 [i_1] [i_1] [i_1] [i_1]))), -1790793443))) ? var_6 : ((((arr_5 [i_2]) || (arr_4 [i_1 - 3] [i_0 + 2]))))));
                        }
                    }
                }
                arr_12 [i_1 + 2] [4] [i_0] = ((+((~(((arr_9 [8] [i_1] [8] [10]) ? var_17 : var_14))))));
                var_19 = (min(var_19, var_16));
                arr_13 [i_0] = ((+(((arr_8 [i_1] [i_0 + 2] [i_1] [i_1] [i_1] [i_1 + 1]) ? (var_14 && 1) : ((0 ? 210 : 89))))));
            }
        }
    }
    var_20 = ((!((((1889201421201311715 * 65) * var_7)))));
    var_21 = ((-66 ? (((-249687950186054610 - 492854658) + var_3)) : -29905));
    var_22 = var_4;
    var_23 = (min(var_16, (var_4 || -113)));
    #pragma endscop
}
