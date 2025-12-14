/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [3] = ((((min(130, ((130 ? 45 : (arr_6 [i_2] [i_1] [i_0 - 1] [i_0])))))) ? ((((((arr_2 [i_0] [i_0 - 1] [i_2]) >= (arr_2 [i_1] [i_2] [i_2])))))) : ((-((-5531 ? 0 : 293541799))))));
                    arr_9 [i_2] [i_1] = (min(-67108864, -1955612195));
                    var_14 = (((((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 1 : (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) & 45455));
                }
            }
        }
    }
    var_15 = var_5;
    var_16 = (min(var_16, var_10));
    #pragma endscop
}
