/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((62953 ? 576040042442552687 : 3488123497));
    var_16 -= ((1 + ((((95 ? 1 : 0)) * 65532))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (!1);
                    var_18 = ((((+(((arr_2 [18] [i_0] [i_0]) ? (arr_0 [i_0]) : var_1)))) | ((((132 != 27) ? 8256 : 166)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_13 [i_3] [7] [i_4] = (27 >> 16);
                    arr_14 [i_4] [i_5] = ((229 ? 1 : 1));
                    arr_15 [i_3] [i_4] [i_5] &= (!51422);
                }
            }
        }
    }
    #pragma endscop
}
