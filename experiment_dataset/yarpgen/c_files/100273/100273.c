/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2 + 2] [i_2] = (((((arr_10 [i_0] [i_0 + 1] [1] [i_2] [i_0] [i_0]) ? (arr_0 [i_3 + 2]) : (arr_10 [i_3] [i_0] [i_2] [i_2] [i_0] [i_0]))) ^ (arr_10 [i_0 + 1] [i_1] [i_2] [i_2] [i_2] [i_3])));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0 + 1] [i_2] [i_2] [i_3] [i_4] = var_6;
                            var_19 += (arr_5 [i_4 - 1] [i_3 + 1] [i_2 + 2] [i_0 - 1]);
                            arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] [i_0 + 1] = var_14;
                            var_20 = ((((var_17 ? var_17 : var_7))) ? var_17 : 8275482162696438502);
                        }
                        var_21 = (arr_13 [i_0 - 1] [i_0 - 1]);
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 = ((((min((arr_8 [i_0 - 1]), (arr_8 [i_0 - 1])))) ? (arr_8 [i_0 - 1]) : ((min((arr_8 [i_0 - 1]), (arr_8 [i_0 - 1]))))));
                        arr_19 [i_0] [i_1] [i_2] = (max((((((((arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_5]) - (arr_17 [i_0] [i_1])))) ? (arr_10 [i_2 + 2] [i_2] [i_2] [i_2] [i_2 + 3] [i_2 + 2]) : ((var_2 ? (arr_6 [i_5] [i_2] [i_1] [i_0]) : (arr_3 [i_2])))))), (min(var_2, -var_4))));
                    }
                    var_23 += ((((((((10171261911013113120 ? -2434942336565830553 : var_18))) ? (arr_9 [i_0] [i_0] [i_2] [i_2 + 4]) : ((var_13 ? var_15 : 10171261911013113106))))) && 10171261911013113122));
                }
            }
        }
    }
    var_24 -= var_9;
    var_25 = (min(var_11, (((((min(var_3, var_17))) && (((8275482162696438496 ? 10 : 14))))))));
    var_26 = ((~(var_12 * 0)));
    var_27 += (((var_18 ^ 10) ? (max(((var_10 ? var_12 : var_13)), (var_17 / -23414))) : ((max(var_8, var_17)))));
    #pragma endscop
}
