/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 1] = var_6;
                    arr_9 [i_0] = var_3;
                }
            }
        }
        arr_10 [i_0] = (((((((14665007343154963628 ? 34309 : 40790)) ^ 82))) ? (--40769) : ((0 >> (40766 - 40755)))));
        arr_11 [i_0] = (((((arr_1 [i_0]) ? -24734 : ((var_2 ? var_7 : 40769))))));
        arr_12 [i_0] [i_0] = 50021;
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_19 = var_17;
        var_20 = (((77 ? var_9 : var_12)));
    }
    #pragma endscop
}
