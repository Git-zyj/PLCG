/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_12;
    var_15 = (((((var_2 ? (min(var_0, var_12)) : (!7385235913897689636)))) ? (((var_0 ? var_2 : var_9))) : (max(var_11, var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (~var_11);
                arr_8 [i_0] [i_0] |= ((!((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = ((!((((((889945464 ? 3962163639 : 6176498418356023913))) ? var_11 : 32505856)))));
                                var_18 *= (((arr_1 [i_0]) ? (~-267555561) : (((arr_0 [i_0] [i_0]) ? (((~(arr_12 [i_0] [1] [i_0] [i_0] [i_0] [i_0])))) : (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? var_11 : 958489907))))));
                            }
                        }
                    }
                }
                var_19 |= (max(12270245655353527712, ((((arr_16 [i_1] [i_1] [i_1] [i_1] [i_0]) ? (((arr_0 [0] [i_1]) ? (arr_15 [9] [i_1] [i_1] [9] [i_1] [i_1] [i_1]) : var_12)) : (arr_14 [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    var_20 = (((~18446744073709551615) ? var_1 : ((18446744073709551615 ? var_12 : (var_13 / 958489907)))));
    #pragma endscop
}
