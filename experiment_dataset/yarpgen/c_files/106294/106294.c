/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1932133473567802860, 1932133473567802860));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [6] [i_1] [10] [i_2] = var_7;
                    arr_9 [i_0] [i_0] [i_2] = ((((((1 < 1) ? 1932133473567802859 : (((max((arr_0 [i_0] [i_0]), var_1))))))) ? ((max(1, 17850))) : (max(((min(1, (arr_0 [i_0] [i_0])))), (arr_6 [i_1] [i_2])))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_14 [2] [i_2] [i_3] = (12458412869064733300 / 25209);
                        arr_15 [9] [i_1] [i_2] [i_0] [i_2] = (arr_2 [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
