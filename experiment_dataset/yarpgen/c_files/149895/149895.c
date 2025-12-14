/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = (max(-114, var_12));
                            arr_10 [i_3] = (((min(-730909654, (arr_7 [i_0])))) >> (((min((arr_7 [i_0 + 1]), (((arr_7 [i_0]) >> (1582849567284464145 - 1582849567284464141))))) - 77077073)));
                            arr_11 [i_0] [i_0] [i_0] = (((((arr_7 [i_2 + 2]) ? (arr_7 [i_2 + 1]) : (arr_7 [i_2 - 2]))) << (((arr_1 [i_0 - 1] [i_0 + 3]) - 17261619854139041291))));
                            var_15 = (-730909654 && var_10);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_4] [i_5] [i_4] |= ((min((arr_3 [i_6] [i_0] [i_0]), 730909653)));
                                var_16 = (max(60745, 730909642));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((-730909654 > -730909654) >> (1582849567284464125 - 1582849567284464125)));
    #pragma endscop
}
