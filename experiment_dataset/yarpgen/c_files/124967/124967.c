/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_7;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_15 *= (((arr_6 [i_2 + 2] [i_1 + 3] [i_1 + 3]) ? (arr_6 [i_2 + 2] [i_1 + 3] [i_1 + 3]) : (arr_6 [i_2 + 2] [i_1 + 3] [i_1 + 3])));
                        var_16 = (arr_6 [i_1 - 2] [i_1 - 3] [i_1 + 2]);
                        var_17 &= (((arr_8 [i_0] [i_1 - 2] [i_1 - 2] [i_3] [i_2 + 2]) ? (arr_7 [12] [i_0] [i_0]) : (arr_6 [i_1] [i_1] [i_1 - 2])));
                        var_18 = ((-(arr_0 [i_1 + 1] [i_2 + 4])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] = (~11160568556522255002);
        var_19 = (!-var_3);
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 = (((max(((3389773493 ? 127 : 7286175517187296613)), var_2)) - (var_13 || var_8)));
        arr_15 [i_5] = (~1048575);
        var_21 |= var_0;
        var_22 = (max(var_22, ((min(-44597, (((arr_4 [i_5]) ^ (arr_4 [i_5]))))))));
    }
    var_23 = 0;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            {
                var_24 = (arr_9 [i_7]);
                arr_21 [i_7] [i_7] [3] = 16831;
            }
        }
    }
    #pragma endscop
}
