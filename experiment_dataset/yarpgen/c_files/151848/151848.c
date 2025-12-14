/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (59 >= 3);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_1] |= (37023 % 1);
                    var_21 &= (~-71);
                    var_22 |= ((-(37012 + 58)));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_12 [23] [11] [20] [i_3] = (1844570653 / -1256091283);
                    var_23 = (max(1329, 14));
                }
                arr_13 [i_0] = 1;
            }
        }
    }
    var_24 = (min(16489301819505994922, var_7));
    #pragma endscop
}
