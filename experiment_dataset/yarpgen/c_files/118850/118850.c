/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max((((!(((7041 ? 3472 : 58508)))))), 58512);
    var_11 = ((~((~((var_2 ? 28 : var_3))))));
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = ((((-0 ? ((max(var_5, 62041))) : (arr_3 [21]))) <= (arr_0 [i_1 + 1] [i_1 - 1])));
                    arr_6 [i_2] = 33;
                    var_14 = (max((~1497318658), (arr_5 [i_1 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
