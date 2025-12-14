/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 ^= (((arr_7 [i_1] [i_0 + 2] [5]) >= ((min((arr_7 [i_0] [i_0 + 2] [i_2]), (arr_7 [i_0] [i_0 + 2] [i_2]))))));
                    arr_9 [i_0] [i_0] [i_2] = (max(1, (min((arr_7 [i_0] [i_1 + 1] [i_0 - 1]), 1))));
                    var_13 = (1 != 1);
                }
            }
        }
    }
    var_14 &= ((((1 << 0) << 1)));
    var_15 = var_8;
    var_16 = (var_8 >= var_1);
    #pragma endscop
}
