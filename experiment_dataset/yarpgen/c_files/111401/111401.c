/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 *= (!1);
                    var_15 = (max(var_15, (((26185 ? (min((arr_1 [i_2]), ((max(7670, -1))))) : -1)))));
                    var_16 += (((((~(((arr_6 [i_0] [i_1] [i_2]) ? var_3 : var_12))))) <= 15350463517523454988));
                }
            }
        }
    }
    #pragma endscop
}
