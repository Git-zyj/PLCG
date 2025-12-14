/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~536870911);
    var_18 = ((((max(var_4, var_6))) ? (~var_11) : 536870908));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (max(17589748080659507775, (((((arr_3 [i_0]) && var_16))))));
        var_20 *= 83;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 = ((((arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1]) ? (arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1]))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] = (min((min((max(242, -1295735308)), ((var_6 ? -306182167 : 1295735301)))), ((((536870911 ? 5383 : 18446744073172680689))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1)
    {
        var_22 = (((arr_1 [i_4 - 4]) && ((((arr_15 [i_4 - 4]) - var_2)))));
        var_23 ^= (((((0 ? 242 : 68))) < 1));
        arr_17 [i_4] = ((((max(18446744073172680689, var_4))) ? (((((18446744073172680689 && (arr_2 [i_4 + 2] [i_4]))) ? (((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_4 [i_4] [22]) : -1295735299)) : var_5))) : (max(-83, (arr_14 [i_4])))));
    }
    var_24 = 536870891;
    var_25 = var_0;
    #pragma endscop
}
