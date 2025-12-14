/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_13 = 3855727543;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 += ((!(((arr_8 [i_0] [i_2 - 3] [12]) < 55404))));
                    var_15 |= 0;
                }
            }
        }
        arr_9 [i_0] = var_3;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_16 = (((arr_10 [i_3 - 1]) > (arr_7 [i_3] [i_3 - 2] [i_3 + 1])));
        arr_13 [i_3] = (((arr_11 [i_3] [i_3 - 2]) > (arr_11 [i_3] [i_3 + 1])));
        var_17 += (((arr_4 [i_3]) ? (arr_4 [i_3]) : var_8));
    }
    var_18 = var_1;
    #pragma endscop
}
