/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] = 0;
                    arr_8 [i_1] [i_1] = (~var_4);
                    var_12 |= (1 + 1);
                }
            }
        }
    }
    var_13 = -var_11;
    var_14 = (max(var_14, (((((max((((-7186277112063219962 ? 8119 : -4871600805403824786))), var_2))) ? var_6 : var_6)))));
    var_15 = var_2;
    #pragma endscop
}
