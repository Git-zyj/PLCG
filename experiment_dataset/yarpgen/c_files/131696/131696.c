/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_0 - 2] [i_2] = (((((arr_1 [i_0 + 2]) ? (arr_4 [i_0 - 1] [i_2 + 2]) : (arr_6 [i_0 + 1]))) % (arr_6 [i_1])));
                    arr_8 [i_0] [i_1] [i_2] = ((((((((arr_3 [i_0 + 3] [i_0 + 3] [i_0]) != var_6)))) | (((arr_6 [i_0]) ? var_7 : (arr_4 [i_0 - 2] [i_0 - 2]))))));
                }
            }
        }
    }
    var_12 = (min((128 && 48088), var_3));
    var_13 = ((((((min(var_2, var_10))) ^ var_9)) & ((((var_5 ? var_5 : var_5)) >> var_10))));
    #pragma endscop
}
