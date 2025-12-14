/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [1] = (((arr_1 [i_0]) ? (-9223372036854775807 - 1) : ((-27 ? var_0 : 19200))));
        var_20 *= (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_14 [1] [i_1] [i_2] [i_3 + 1] = (((var_14 & var_6) ^ ((((arr_4 [i_1 - 1] [i_2]) ^ (arr_4 [i_0] [i_1 + 1]))))));
                        arr_15 [i_0] = (~13803805094784935188);
                    }
                }
            }
        }
    }
    var_21 = ((var_0 ? 11258714148330269232 : ((((((var_18 ? -103 : var_6)) > var_1))))));
    #pragma endscop
}
