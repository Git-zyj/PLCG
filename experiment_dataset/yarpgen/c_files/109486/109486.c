/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_11);
    var_18 = ((-(((var_15 <= 30226) ? 6 : ((var_3 ? var_7 : 65))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (!((var_9 && (arr_1 [i_0] [i_0]))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_20 = (((147 ? -49 : (arr_4 [i_1 + 1] [i_0] [i_0]))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_21 |= (!11783921635466724766);
                            var_22 = (min(var_22, ((((arr_4 [i_4] [i_1 + 2] [i_1 + 1]) | (arr_0 [i_1 - 1] [i_1]))))));
                            var_23 = (max(var_23, 73));
                        }
                    }
                }
            }
            var_24 = (min(var_24, (((((~(arr_9 [i_0] [i_1 + 2] [i_1]))) ^ ((var_15 ? (arr_9 [i_0] [i_0] [i_1 + 2]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_25 = ((max(-1470783922, 183)));
            var_26 = (min(var_26, (((!(((~(((!(arr_16 [i_0] [i_0] [i_5]))))))))))));
            var_27 = (max(((~(arr_3 [i_0]))), ((((arr_3 [i_0]) && 23278)))));
            arr_18 [i_0] = ((var_14 ? ((((!((min((arr_11 [i_5] [i_5] [i_0] [i_0] [i_0]), 190))))))) : (~-179392034312007863)));
        }
        var_28 = ((!(arr_5 [i_0] [i_0] [i_0])));
        var_29 = (!var_16);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = (((arr_19 [i_6]) ? (((arr_20 [i_6]) * (arr_20 [i_6]))) : (1 - 7936)));
        var_30 -= (arr_20 [i_6]);
        arr_22 [i_6] = (((!(arr_20 [i_6]))) || 59077);
    }
    #pragma endscop
}
