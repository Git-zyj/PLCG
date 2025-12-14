/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (~var_11);
        var_15 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_16 = (min(var_16, ((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 2]) ? 218 : (arr_6 [i_2 + 1] [i_2] [i_2 + 2]))))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_17 += (((!247) ? (var_8 - var_10) : (((!(arr_2 [i_1] [i_2]))))));
                arr_10 [i_1] [i_1] [i_1] = (var_2 - var_2);
                var_18 += (((((arr_1 [i_1] [i_2]) ? 133 : 50208))) ? (~81) : var_1);
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    var_19 = ((((238 ? 90 : 64606149)) >> (!var_0)));
                    var_20 = ((!29445) ? (((arr_11 [i_1] [i_1]) ? var_1 : (arr_8 [i_1] [i_4] [i_5]))) : -449335279);
                }
            }
        }
    }
    var_21 = min((max(var_8, (((var_13 + 2147483647) << (2456 - 2456))))), ((((min(var_13, var_5)) > var_1))));
    #pragma endscop
}
