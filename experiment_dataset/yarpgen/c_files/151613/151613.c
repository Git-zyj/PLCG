/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (!-2846);
                    var_18 += (~-1);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            {
                arr_12 [i_3 - 3] = (-(((arr_4 [i_3 - 1] [i_4 - 2] [i_4 + 1]) ? (arr_5 [i_3] [i_3 + 1] [i_3] [i_4 + 1]) : 32764)));

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_16 [i_3 - 2] [i_4] [i_3 - 2] [i_3] &= ((+((max((arr_10 [i_4 - 4] [i_4 - 1]), (arr_10 [i_4] [i_4 - 1]))))));
                    arr_17 [i_4 + 1] [i_5] = ((!((max(2277813824, (arr_3 [i_3 - 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
