/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = ((var_5 ? (!57087) : 117));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((-43 ? -77 : 2028244680)))));
                            arr_10 [i_0] [i_2] [i_2] = (((((16581850771199614904 ? (((16581850771199614897 ? var_17 : (arr_2 [22])))) : -6540639907255076044))) ? 57090 : ((-(arr_7 [i_2] [i_2])))));
                            var_22 = (((((arr_5 [i_1] [i_1 + 2]) ? (!9223372036854775797) : -117)) >> ((((var_2 - (arr_7 [i_2] [i_2])))))));
                            arr_11 [i_2] [22] [i_2] [i_3 + 1] = arr_4 [i_0 + 1] [1];

                            for (int i_4 = 2; i_4 < 24;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_4] [i_3] [i_4] [i_2] = (((((~(arr_13 [i_0] [i_4 - 2] [i_2] [i_3] [i_4 + 1])))) ? (((((~var_11) == (arr_7 [i_2] [i_2]))))) : (max(var_0, (arr_8 [i_3 + 2] [i_1 - 1] [i_4] [i_4 - 2] [i_2 + 1])))));
                                var_23 = (max((var_7 <= var_18), ((var_10 ^ (var_2 + 84)))));
                            }
                        }
                    }
                }
                var_24 = ((-(((arr_13 [i_1] [20] [18] [i_0 + 1] [i_0 + 1]) * var_16))));
            }
        }
    }
    var_25 = var_0;
    #pragma endscop
}
