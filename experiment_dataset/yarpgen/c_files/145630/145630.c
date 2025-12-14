/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_6;
    var_11 = var_3;
    var_12 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_13 &= (((arr_2 [16] [i_1 + 2] [i_1 - 2]) ? (arr_0 [6]) : var_3));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 = ((((max((arr_6 [i_1 + 2] [i_1 - 2] [i_2]), (arr_6 [i_1 + 1] [i_1 - 2] [i_2])))) ? ((((var_5 ^ (arr_3 [i_0]))) % var_8)) : ((((arr_2 [i_1 - 1] [i_1] [i_1 - 2]) - (arr_6 [i_1 - 2] [i_1] [i_2]))))));
                    var_15 = ((!(arr_3 [i_1 - 2])));
                }
                arr_8 [i_1] [i_0] = ((-((((((arr_4 [i_0] [i_0] [i_0]) * var_7))) * var_2))));
            }
        }
    }
    #pragma endscop
}
