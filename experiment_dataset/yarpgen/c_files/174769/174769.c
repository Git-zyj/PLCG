/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 1]) : 12458302263249507212));
        arr_4 [i_0] [i_0] = (var_7 && 40695);
        arr_5 [i_0] = (arr_0 [i_0 + 2]);
        arr_6 [i_0 - 1] [i_0] = (((-1 + 2147483647) << (var_6 - 84)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_22 -= (((arr_9 [i_0 - 1] [i_3] [i_2]) <= (32767 <= 3308295436)));
                        var_23 -= ((!(((94608315 ? var_14 : (arr_15 [i_0] [i_0] [2] [i_3]))))));
                        arr_17 [i_0] [i_0] [i_2] [i_3] = (((((arr_13 [i_3] [3]) >= 118)) ? -16325 : (((-32337 > (arr_11 [i_0]))))));
                    }
                }
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
