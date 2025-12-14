/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_13);
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 += ((((((arr_1 [i_0 - 1] [i_0 + 2]) & (arr_1 [i_0 + 1] [i_0 - 1])))) ? (((arr_1 [i_0 + 1] [i_0 + 2]) ? (arr_1 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0 - 2] [i_0 + 2]))) : (((arr_1 [i_0 - 2] [i_0 + 1]) ? (arr_1 [i_0 - 2] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 - 2])))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_17 = (!55086);
                    var_18 = ((18650 ? 65520 : 65535));
                }
            }
        }
    }
    var_19 = ((38432 >= ((max(26481, 55099)))));
    #pragma endscop
}
