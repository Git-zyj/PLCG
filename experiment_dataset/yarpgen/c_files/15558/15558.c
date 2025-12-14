/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((max(((min(var_2, var_4))), ((var_7 ? var_3 : var_12))))) ? ((min((!87), (var_3 || var_9)))) : var_11))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = 601882680;
        var_15 = (min(var_15, (arr_0 [i_0] [i_0])));
        var_16 = (arr_1 [1] [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] [i_1] = var_5;
                    arr_10 [i_0] [i_0] [i_1] = (!var_10);
                    var_17 = (arr_6 [i_1]);
                }
            }
        }
        var_18 = (max(var_18, 14920937745935086710));
    }
    #pragma endscop
}
