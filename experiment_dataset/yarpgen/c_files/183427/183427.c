/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 |= ((((!(arr_3 [14] [8])))));
                    var_16 = (!-18);
                }
            }
        }
    }
    var_17 = var_2;
    var_18 = (max(var_18, (((var_6 > ((var_8 * (!var_0))))))));
    #pragma endscop
}
