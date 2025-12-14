/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (max(((~(~18446744073709551615))), ((((var_7 < 0) == (arr_3 [i_0] [0]))))));
                var_12 |= ((((max((arr_0 [i_1]), (arr_0 [i_0])))) & (!150)));
            }
        }
    }
    var_13 = var_2;

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_14 = (arr_1 [i_2]);
        var_15 = (max(var_15, ((((-(arr_0 [i_2])))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = arr_2 [i_2];

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_17 -= (arr_9 [i_2] [i_3] [i_4]);
                arr_11 [i_4] [i_3] [i_3] [3] = (arr_4 [i_2]);
                arr_12 [i_2] [i_2] = ((((((0 - 7586331278333275860) ? 7586331278333275870 : 10860412795376275756))) ? ((min((min((arr_8 [i_2] [i_3] [i_3] [i_3]), var_0)), var_1))) : (((((8191 ? 105 : 1))) - ((185 ? 151 : 7586331278333275860))))));
                var_18 = ((+((max((arr_8 [i_2] [i_2] [i_3] [i_4]), 144)))));
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    {
                        var_19 = (((arr_14 [i_2] [i_3] [i_6 - 1]) != ((((arr_2 [i_5]) <= -10860412795376275746)))));
                        var_20 -= ((-((~(arr_5 [i_6 + 3] [i_2])))));
                        var_21 = (((!var_7) ? 75 : (((10860412795376275756 < (((-32220 ? var_9 : var_10))))))));
                        var_22 = (min(var_22, (7586331278333275870 == var_5)));
                        arr_17 [i_3] [15] = ((((max((arr_2 [i_6 - 2]), (arr_2 [i_6 - 1])))) ? (((arr_2 [i_6 - 2]) ? 150 : (arr_2 [i_6 - 1]))) : (max((arr_2 [i_6 + 3]), (arr_2 [i_6 + 2])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
