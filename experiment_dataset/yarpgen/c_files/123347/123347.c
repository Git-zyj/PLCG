/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -103;
    var_21 = ((var_11 + var_14) >> ((((var_15 ? 119 : ((min(var_4, var_2))))) - 119)));
    var_22 -= (((((var_0 >= 13056293959269077425) / -var_12)) > ((((((var_6 ? var_7 : var_8)) < (3512777666 / var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [8] |= (((arr_3 [i_0]) ? 3512777666 : ((782189630 ^ (arr_1 [8])))));
                arr_5 [i_0] [i_1] [i_0] = 782189634;
                var_23 = (min(var_23, var_7));
            }
        }
    }
    #pragma endscop
}
