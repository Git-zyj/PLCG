/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_5, var_6));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((115 != ((-1758301073 ? 255 : (arr_0 [i_0 - 1])))));
                    arr_8 [i_1] = (min((arr_0 [i_2 - 1]), (max((((arr_4 [i_1]) + 0)), (arr_0 [i_0])))));
                    var_11 = (arr_6 [i_0]);
                }
            }
        }
    }
    var_12 = ((0 ? var_2 : (148 > 8547575856423408946)));
    #pragma endscop
}
