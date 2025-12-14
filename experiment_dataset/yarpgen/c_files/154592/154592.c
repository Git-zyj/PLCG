/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((-var_2 ? var_2 : 5715373989726281229)) * var_3));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [5] [i_0] = (var_6 != var_7);
        var_11 = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : 15623));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = (!5715373989726281228);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_13 ^= (arr_8 [i_3] [i_2]);
                                var_14 = (min(15940491342669505385, 1));
                                var_15 = ((+((min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1]))))));
                                arr_18 [i_1] [i_2] [i_1] [i_5 + 1] [i_5 - 1] [i_3] [6] = (((1 || 60384) == -var_0));
                            }
                        }
                    }
                    var_16 ^= ((49820 < ((((-(arr_11 [1] [i_1]))) % 24))));
                }
            }
        }
        arr_19 [i_1] = -27272;
        var_17 = ((((max((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_1])))) * ((max(7743, (arr_8 [i_1] [2]))))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_22 [i_6] = ((!((((arr_21 [i_6]) ? (arr_21 [i_6]) : (var_0 & -5715373989726281216))))));
        var_18 -= -5715373989726281229;
    }
    var_19 = ((((min(1, var_5))) && 1));
    var_20 |= (max((((~5152) & var_5)), (~49820)));
    var_21 = (max(-27272, var_8));
    #pragma endscop
}
