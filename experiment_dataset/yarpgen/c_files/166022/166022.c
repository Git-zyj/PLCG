/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (var_8 * var_8);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 1] [5] = (((~1) ? 17 : ((max((~4007906049), (((8211 ? 34 : var_7))))))));
                    arr_10 [i_0 - 2] [4] [i_0] [i_2] = (((((!-2022256233) == 0)) ? (487 || 0) : (min((min(var_14, 6)), 13))));
                }
            }
        }
    }
    #pragma endscop
}
