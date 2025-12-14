/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = 12;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_13 |= ((65524 <= (max(-12, 436827545))));
                        var_14 *= (((((var_11 ? (arr_7 [i_2] [i_2] [i_0] [i_2] [i_2]) : (~3270953739604258189)))) ? (((arr_3 [i_3 + 1] [i_3 + 1] [i_3]) - -30265)) : (arr_5 [18])));
                    }
                }
            }
        }
        var_15 = (arr_2 [13]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_16 -= ((!(arr_9 [i_4])));
        var_17 += (!0);
    }
    var_18 = 65524;
    #pragma endscop
}
