/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((~((~(arr_2 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 -= (min(43886, 0));
                                arr_17 [i_1] [i_3] [4] [1] [i_2 + 1] [i_1] [i_1] = ((min(var_9, 138)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= var_2;
    var_19 = (((((~((43886 ? 21649 : 43886))))) ? var_4 : (~var_1)));
    var_20 -= var_13;
    #pragma endscop
}
