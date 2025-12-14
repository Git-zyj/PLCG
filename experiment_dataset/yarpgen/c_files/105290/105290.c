/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = -24062;
    var_17 = ((var_5 ? (!4107) : ((((((var_6 ? var_4 : var_3))) || -18633)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = ((var_5 ? ((var_6 ? 0 : (arr_4 [i_2] [i_0] [i_0] [i_0 - 4]))) : ((-(arr_4 [i_0] [i_0] [i_0] [i_0 - 3])))));
                    arr_8 [i_0] [i_0] [0] = max((((arr_4 [i_0] [i_0] [i_1 + 2] [i_2 - 1]) ? 1 : -24299)), (!0));
                    arr_9 [i_0] [i_0] [i_1] [2] = ((!((((arr_0 [i_0]) ? -var_8 : (max(var_14, var_6)))))));
                }
            }
        }
    }
    #pragma endscop
}
