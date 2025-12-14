/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [12] = ((((max(var_12, (arr_9 [i_1] [i_3] [i_1] [14] [i_1 - 1])))) ? ((max((arr_3 [i_0 + 1] [i_1 + 3] [i_2 + 1]), (max((arr_1 [i_0] [i_1]), var_13))))) : (min(562941363486720, ((min((arr_4 [5] [0] [0]), -732618521)))))));
                            arr_11 [i_3] [i_3] [i_1 + 3] [i_3] [i_0 + 1] = arr_0 [i_0 + 1] [i_1 - 1];
                        }
                    }
                }
                arr_12 [i_1 - 2] [10] [i_0] = ((((((arr_7 [i_0 + 2]) << 1))) ? 1 : ((0 << (104 - 84)))));
            }
        }
    }
    var_19 = (max((((!(var_12 && 157)))), var_16));
    #pragma endscop
}
