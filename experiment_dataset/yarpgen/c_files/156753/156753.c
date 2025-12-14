/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((6 ? 55316 : (((((((-1 ? -45 : -1))) && var_6)))))))));
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (arr_1 [i_1]);
                    arr_6 [i_2] [i_1] [i_0] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
