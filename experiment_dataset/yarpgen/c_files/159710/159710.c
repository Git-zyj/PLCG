/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(1023, (((arr_2 [i_0 + 1]) * var_3))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 1] [3] [i_2] [i_3] = ((var_9 ? ((((arr_6 [i_0 - 1] [i_1] [i_2] [i_3]) >= (240 == -1027)))) : (!4121886401)));
                            arr_11 [i_0 + 1] [8] [i_3] [4] = (max((124 || 1), (!-1003)));
                            var_12 = ((!(arr_3 [i_0 - 1] [i_1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
