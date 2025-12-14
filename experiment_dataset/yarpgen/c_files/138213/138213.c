/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((min((min(191, 65)), (max(65, var_1))))), (((((var_5 ? var_0 : 4294967295))) ? ((max(65, 24420))) : var_4))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~16);
        var_13 += var_7;
        arr_3 [i_0] = (((+(((arr_0 [i_0]) ? var_6 : var_0)))));
        arr_4 [9] = var_10;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [8] [i_1] [4] = var_5;
                        arr_14 [8] [i_1] = 6;
                        var_14 -= var_10;
                        arr_15 [i_0] [i_1] = ((!(arr_5 [1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
