/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 + 2] = (((((24882 ? -20905 : (arr_2 [i_0])))) ? ((var_7 % (arr_2 [i_0 + 2]))) : (arr_2 [i_0 - 1])));
        arr_4 [i_0] [i_0] = ((((((arr_2 [i_0 + 1]) ? var_9 : -24883))) ? (arr_1 [i_0 + 2]) : (((-35 ? 0 : 2023107814)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_3] = 0;
                        var_18 = (((arr_6 [15] [i_1] [15]) >> (var_1 - 28038)));
                        var_19 = ((20870 % (((var_10 >= (arr_10 [i_3] [i_1] [i_1] [i_1] [23]))))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, ((((arr_1 [i_0 - 1]) - 20869)))));
                            var_21 = (((arr_2 [i_0]) < 65));
                            var_22 = (!1023);
                            var_23 = (min(var_23, 35518));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_2] [7] [i_1] [i_5] = (arr_14 [i_3]);
                            var_24 = (arr_1 [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_25 = arr_2 [i_1];
                            var_26 = (((((arr_2 [i_0 + 3]) + 2147483647)) >> (((arr_8 [i_0] [i_0 + 1] [i_2] [i_3]) - 18469))));
                            var_27 = (!9041201720690230617);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_28 = (!66);
                            var_29 = (((arr_13 [2] [i_0 + 3] [i_2] [i_1]) - (arr_2 [2])));
                        }
                    }
                }
            }
        }
        var_30 = (((30018 == 7833133785422482056) ? ((-(arr_1 [i_0]))) : (-757308631 == 19)));
    }
    #pragma endscop
}
