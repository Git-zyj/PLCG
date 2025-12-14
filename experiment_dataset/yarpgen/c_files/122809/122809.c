/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [i_0]);
        var_12 *= (((((max((arr_1 [7] [i_0]), 4916522163963585050)) ^ var_10))) ? 10249931089618571519 : (((((~(arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ^ var_10)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_13 &= (((arr_2 [i_0] [i_1 + 4]) ? var_0 : var_3));
            var_14 = (max(var_14, 97));

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_15 = (var_4 <= var_6);
                var_16 = (~-14);
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    var_17 = (((arr_1 [i_4 + 1] [i_1 + 1]) ? (arr_1 [i_4 + 1] [i_1 + 2]) : (arr_1 [i_4 - 2] [i_1 + 3])));
                    arr_12 [i_0] [i_1] [i_1] [9] = (arr_2 [i_1] [i_1 + 4]);
                }
                arr_13 [i_1] [i_1] [i_1] = (((arr_5 [i_0] [i_1 + 4] [7]) ? (~var_5) : (arr_0 [i_0])));
                var_18 = ((3 * (arr_11 [i_0] [i_1 - 1] [15] [i_0])));
                arr_14 [i_1] = (((arr_7 [i_1 + 3] [i_1] [i_1] [i_1]) * (((arr_0 [i_0]) / var_6))));
                arr_15 [i_0] |= (25386 && var_0);
            }
            var_19 += ((~(arr_5 [3] [3] [i_0])));
        }
        var_20 = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (87 | -65) : (~var_2)));
    }
    var_21 = (var_10 | (~var_2));
    #pragma endscop
}
