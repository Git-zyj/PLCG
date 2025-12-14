/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 &= (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = (max(((0 ? ((max(2008252542, var_5))) : (max((arr_1 [18]), (arr_0 [i_0]))))), (arr_0 [i_0])));
        var_13 -= var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (((((-(arr_6 [i_0] [i_0])))) ? (arr_5 [i_2] [i_2] [i_2]) : 293120891));
                    arr_9 [i_0] [i_0] [5] = (max((~var_3), (arr_5 [i_0] [i_0] [i_0])));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_15 = (min(var_15, (arr_6 [i_3 - 1] [i_1])));
                        var_16 = (max(var_16, (arr_10 [i_3 - 1] [i_3] [19] [i_3])));
                        var_17 -= arr_5 [12] [i_2] [i_3];
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_18 &= (min(11704418911420515083, 1));
                        var_19 += (max(var_10, ((((max((arr_6 [i_0] [i_0]), var_7))) ? (arr_10 [i_0] [i_1] [12] [i_4]) : (arr_8 [i_2 - 2] [i_1] [12] [i_2])))));
                        var_20 = (max((max((arr_1 [i_4 + 1]), (arr_1 [i_4 + 1]))), var_7));
                        var_21 ^= (arr_13 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [14] [18] [i_5] = (arr_6 [i_0] [11]);
                        arr_20 [i_0] [14] [i_5] [i_5] = (((~(max((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_4 [1]))))));
                        var_22 = (((min((arr_12 [i_2 + 2] [i_2 - 2] [i_2 - 2]), (arr_12 [i_2 + 2] [i_2 + 1] [i_2 + 2]))) - (arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 1])));
                        var_23 ^= (11453359091549773696 | 48265);
                    }
                }
            }
        }
    }
    var_24 -= (max((min(((min(var_5, var_6))), (max(1, -1)))), var_6));
    var_25 *= (max(var_2, var_0));
    var_26 = ((((-(1 && 21490))) != 0));
    var_27 *= (max(240, (max((~var_10), (var_4 * var_2)))));
    #pragma endscop
}
