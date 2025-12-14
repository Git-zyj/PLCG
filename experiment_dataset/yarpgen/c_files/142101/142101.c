/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, ((((((arr_0 [i_0]) >> (((arr_0 [i_0]) - 16750275484763282363)))) * (1 < 80))))));
        var_20 = var_18;
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_21 = (((max((min(7784857084823544224, -43)), (arr_4 [i_1 + 1] [i_1] [i_1])))) ? (((~(~var_0)))) : var_15);
                    arr_8 [i_1] [i_1] [i_3] = (min((max(7784857084823544224, 234)), (max((arr_4 [i_1 - 1] [i_1] [i_1]), (arr_4 [i_1 + 1] [i_1] [i_1])))));
                    var_22 = (min((((1 ? ((4294138949 ? 155 : 1430347866)) : (-127 - 1)))), var_5));
                    var_23 = ((((max((min(0, 3665)), 50699))) ? var_11 : var_11));
                }
            }
        }
    }
    #pragma endscop
}
