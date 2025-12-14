/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] = (((((arr_5 [i_0] [i_0 - 1]) & var_4)) <= (((((arr_5 [i_0] [i_0 + 1]) < var_16))))));
                    arr_10 [i_0 - 1] [i_0 - 1] [i_0] = (((arr_4 [i_2] [i_1] [i_0]) != ((((arr_4 [i_2] [i_1] [i_0]) > (arr_8 [i_0 - 1]))))));
                }
            }
        }
    }
    var_18 = ((((~(var_11 && var_13)))) * (((!var_15) ? var_2 : (var_6 ^ var_6))));
    #pragma endscop
}
