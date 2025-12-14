/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = ((-62 ? 89436787 : 7677502296740860860));
                        var_15 = ((!(arr_7 [i_3 - 1] [i_3 - 1])));
                        var_16 = var_7;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_17 = (arr_12 [i_5] [i_4] [i_4] [i_0]);
                var_18 = ((((78 ? var_6 : var_4)) + (arr_15 [i_0] [1])));

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_19 = (arr_19 [i_0] [i_4] [i_4] [i_4]);
                    var_20 = ((((!(arr_17 [i_0]))) ? (~var_4) : ((var_12 ? var_4 : var_9))));
                    var_21 = (((arr_10 [i_6] [i_4] [i_4]) ^ (arr_10 [i_6] [i_6] [i_5])));
                    var_22 = (((!(arr_4 [6] [i_6]))) ? ((var_6 ^ (arr_7 [i_0] [i_0]))) : (((((arr_7 [1] [1]) <= var_12)))));
                }
            }
            var_23 = ((!((((arr_0 [i_0]) ? var_7 : var_4)))));
            var_24 = (arr_3 [i_0]);
            var_25 = (min(var_25, 65535));
            var_26 = (arr_0 [i_0]);
        }
    }
    #pragma endscop
}
