/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 25;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (~var_8);
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((((min(var_1, var_10))) ? (max(7768978755304417137, (-4204 | var_18))) : (((var_9 | ((-26531 ? var_2 : (arr_1 [i_0] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
