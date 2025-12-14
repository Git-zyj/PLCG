/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 += var_2;
                    arr_8 [i_1] [i_1] [i_2 + 2] [i_2] = 253952;
                }
            }
        }
    }
    var_13 = (var_6 + var_4);
    var_14 = (max(var_2, 10));
    var_15 = var_6;
    var_16 = ((((3847602418 ? (((max(var_1, var_5)))) : (max(1015088733405654328, var_10)))) << (((max(var_9, ((min(41205, 10))))) - 16617574142606929784))));
    #pragma endscop
}
