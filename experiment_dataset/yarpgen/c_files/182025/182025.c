/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (min(748524085, 1919713103));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 &= ((39 ? 1 : 127));
                    var_12 = (!var_9);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_13 = (max(var_13, (((-(max((var_5 < var_7), var_8)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_14 = (max(var_14, var_9));
                            arr_20 [i_3] [i_4] [13] = ((((((max((-32767 - 1), 2375254192))) && (arr_2 [i_4] [i_4]))) ? (((max((arr_15 [i_4]), var_2)))) : (((arr_6 [i_4] [i_4]) ? 493326515 : (min((-127 - 1), (arr_6 [i_4] [i_5])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
