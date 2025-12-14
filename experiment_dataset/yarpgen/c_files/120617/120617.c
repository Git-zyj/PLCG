/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= -7227577045911746025;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_0] = ((min(var_1, 1559337401186840389)));
                    var_18 = (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((((((18812 ? 0 : 65535))) / (min((arr_5 [i_0] [i_1] [i_2] [i_4]), 3710310222)))));
                                var_20 ^= (((((~(~65514)))) ? var_3 : ((((arr_0 [i_0 + 1]) || 21)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
