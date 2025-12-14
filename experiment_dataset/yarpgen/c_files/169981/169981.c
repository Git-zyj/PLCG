/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [1] [0] = (var_4 >= 1);
        arr_5 [i_0] [i_0] |= (arr_3 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_0 [i_1 + 1] [i_1 - 1])));
                    var_17 = (!149);
                    var_18 = ((1 ? (arr_2 [i_0]) : -0));
                }
            }
        }
    }
    var_19 = (!var_4);
    #pragma endscop
}
