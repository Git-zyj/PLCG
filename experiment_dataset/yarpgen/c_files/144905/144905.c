/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (arr_0 [i_0]);
                    arr_8 [i_1] [i_1] [i_1] = 3972316496852615565;
                }
            }
        }
    }
    var_18 = (max((~var_1), var_3));
    var_19 = var_4;
    #pragma endscop
}
