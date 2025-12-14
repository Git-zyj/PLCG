/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_1] = (~(arr_3 [i_2] [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (arr_1 [i_2])));
                                var_15 = ((!((!((!(arr_11 [i_0] [i_1] [i_2] [i_3] [i_3])))))));
                                var_16 = (~(arr_5 [i_1]));
                            }
                        }
                    }
                    var_17 = arr_3 [i_0 - 1] [i_1] [i_0 - 1];
                }
            }
        }
    }
    var_18 &= var_5;
    var_19 = (!-2094342881);
    #pragma endscop
}
