/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (arr_1 [i_0 + 1]);
        var_17 = (arr_1 [i_0]);
        var_18 |= -1871685353;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = 78;
        var_19 = (min(var_19, -29206));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = (((((((arr_8 [i_2] [2]) ? 7467350249005799245 : (arr_0 [i_2]))))) + (arr_8 [i_2] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        var_20 = ((var_15 ? (arr_12 [4] [i_3 - 3]) : -1871685325));
                        var_21 = 1243018237;
                        arr_18 [i_2] [i_4] [i_4] [i_5 - 1] = ((~(((max(var_15, (arr_16 [5] [2])))))));
                    }
                }
            }
        }
    }
    var_22 = (min(-25, 12441));
    var_23 = (min(((((min(var_0, var_11))) ? 29 : var_5)), var_9));
    #pragma endscop
}
