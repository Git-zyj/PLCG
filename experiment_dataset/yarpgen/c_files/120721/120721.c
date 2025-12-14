/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_5);
    var_14 = (min((min(var_7, -7037092161653895342)), (((max(3047897342, var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] = 1112952100;
                    arr_10 [i_0] [i_1] [i_2] = (min(((((min(var_2, var_6)) <= (arr_7 [i_0 - 2])))), (max(var_6, var_8))));
                }
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
