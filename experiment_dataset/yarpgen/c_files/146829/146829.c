/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_13 ^ var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = max((((var_9 / (arr_3 [i_1] [i_2 + 1] [i_2])))), (arr_5 [i_2 + 1]));
                    var_16 = (min(var_16, (!1965687345)));
                }
            }
        }
    }
    var_17 = (max(3931454475, (((!var_7) ? (var_6 || var_11) : ((-3586686579661679673 ? var_6 : -3586686579661679655))))));
    #pragma endscop
}
