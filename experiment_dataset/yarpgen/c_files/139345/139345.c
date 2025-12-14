/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((21 ? ((max(var_5, var_4))) : var_10))) ? var_10 : (~57131)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 = ((3 ? (arr_1 [i_0 + 1] [i_0 + 1]) : 18));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_3] = (~1);
                        var_13 = ((23 ? ((((arr_4 [i_1] [i_3] [i_2 + 1]) || 8427))) : 19));
                    }
                }
            }
        }
        var_14 = (-20 + var_7);
        arr_12 [i_0 - 2] [i_0] = ((-(((!(arr_5 [10] [2] [2]))))));
    }
    #pragma endscop
}
