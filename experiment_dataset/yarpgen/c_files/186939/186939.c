/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 |= var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2] [i_1 + 1] [i_1] [i_0 - 3] = var_11;
                            var_16 = (((((-((4094175424 ? (arr_4 [i_0 - 1] [i_1 + 1] [i_2]) : (arr_4 [6] [i_1] [6])))))) ? 1 : 0));
                            var_17 = ((-(((arr_3 [i_0 + 1]) ? (arr_2 [i_0] [1]) : (arr_9 [i_3] [i_2] [i_1 + 1] [i_0 - 2])))));
                            var_18 = ((var_11 ? var_5 : (((arr_6 [i_0 - 2] [i_0 + 1] [i_1 + 1] [i_1 + 1]) ^ (arr_6 [i_0 - 2] [i_0 + 1] [i_1 + 1] [i_1 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_19 *= var_0;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                arr_17 [i_5] = (min(7, 1));
                arr_18 [i_4] [i_5] = (arr_13 [10]);
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
