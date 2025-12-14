/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -842447076;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [i_0] [i_0])));
        var_14 = (max(var_14, 0));
        var_15 = (((arr_1 [i_0] [i_0]) ? (!3861) : ((-(arr_0 [i_0])))));
        var_16 = (min(var_16, (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = (min(var_17, 18446744073709551596));
            arr_5 [i_0] [5] = ((((0 ? var_1 : (arr_0 [i_1]))) & (arr_1 [i_1] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, ((((arr_10 [i_3] [i_1]) - -32756)))));
                        var_19 = (((((0 - (arr_10 [i_0] [i_1])))) && (arr_10 [i_0] [6])));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_20 = 18446744073709551615;
            arr_13 [i_0] [i_0] [i_4] = var_4;
            arr_14 [1] [i_4] &= ((~26) - 3452520230);
            arr_15 [i_0] [i_4] = (0 ? 236 : 0);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_21 = (max(var_21, (((!(arr_0 [i_5]))))));
        arr_19 [i_5] = 1;
        arr_20 [i_5] = (((arr_4 [i_5] [i_5] [i_5]) >= (arr_4 [i_5] [i_5] [i_5])));
        var_22 |= ((-(arr_4 [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}
