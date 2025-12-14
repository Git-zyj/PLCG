/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 -= var_0;
                var_20 = var_17;
                var_21 = (min(var_21, (min(var_6, 511))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_22 = ((((((((var_7 ? var_18 : (arr_4 [i_1])))) ? (arr_8 [i_3] [i_3] [i_3 + 1] [i_0 + 4]) : var_2))) ? var_15 : (min(17060957124248076278, 274877906943))));
                            var_23 = (min(var_23, 4294967295));
                            var_24 = (max(((min(var_2, var_1))), -2147483643));
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_8 | var_0);
    var_26 = (min(var_16, ((((max(var_2, var_7))) ? var_11 : var_17))));
    #pragma endscop
}
