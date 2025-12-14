/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (var_0 <= var_9);
    var_16 -= ((min(1146933590, 1379234597)));
    var_17 ^= var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (((((var_11 ? ((var_11 ? -9197882006230768968 : 9197882006230768969)) : var_1))) ? var_8 : (arr_0 [i_0])));
                    var_19 -= (min((((118 >= (arr_0 [i_1])))), (min((arr_1 [i_2 - 1]), (arr_1 [i_2 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}
