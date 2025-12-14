/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((21488 * 95) ? -95 : ((7973872540045030687 ? 110 : -329708031))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2] = ((6279371407385339800 ? (arr_7 [i_3 - 2] [i_3 - 1]) : (arr_1 [i_3 - 2] [i_3 - 2])));
                        var_15 = (arr_4 [i_3 + 1] [i_3 + 1]);
                        var_16 += (arr_3 [i_1]);
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((~(((arr_9 [i_0] [i_1] [i_2]) ? (arr_6 [i_3] [i_1] [i_2] [i_3 - 2]) : var_14))));
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_17 = (arr_9 [i_2] [i_4] [i_2]);

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_18 = (arr_8 [1] [i_1] [1] [1]);
                            var_19 = (arr_7 [i_1] [3]);
                        }
                        for (int i_6 = 4; i_6 < 18;i_6 += 1)
                        {
                            var_20 ^= (!var_4);
                            arr_20 [i_0] [i_1] [i_2] [5] [i_2] [5] [i_4] = 233;
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] = 2623814942;
                        }
                    }
                    arr_22 [i_2] [i_2] = (((!var_6) ? (arr_17 [i_0] [i_1] [i_2] [i_0] [i_2]) : (var_1 / var_5)));
                    var_21 -= ((((~(arr_5 [16] [i_1] [i_1])))) ? var_12 : (arr_12 [i_0]));
                }
            }
        }
        var_22 = 16298;
        var_23 = ((!(arr_17 [8] [0] [6] [6] [6])));
    }
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        var_24 = (min(var_24, ((((((arr_13 [i_7 - 3] [i_7]) ? (arr_3 [i_7 + 1]) : (!var_2))) & (arr_4 [i_7 - 2] [i_7]))))));
        var_25 = (min((((((!(arr_15 [i_7] [i_7] [19] [i_7] [i_7]))) || (arr_7 [i_7] [i_7 - 2])))), (arr_19 [i_7] [i_7] [i_7] [17] [i_7])));
    }
    var_26 = var_8;
    var_27 += (!(((((var_0 ? var_14 : var_12))) || var_11)));
    var_28 = (!var_5);
    #pragma endscop
}
