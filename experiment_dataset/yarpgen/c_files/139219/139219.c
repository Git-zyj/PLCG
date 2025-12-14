/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 26012;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (((((var_5 ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_0])))) ? var_6 : (((var_3 ? ((max(39509, (arr_3 [1] [i_1])))) : 56240)))));
            var_15 = var_11;
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_2] = ((var_5 && ((min((arr_5 [i_0] [8] [i_0]), (min(4338456075329722377, (arr_8 [i_0]))))))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 *= (min((((arr_15 [i_3 - 1] [i_3 - 1]) ? (arr_4 [i_2 + 1] [i_3 + 1]) : (arr_15 [i_3 - 1] [i_3 + 1]))), (!251)));
                            var_17 = ((~(var_5 != -79)));
                            arr_17 [i_3] [i_2] [i_0] = (~23189);
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_18 = (max(var_18, (((!(((((var_8 ? var_3 : var_10))) <= (arr_15 [i_6] [i_6]))))))));
        var_19 = var_8;
    }
    #pragma endscop
}
