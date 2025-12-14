/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (max((max((((arr_2 [i_0]) ? var_2 : (arr_3 [i_0] [i_0]))), (arr_3 [0] [i_0]))), (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = ((+(((!(((14255 ? (arr_7 [i_1]) : (arr_5 [i_0] [i_0])))))))));
            arr_8 [i_1] [i_1] = ((9148721973453051165 ? 13737261694040129972 : -6163596809370881284));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                var_18 = ((~(arr_12 [i_2 + 2])));
                arr_13 [i_1] [i_1] [i_2] = (((arr_0 [i_2 - 1]) ? (arr_10 [i_2 + 1] [i_2] [i_2 + 1]) : (arr_0 [i_2 - 2])));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_19 = (((((arr_4 [i_0] [i_0]) ? (!var_3) : 51300))) ? ((~(arr_11 [i_0] [i_0] [i_3]))) : var_3);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_22 [i_1] [i_1] [i_1] = var_10;
                            var_20 = (((max(var_10, var_10))));
                            var_21 = ((!((min((arr_20 [i_3] [i_1]), (((arr_3 [5] [i_1]) ? var_9 : -124)))))));
                            var_22 = 411173671;
                        }
                    }
                }
            }
        }
        var_23 = ((-(arr_19 [i_0] [i_0] [i_0] [1])));
        arr_23 [19] = (!(arr_4 [i_0] [i_0]));
    }
    var_24 |= var_9;
    #pragma endscop
}
