/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = 0;
                    var_12 = (((((!1) ? ((0 ? 1 : 1)) : -111))) > var_5);
                    arr_11 [i_2] = ((var_11 ^ (((((7366969828837569761 ? 7366969828837569734 : 58372))) ? var_0 : (arr_2 [i_2])))));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_13 &= (((((((var_4 ? var_6 : var_10))) ? (arr_8 [i_3]) : ((((var_6 + 2147483647) >> var_1)))))) ? -593180909 : (min(var_8, ((-(arr_4 [i_0] [i_1 + 1]))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] &= (max(307093483, (3987873813 & -7366969828837569757)));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_14 = (min(var_14, 53));
                        var_15 = -5660038897202017714;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = var_4;
                        var_16 = (min((arr_20 [i_2] [i_5]), ((-(arr_20 [i_1 - 1] [i_2])))));
                        arr_23 [i_0] [0] [2] [i_0] [i_0] [i_0] |= ((((((var_2 >= ((max(var_0, var_5))))))) | (min(var_10, (arr_13 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 1])))));
                        arr_24 [i_0] [i_1 + 2] [i_2] [i_1 + 2] = ((((max(1, (max(var_11, 62))))) ? ((12 ? (arr_19 [i_5] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_19 [i_5] [i_5] [i_5] [i_1 + 2]))) : (arr_0 [i_2])));
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, var_0));
    var_18 = ((var_2 ? (var_2 == var_5) : var_0));
    #pragma endscop
}
