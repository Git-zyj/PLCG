/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;
    var_11 = (((((0 + (1 < -64)))) ? (var_3 <= var_2) : var_2));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 + 1]);
        arr_3 [i_0] [i_0] = ((((var_6 ? var_3 : var_0))) ? var_2 : 17882661856637577267);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((1 ^ (564082217071974356 || var_4)));
        var_12 = (((var_2 ? 1 : var_9)));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_13 = (max(var_13, (((((arr_5 [i_2 + 2] [i_2]) ? (arr_8 [8] [i_2 - 2]) : (arr_5 [i_2 + 2] [i_3])))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    {
                        var_14 = (min(var_14, var_6));
                        var_15 = var_4;
                        var_16 = ((564082217071974349 ? 48123 : (((max(1, var_8))))));
                    }
                }
            }
            var_17 = (max(var_17, var_8));
            arr_15 [i_2] = (((((arr_1 [i_2 + 1]) + 2147483647)) << (((((arr_13 [i_2 - 1] [i_2 + 1] [i_2 + 1]) - var_5)) - 4139559933274499306))));
            var_18 = (((var_1 ? (arr_12 [i_2] [i_2] [10] [i_2 + 2]) : (arr_12 [i_2] [i_2] [i_2] [i_2 + 2]))));
        }
        var_19 = (min(var_19, ((((arr_1 [i_2 + 1]) | (((max(-49, var_8)))))))));
    }
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        var_20 = ((((arr_17 [9] [i_6]) ? var_7 : (arr_17 [i_6 - 1] [i_6]))));
        var_21 = (max(var_21, ((((arr_16 [12]) ? (((arr_16 [1]) ? var_0 : 1)) : ((((arr_16 [20]) ? 1 : (arr_16 [1])))))))));
        var_22 = ((((((arr_16 [i_6]) ? (arr_17 [i_6 + 1] [i_6]) : var_5))) ? var_4 : var_0));
        var_23 = (min(var_23, var_4));
    }
    #pragma endscop
}
