/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (-15 >= (6433084770511211184 * 1152921504606846975));
                    var_16 *= (max(var_4, (max((arr_4 [i_0] [i_1] [i_2]), 15))));
                    arr_6 [i_1] [i_1] [i_1] = (arr_2 [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
