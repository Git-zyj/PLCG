/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_15 ^= var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((((var_6 ? var_5 : ((((arr_1 [i_0]) | var_12))))) > ((((!((((arr_4 [i_0] [i_0]) / var_2)))))))));
                    var_17 = (max((1950425661 & var_2), (arr_3 [i_0])));
                    var_18 &= (arr_3 [6]);
                    var_19 = (min(var_19, ((((((var_1 | var_14) ? -906960370 : ((max(var_12, 25471))))) == ((87 ? 1950425680 : -1950425676)))))));
                }
            }
        }
        var_20 &= (((!(((var_12 ? (arr_1 [i_0]) : -44))))));
        arr_8 [i_0 - 4] = (arr_5 [i_0 - 4]);
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_21 *= min((((~var_6) ? var_9 : (max(var_1, (arr_9 [i_3] [i_3]))))), (!49072));
        var_22 = ((~(max((arr_6 [i_3] [i_3 + 2]), var_5))));
    }
    var_23 = ((var_8 ? var_5 : (!var_6)));
    #pragma endscop
}
