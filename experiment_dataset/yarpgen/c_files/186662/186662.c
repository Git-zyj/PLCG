/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_17 = (min((~1), 0));
        var_18 = (arr_3 [i_0] [1]);
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_19 = ((((((arr_9 [i_1] [i_3] [i_1] [i_2]) % (arr_2 [i_1] [i_1 - 1])))) ? ((~(arr_6 [i_2]))) : (min((arr_4 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 + 1])))));
                    var_20 = ((+((min((!1), (arr_0 [i_1 + 2]))))));
                }
            }
        }
        var_21 ^= 31;
        var_22 = (((!((((arr_3 [i_1 + 1] [1]) ? var_10 : var_4))))));
    }
    var_23 = var_16;
    #pragma endscop
}
