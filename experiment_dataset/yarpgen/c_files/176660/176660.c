/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((-26054 ? ((-15758 ? var_13 : -26054)) : -26045));
                    arr_9 [i_2] [5] [i_2] [i_0] = (min((!271990672), (arr_1 [i_0] [2])));
                }
            }
        }
    }
    var_16 = (((((min((min(254, 26060)), (1025497080 < 17179869183))))) <= ((var_8 ? ((min(var_11, var_3))) : (max(var_2, var_9))))));
    #pragma endscop
}
