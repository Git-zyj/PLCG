/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [1] = 9223372036854775807;
        arr_3 [i_0] = (((~(~124))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_1] [i_1] = (((!(arr_1 [i_2]))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_16 [i_2] [i_3] [i_4] = (~(~var_4));

                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 18;i_5 += 1)
                            {
                                var_14 = (min(var_14, (!255)));
                                arr_19 [i_1] [i_1] [i_2] [i_3] [i_4] [i_3] [i_5] = ((~(~var_0)));
                                arr_20 [i_1] [i_3] [i_2] [i_3] [i_3] [i_4] [i_5] = (~var_6);
                                arr_21 [i_3] [i_2] = (!var_12);
                                var_15 = (arr_4 [i_5 + 4]);
                            }
                            var_16 = (max(var_16, (((-(max((arr_1 [i_1]), (arr_8 [i_3] [i_1]))))))));
                            arr_22 [i_3] = (min((~var_6), var_7));
                        }
                    }
                }
            }
        }
    }
    var_17 = (max((((~(!var_6)))), var_11));
    var_18 = (max(var_18, var_13));
    var_19 = ((-(((!(!var_1))))));
    #pragma endscop
}
