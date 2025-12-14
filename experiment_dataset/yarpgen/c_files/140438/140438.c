/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [4] [4] [i_2] = var_1;
                    arr_8 [i_0] = (((((((min(var_2, var_0)))) + 2147483647)) >> (((min(4906044961920767152, (((var_7 >> (arr_2 [1])))))) - 216))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0]);

                    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = var_4;
                        arr_15 [i_0] [i_0] [8] [i_0] = (((((var_10 != (arr_3 [i_0]))) ? (var_0 == 2945383982993770140) : (((arr_10 [i_0] [1]) ? var_4 : 1729382256910270464)))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_12 = (((arr_2 [i_3]) < (((~(arr_13 [i_0] [i_1] [i_0] [14] [i_4]))))));
                            var_13 = min((arr_5 [0] [i_1] [5]), (arr_13 [i_4] [i_3] [i_0] [i_1] [i_0]));
                            arr_19 [i_0] [i_1] [i_0] [i_4] = arr_12 [i_0] [i_2] [14];
                        }
                        arr_20 [i_0] = (((((arr_1 [i_0]) ? (arr_12 [i_0] [i_3 + 4] [i_0]) : 49152)) < ((1 << (((arr_18 [i_0] [i_0] [i_2] [i_0] [i_3 + 3]) - 205))))));
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_24 [18] [i_2] [i_2] [i_2] [i_2] = (min((max((arr_4 [i_0]), (((6294265757387142035 ? -1729382256910270464 : (arr_11 [i_1] [i_1] [i_1] [i_5 - 1])))))), ((max(var_9, (arr_16 [i_0] [i_0] [i_5 + 4] [i_5 - 1]))))));
                        arr_25 [i_0] [i_0] [i_1] [i_0] = (((arr_16 [i_0] [i_1] [i_2] [i_0]) << (var_7 - 238)));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_28 [i_2] = (~(arr_22 [i_1] [i_6]));
                        arr_29 [i_0] [i_0] [i_0] [i_0] = (!((((arr_5 [i_6] [i_2] [i_1]) ? (arr_5 [i_0] [i_1] [i_2]) : var_10))));
                        var_14 = (var_11 ^ var_0);
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_15 = ((((-var_5 * ((((!(arr_22 [i_0] [i_2]))))))) / (~0)));
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((~(((arr_16 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) % var_4))));
                        var_16 = (((arr_5 [i_7 - 1] [i_0] [i_0]) & (arr_22 [i_0] [20])));
                    }
                }
            }
        }
    }
    var_17 = (min((!var_1), var_8));
    var_18 = var_3;
    #pragma endscop
}
