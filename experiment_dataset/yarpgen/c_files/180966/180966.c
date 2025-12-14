/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (0 < var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 -= (max(0, (max((arr_4 [i_1 + 1] [i_1] [i_0]), var_14))));
                arr_5 [i_1] = ((6742078667574411764 ? (max(var_13, (var_14 / 4294967295))) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, var_2));
                            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? ((5 << (((arr_6 [i_1 - 1] [i_1]) - 212)))) : ((5 << (((((arr_6 [i_1 - 1] [i_1]) - 212)) + 84))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
