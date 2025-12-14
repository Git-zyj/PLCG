/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? (((var_1 < ((1 ? 1 : -1828326248))))) : ((max((max(var_0, 1)), 1)))));
    var_12 = -1828326248;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = (((((((arr_6 [i_0] [i_1] [13]) ? var_9 : (arr_6 [i_0] [i_0] [i_2]))))) > ((-1828326248 ? (max(1828326247, 25)) : var_2))));
                    var_13 = (max(var_13, (arr_3 [i_1 + 1] [i_0])));
                }
            }
        }
    }
    var_14 = (max(1, 1828326275));
    #pragma endscop
}
