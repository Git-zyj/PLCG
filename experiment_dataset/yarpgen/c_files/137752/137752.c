/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_14 = (arr_3 [i_0] [i_1] [i_1 - 2]);
            arr_6 [i_0] [i_1] |= (((arr_1 [i_0] [i_1]) % (arr_0 [i_1 - 1])));
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_15 = ((~(arr_1 [i_2 + 2] [i_0])));
            arr_10 [i_0] [i_0] = (arr_2 [i_0]);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_16 = ((!(arr_13 [i_3 - 1] [i_0] [i_2 + 1] [i_2 + 2] [i_0])));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_17 = (((arr_1 [i_2 - 1] [i_0]) ? (arr_7 [i_0] [i_3 + 1] [i_2 + 1]) : (arr_7 [i_0] [i_3 - 1] [i_2 + 1])));
                            arr_21 [i_0] [i_2] [i_2] [i_0] [i_5] [i_5] [i_5] = var_4;
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_5 : (arr_14 [i_0] [i_0] [i_0] [1])));
        var_18 = (((!var_6) ? ((((arr_8 [i_0]) || (arr_14 [i_0] [i_0] [i_0] [i_0])))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_19 = (max(((((!var_13) > var_5))), (~3601125763)));
    var_20 = ((30057 ? ((max(var_3, -var_13))) : var_10));
    var_21 = ((((max(((var_4 ? -1 : var_4)), 2108146677890838987))) ? var_8 : ((max(-24877, var_4)))));
    #pragma endscop
}
