/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [i_0] [i_0] = ((((!(((402653184 / (arr_0 [i_0])))))) ? ((((arr_1 [i_0]) > var_5))) : (arr_1 [1])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_2] [i_3] [i_1] = (!var_0);
                        var_10 = (arr_9 [1] [i_2]);
                        var_11 = (((((8935141660703064064 / 68) / ((min(1147822729, var_1))))) - (((min(((((arr_5 [i_3]) && var_4))), (arr_14 [i_1] [i_2] [i_1] [i_4] [i_1])))))));
                        arr_18 [i_4] [i_1] [i_1] [i_1] = (arr_13 [i_1] [i_2] [i_1] [i_4]);
                    }
                }
            }
        }
        arr_19 [16] [i_1] = ((var_9 % ((1304099583 << (var_8 - 698875548)))));
        arr_20 [i_1] = var_3;
        arr_21 [12] = (((!8190) || (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        var_12 ^= (min((((~((~(arr_0 [i_5])))))), (max(var_5, var_9))));
        var_13 = (arr_16 [i_5] [i_5] [i_5] [i_5] [i_5] [14]);
    }
    var_14 = 2147483647;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_15 = (((250 ? (arr_26 [i_6]) : 15)));
        var_16 = arr_26 [i_6];
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        var_17 -= (((((-35704146 ? (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_7 [i_7 + 1])))) ? ((((((min(26145, var_0))) && (((var_5 ? var_7 : (arr_7 [i_7])))))))) : (arr_16 [3] [i_7] [3] [i_7] [i_7] [i_7])));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_33 [i_8] = (min((arr_10 [i_8]), var_0));
            arr_34 [i_8] [i_8] = ((((!((!(arr_32 [i_7] [i_8]))))) && (arr_31 [i_7])));
            var_18 = (((min((arr_4 [7]), (arr_27 [11] [i_8])))));
        }
        arr_35 [i_7] = min((((arr_12 [i_7 - 1]) | 15)), (!var_1));
    }
    #pragma endscop
}
