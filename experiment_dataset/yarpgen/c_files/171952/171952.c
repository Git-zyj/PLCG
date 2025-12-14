/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (var_7 && var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 |= (((var_4 % (arr_1 [i_1 + 3] [i_1 - 1]))));
                    var_14 -= var_6;

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_2] = -var_11;
                        var_15 += ((min(0, var_4)));
                        var_16 += ((((((var_10 & var_2) ? 253 : (var_10 - var_8)))) ? (((!(var_5 != 5258242905056117411)))) : (arr_3 [i_1] [i_3])));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = ((((min((var_7 & var_4), (min(var_5, (arr_6 [i_0])))))) ? (var_2 > var_9) : var_8));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_2] = ((min((arr_12 [i_2] [i_1] [i_0] [i_2]), (((arr_1 [i_2] [i_2]) ? (arr_4 [i_4] [i_4]) : var_3)))));
                        arr_14 [i_2] [i_4] [i_2] [i_1] [i_2] = ((var_0 ? (((((arr_3 [i_1 + 1] [i_1 + 1]) != var_10)))) : var_10));
                        arr_15 [i_2] [i_1] [i_2] [i_2] [i_4] = 17435;
                        var_17 = max(((var_0 ? var_4 : var_9)), (!var_5));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] [i_2] [i_1] = ((((max((arr_0 [i_1 + 3]), var_6))) ? (((var_11 ? var_6 : var_6))) : (max((arr_0 [i_1 - 1]), var_9))));
                        arr_21 [i_0] [i_1] [i_2] [i_0] = ((((((var_3 ? (arr_19 [i_0] [i_0] [i_1] [i_2] [i_5]) : (arr_3 [i_2] [i_1]))))) ? ((min(var_10, 28427))) : ((var_8 >> (var_5 - 1996772698)))));
                    }
                    var_18 = (max(((((~(arr_11 [i_0] [i_2]))))), 3501499172));
                }
            }
        }
    }
    #pragma endscop
}
