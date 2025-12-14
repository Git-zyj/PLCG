/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min((var_12 != var_13), (((var_12 + 2147483647) >> (var_14 - 207))))), ((min(var_8, (min(var_6, var_4)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [8] [i_0] = (~var_4);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((max(-1149663086818272453, 1)) != ((((arr_7 [i_0] [i_1] [i_2] [i_2 + 1]) ? (arr_6 [i_0] [i_0] [i_0]) : (!var_4))))));
                    arr_10 [i_0] = (arr_6 [i_2] [i_0] [i_2 + 1]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_21 [i_0] [i_3] [i_3] [i_0] = ((((min(30792, (!250)))) ? (((((((~(arr_11 [i_3] [i_3]))) + 2147483647)) >> ((((1149663086818272434 ? 3793589952743684470 : 1149663086818272445)) - 3793589952743684449))))) : ((64 ? (max(239, 1149663086818272452)) : (-9223372036854775807 - 1)))));
                        arr_22 [i_0] [1] [1] [1] [i_0] [1] = (~4611686018427387903);
                        arr_23 [i_0] [6] [i_4] [i_4] [i_4] [i_0] = (max((min(((var_6 ? var_5 : (arr_0 [i_0] [i_0]))), (arr_18 [i_5 - 1] [i_5 - 1] [i_5] [i_0] [1]))), ((+(((arr_7 [i_0] [i_3] [i_4] [i_5 - 1]) ? var_8 : var_9))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] [i_6] = (!-579633254682966578);
        arr_27 [i_6] = var_4;
        arr_28 [i_6] [i_6] = (((arr_17 [i_6] [i_6] [i_6] [i_6]) - ((-1149663086818272427 ? (arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_16 [i_6] [i_6])))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_33 [i_6] [i_6] [i_8] [i_8] = arr_5 [i_7] [i_8];
                    arr_34 [i_6] [i_8] = (arr_24 [0] [1]);
                }
            }
        }
    }
    #pragma endscop
}
