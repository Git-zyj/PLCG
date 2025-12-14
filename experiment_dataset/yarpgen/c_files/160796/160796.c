/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_7, var_2);
    var_17 = -var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [0] [i_4] &= (arr_10 [i_0] [i_2 + 1] [i_4 - 2] [i_0] [i_4]);
                                var_18 += var_14;
                            }
                        }
                    }
                    arr_12 [i_1] = (((56 - 185) ? 1 : -73));
                }
            }
        }
    }
    #pragma endscop
}
