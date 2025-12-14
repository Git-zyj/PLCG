/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -6371322763324281100;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_3] [i_0] = (arr_0 [i_0]);
                        var_14 += (((!var_0) ? var_4 : (arr_12 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1])));
                        var_15 += (~142);
                        var_16 = (min(((max(142, 213))), (max((((arr_11 [i_0] [i_1] [i_0] [i_3]) + var_4)), (((var_1 > (arr_3 [i_0] [i_0]))))))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] = (min((((((var_12 ? 112 : var_2))) ? (((arr_2 [i_0]) ? 237 : (arr_11 [i_0] [i_0] [i_2] [i_3]))) : -21763)), (arr_3 [i_2] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, (arr_9 [i_2])));
                        var_18 &= ((((min(-15, 2021529716))) ? ((((min(var_8, -14)) > ((((arr_7 [i_4] [i_0] [i_0]) + 146)))))) : (((250 > (~31))))));
                    }

                    for (int i_5 = 2; i_5 < 6;i_5 += 1)
                    {
                        arr_21 [i_1] [i_0] = (arr_20 [i_0] [i_0] [i_0] [i_0]);
                        arr_22 [i_0] [i_1] [i_2] [i_0] = var_10;
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = arr_15 [i_0] [i_1] [i_1] [i_1];
                    }
                    var_19 = 111;
                    arr_24 [i_0] = (((((~((max(var_11, var_7)))))) ? ((((max((arr_17 [i_0] [i_0]), 114))) ? (min(3886488819, 12786951792438388123)) : ((298538992 ? (arr_4 [i_0] [i_1] [i_2]) : var_6)))) : (min(var_3, (arr_11 [i_1] [i_1] [i_1 - 2] [i_1])))));
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
