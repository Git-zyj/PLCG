/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 ? ((((((arr_1 [i_0] [5]) ? var_11 : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (var_6 + 2750231618856180167))) : ((((!(arr_0 [i_0] [i_0])))))));
        var_12 = var_1;
        var_13 &= (!var_11);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (min((min(17, 2883096704)), 53545))));
        arr_6 [i_1] = (max((arr_3 [i_1]), 144));
        var_15 = (((((-((var_7 ? var_0 : (arr_1 [3] [i_1])))))) && (((arr_1 [i_1] [i_1]) > var_10))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_16 = (((((arr_0 [14] [i_2]) ? var_4 : (arr_7 [i_2])))) ? var_0 : ((((arr_0 [i_2] [i_2]) & (arr_7 [i_2])))));
        var_17 = (~2745269186);
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_18 = (min(-1, var_7));
        var_19 = (max(var_19, var_4));

        for (int i_4 = 4; i_4 < 15;i_4 += 1)
        {
            arr_15 [6] [i_3] [i_4] = ((~(((arr_10 [i_3]) ? -var_3 : (arr_11 [i_4])))));
            arr_16 [i_3] = var_9;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_25 [i_3] = ((1571640700 ? 1 : -40));
                        arr_26 [i_3] [9] [12] [i_3] [i_3 + 1] [11] = ((-30388 ? -984409207857626352 : 4294967293));
                    }
                }
            }

            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                var_20 = ((var_1 << (var_8 - 8499015046939793583)));
                var_21 = (max(var_21, ((((arr_19 [i_8 + 3] [i_5] [5]) ? -var_4 : ((~(arr_27 [i_3] [i_8] [i_3 + 2]))))))));
                var_22 = (98 | var_5);
            }
            var_23 = (max(var_23, ((((arr_24 [i_3 - 1] [i_3] [6] [2] [i_3 - 1]) ? (arr_24 [i_3 + 1] [i_5] [10] [i_3] [i_3 + 1]) : var_7)))));
        }
    }
    var_24 = var_11;
    var_25 = var_2;
    var_26 = (max(var_26, (((var_3 ? var_11 : ((min(1, -1140930717))))))));
    var_27 = 1932630894;
    #pragma endscop
}
