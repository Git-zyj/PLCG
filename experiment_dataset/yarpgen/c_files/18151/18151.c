/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-1521);
    var_17 = (min(var_17, var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (max(var_18, (((((((!(6 <= var_4))))) > (((arr_0 [i_0]) >> ((((9223372036854775807 ? 6957778885638501332 : 34921)) - 6957778885638501313)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 += var_9;
                        arr_10 [i_0] [i_0] [i_0] [i_0] [9] = (((((2484437619 >> (var_1 + 1846893993)))) | (!60808)));
                    }
                }
            }
        }
        var_20 |= (((!-3172406457901194235) ? ((((var_5 == var_0) ? (8388096 <= -6905) : var_2))) : (min((arr_3 [i_0]), -var_6))));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        arr_13 [i_4] = (min(-1, ((((arr_5 [i_4 - 1] [i_4 + 1] [i_4]) || 758670345)))));
        var_21 = ((17844286092478035224 ? (~30517) : (arr_11 [i_4])));
        var_22 = (min(var_22, ((min(((-(arr_2 [i_4] [i_4] [i_4 + 1]))), (((-1522 | var_8) ? ((min(var_11, var_13))) : var_14)))))));
        var_23 += (min((((!(((~(-2147483647 - 1))))))), (min(-var_13, (arr_7 [i_4] [18] [i_4 + 1] [i_4] [i_4] [i_4 - 2])))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_24 = ((((max((arr_14 [i_5]), (arr_14 [i_5])))) ? (arr_14 [i_5]) : ((var_9 ^ (arr_14 [i_5])))));
        arr_17 [14] [i_5] = (max((min(-20561, (min(40654, 2510917359)))), ((2224688803 ? 543235480 : 87))));
    }
    #pragma endscop
}
