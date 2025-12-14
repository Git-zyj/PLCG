/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] = (((arr_8 [i_0] [i_0] [i_2] [i_0]) ^ ((((~0) ^ 3)))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = (arr_7 [i_0] [i_1] [8]);
                    var_20 = (((((var_1 >> ((((72 ? (arr_3 [i_1]) : (arr_4 [i_0] [i_1]))) - 60))))) ? ((max((arr_2 [i_2 + 2]), (arr_4 [1] [i_2 + 3])))) : (((arr_1 [i_1]) ? ((min(20, (arr_4 [i_0] [i_1])))) : -20))));
                }
            }
        }
    }
    var_21 = (min(var_21, var_2));
    var_22 = (var_12 >= var_3);
    var_23 = (min(var_7, (max((max(var_5, var_3)), var_7))));

    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_24 = (max((arr_13 [i_3] [i_3]), ((7608794625370196420 / (((arr_13 [i_3] [5]) ? (arr_12 [i_3]) : 10427151072947478294))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_25 *= (min(((((((268435456 ? var_13 : -8))) != var_8))), (arr_15 [i_4] [i_4] [i_6])));
                        var_26 += (~var_9);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_27 = (((arr_24 [i_7]) + var_11));
        var_28 |= var_19;
        var_29 += (arr_25 [13]);
        arr_27 [7] = (((((arr_26 [17]) ? var_18 : (arr_25 [i_7]))) != ((var_7 ? 27 : 0))));
        arr_28 [i_7] = (arr_25 [i_7]);
    }
    #pragma endscop
}
