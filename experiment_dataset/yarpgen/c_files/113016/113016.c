/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? ((((182 + -1697748290) != (!var_8)))) : (((((var_16 ? 74 : var_3)) > var_10)))));
    var_18 = (((((~(3466006312566087556 && var_14)))) ? var_1 : (max((max(27364, var_15)), (~var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (arr_1 [i_1]);
                    arr_7 [i_1] [1] = (min((-9223372036854775807 - 1), ((max((((arr_2 [3]) % (arr_6 [i_0] [i_1]))), 9223372036854775807)))));
                }
            }
        }
    }
    #pragma endscop
}
