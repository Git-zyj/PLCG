/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_6 [2] [i_2] [i_1] [i_2] = ((46 ? 42 : 8));
                    var_12 = (arr_4 [i_2]);
                    var_13 = (max(var_13, (((((~((min(-5, 31))))) >= ((max((arr_3 [i_1 - 2]), (arr_1 [i_2 + 3])))))))));
                    arr_7 [i_2] = (((((arr_0 [i_0]) ? ((max(11, var_4))) : 4)) < (!-4)));
                    arr_8 [i_2] = ((var_7 ? ((max(-76, -107))) : -74));
                }
            }
        }
    }
    #pragma endscop
}
