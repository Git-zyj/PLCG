/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(67, 188))) ? ((((min(var_2, var_3))) ? ((max(var_11, var_1))) : (max(var_10, var_7)))) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (arr_7 [i_0]);
                    arr_8 [1] [1] = ((min(-var_9, var_14)));
                    var_17 = ((max((min(246, 844424930131968)), (((3178438276 || (arr_0 [i_0] [i_0])))))));
                    arr_9 [i_2] [1] = var_13;
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_18 = (((((-(arr_11 [i_3 + 2] [i_3 - 1])))) ? ((~((-15124 ? 13840 : 14948)))) : ((max((15123 != 16777215), (arr_1 [i_3]))))));
        arr_12 [i_3] [i_3] = var_7;
        arr_13 [i_3] = (min(var_0, ((((arr_10 [i_3] [i_3 - 2]) || ((min(228, 50587))))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_16 [2] = (max(((var_6 ? (max(var_7, (arr_11 [i_4] [i_4]))) : ((((arr_11 [i_4] [i_4]) ? 1 : 188))))), ((((arr_15 [i_4] [i_4]) ? (((max((arr_0 [i_4] [i_4]), -15124)))) : ((13831 ? (arr_6 [i_4] [i_4] [i_4]) : 133)))))));
        var_19 = (arr_2 [i_4] [i_4]);
        arr_17 [i_4] [i_4] = (max((arr_3 [i_4] [i_4] [3]), ((min(188, (-5042999998800589618 || 247))))));
    }
    var_20 = (((((((var_2 ? var_13 : var_11))) & ((174 ? 9312031540768042644 : 52728)))) != var_3));
    #pragma endscop
}
