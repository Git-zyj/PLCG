/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-2147483647 - 1);
    var_18 = ((-((~((var_12 ? var_0 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 1424158947965101981;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = ((!(1027546513 != 17441606856526671596)));
                            var_20 -= ((((arr_7 [11] [7] [i_2]) ? (arr_6 [i_0] [i_1 - 3] [i_2]) : (min(var_6, 7178)))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (~var_15);
    #pragma endscop
}
