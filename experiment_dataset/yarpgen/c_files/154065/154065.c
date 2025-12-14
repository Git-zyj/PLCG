/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_5 ? var_6 : 120))) ? (min(((max(var_7, var_1))), var_6)) : ((min(((var_7 ? 120 : var_7)), ((max(var_1, var_9))))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] = var_0;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] = ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) % (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (arr_6 [i_1] [i_2] [i_1]) : 0));
                        var_11 = 962316152;
                        var_12 = (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]);

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_4] [i_3] [i_0 + 1] [i_3] [i_0 + 1] = ((~(arr_0 [i_0 + 1] [i_0 + 1])));
                            var_13 = (((arr_7 [i_3] [i_3] [i_3] [i_0 - 1]) / (arr_7 [i_0] [i_0] [i_2] [i_0 - 1])));
                            var_14 = (arr_3 [i_4] [i_0 + 1] [i_0 + 1]);
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = -120;
    }
    var_15 = ((((min((~var_8), var_7))) ? var_8 : ((((!(var_6 <= -40)))))));
    #pragma endscop
}
