/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(var_17, var_17));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = 0;
                    var_20 = ((((((!-82) ? (!2670635888) : (!var_13)))) ? 601533988 : -82));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    var_21 *= (max(var_2, (min((arr_3 [i_4 - 2]), 15710639353477224771))));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_15 [i_5] [i_4] = var_10;

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_22 = (max((max(3413746103, ((((arr_0 [i_3] [i_3]) > 158))))), var_7));
                            var_23 -= ((((!(arr_5 [i_4 - 2] [i_3] [i_4 - 2]))) ? (min(881221192, var_17)) : ((((arr_5 [i_4 - 2] [i_3] [i_4 - 2]) ? (arr_5 [i_4 - 2] [i_4 - 2] [i_4]) : (arr_5 [i_4 - 2] [i_3] [9]))))));
                            var_24 = (((((~(arr_7 [i_0] [i_3])))) ? (((arr_9 [i_4 + 1] [i_4 - 1] [i_4 - 2]) ? (arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 1]))) : (((!(((78 ? 4294967295 : 32767))))))));
                        }
                        var_25 = (((~(arr_3 [i_4 + 1]))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_26 = (arr_20 [i_7] [i_7]);
        arr_21 [21] = (arr_20 [i_7] [i_7]);
        var_27 = ((-(arr_20 [i_7] [i_7])));
        var_28 = (((arr_18 [i_7]) / -var_17));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = (max((((arr_25 [i_8]) ? 199182807 : (arr_24 [i_8] [i_8]))), (-127 - 1)));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_29 = (arr_29 [i_8] [i_9] [i_10]);
                    var_30 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
