/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (arr_5 [i_0] [i_1] [i_0] [i_2]);
                    arr_7 [i_2] [i_1] [i_2] = ((!(arr_0 [i_0])));
                }
            }
        }
    }
    var_13 = var_4;
    #pragma endscop
}
