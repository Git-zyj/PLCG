/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_0 << var_9) + 127));
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((8796093022207 ? 1 : (arr_1 [i_0]))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_17 = -28;
            var_18 = (arr_1 [i_0]);

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_8 [i_2] [i_0] [i_0] = (((-(arr_3 [i_0] [i_0]))));
                arr_9 [i_2] [1] [1] [i_0] = ((((((arr_0 [1]) ? (arr_6 [i_0] [2] [i_0]) : (min(var_4, (arr_5 [i_0] [i_1] [i_2])))))) ? -28 : (min((((arr_1 [i_0]) >> (18446744073709551615 - 18446744073709551588))), (arr_1 [i_0])))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_19 -= ((!(var_4 >= var_8)));
                var_20 = ((((arr_2 [12]) + 2147483647)) << (((arr_1 [6]) - 21368)));
                var_21 = (min(var_21, ((((((1 ? (arr_5 [i_1] [i_1] [i_3]) : var_13))) ? (arr_2 [4]) : ((~(arr_1 [0]))))))));
                var_22 *= -var_2;
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_23 = (arr_17 [i_0] [1] [i_5] [1] [i_4] [i_5]);
                        arr_18 [i_0] [i_1] [i_0] = ((-((~(arr_7 [i_0] [i_1] [i_0])))));
                    }
                }
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
