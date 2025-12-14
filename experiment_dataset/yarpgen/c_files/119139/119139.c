/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 += (!((min(((0 >> (var_18 - 617655403))), ((11 ? (arr_4 [i_0] [10] [i_0]) : var_11))))));
                    var_21 = (max(var_21, (3584 >= 1)));
                    var_22 = (((11863 << 1) ? var_12 : (-1 >= 27)));
                }
            }
        }
    }
    var_23 *= var_8;
    #pragma endscop
}
