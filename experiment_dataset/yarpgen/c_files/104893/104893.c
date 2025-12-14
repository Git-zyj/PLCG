/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2 + 2] [i_2 + 2] = ((((((4503597479886848 ^ (arr_7 [i_0] [i_0 + 2] [i_0] [i_0]))) * 0)) % (max((5140172262481597754 >= 2792474719), (9889238493694610827 % 293924684)))));
                    var_15 = (((((!(arr_6 [i_0] [i_0] [i_0 - 1])))) <= ((max(1, 1)))));
                }
            }
        }
    }
    var_16 = var_12;
    var_17 = (max((((1 << 1) & var_6)), (((var_5 / ((var_9 ? var_12 : -72)))))));
    #pragma endscop
}
