/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = (min((((!(arr_1 [i_0 - 1])))), (arr_4 [i_2 - 1])));
                    arr_12 [i_0 - 1] [i_0] [i_0] = (((arr_5 [i_2 - 1] [i_2]) - (min(4032, (arr_5 [i_2 + 1] [13])))));
                }
            }
        }
    }
    var_12 = (-17731 ? var_4 : (((((7082547048479002281 ? var_6 : var_5))) ? ((min(var_7, var_1))) : var_0)));
    #pragma endscop
}
