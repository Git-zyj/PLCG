/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 = (max(((-((var_6 ? (arr_7 [i_0] [10] [i_2]) : var_2)))), (arr_3 [7] [i_0])));
                    var_22 = (~var_4);
                    var_23 = ((0 > (49460 * 16075)));
                }
            }
        }
    }
    var_24 += 16061;
    var_25 -= var_16;
    #pragma endscop
}
