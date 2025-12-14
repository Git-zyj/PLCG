/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~65533);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 -= ((798615239 ? (min(-var_1, (((arr_3 [i_0] [i_4]) ? (arr_8 [i_4]) : var_2)))) : -var_8));
                                var_14 = (~-var_7);
                            }
                        }
                    }
                    var_15 = 3496352043;
                    var_16 = (max(var_16, (min(0, 3496352057))));
                }
            }
        }
    }
    #pragma endscop
}
