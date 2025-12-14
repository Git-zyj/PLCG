/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (arr_6 [i_0] [i_0 - 3]);
                arr_7 [i_0] [i_1] [i_0] = -2147483647;
                var_20 -= -65535;
                arr_8 [i_0] = (var_0 % -64);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 -= (min((min(54287, 65535)), 22669));
                    arr_16 [i_3] [i_3 + 2] [i_4] [i_3 + 2] = (!var_6);
                    arr_17 [i_2] [i_3] [i_4] = (((((17141 < 65535) % -var_11))) ? (((arr_11 [i_2 - 1] [i_2 - 1]) ? (arr_11 [i_2 - 1] [6]) : (arr_11 [i_2 - 2] [12]))) : (((min((arr_10 [i_2] [i_2]), 97)))));
                }
            }
        }
    }
    #pragma endscop
}
