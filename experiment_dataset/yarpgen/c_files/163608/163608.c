/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 = -14673;
                        var_17 = (min(var_17, 2024717567));
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_2] = ((max(((~(arr_7 [i_0] [i_2] [i_3])), (!2754323924093860598)))));
                    }
                }
            }
        }
        arr_12 [i_0] = -8155404726403836032;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_18 = ((((~(arr_9 [i_4]))) == (max(-8155404726403836025, (arr_4 [i_4] [i_4])))));
        var_19 = (((((((min(36461, (arr_2 [i_4])))) && -8155404726403836035))) < (((!((max(45, (arr_8 [i_4])))))))));
        var_20 = (min((((((arr_1 [i_4]) ? (arr_8 [21]) : (arr_13 [i_4]))) << (-6260179685258232638 - 12186564388451318973))), (((((arr_7 [i_4] [i_4] [0]) + 2147483647)) >> (((arr_13 [i_4]) + 1253811344))))));
    }
    var_21 = ((max(8155404726403836035, -1)));
    var_22 = ((~((-(31 & var_2)))));
    #pragma endscop
}
