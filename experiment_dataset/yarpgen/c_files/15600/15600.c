/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_4;
    var_20 = (min(var_20, ((((((var_9 ? var_3 : var_0))) ? ((var_6 ? -var_11 : (var_3 && var_2))) : var_18)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 |= (!var_2);
        var_22 = (((((-(arr_0 [i_0] [i_0])) * var_9))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_23 = ((((((arr_2 [i_0] [i_0] [i_0]) - ((max(18, 1)))))) & (max(var_5, 13248347533711535678))));
            var_24 = (max(var_24, ((((((arr_4 [i_1 - 1] [i_1 + 1]) + (arr_4 [i_1 + 1] [i_1 - 1]))) + (arr_4 [i_1 - 1] [i_1 + 1]))))));

            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                var_25 += (((5198396539998015922 ? (((var_18 ? var_5 : (arr_4 [i_1] [i_0])))) : (arr_7 [i_2 - 1] [i_2 + 2] [i_1 + 1]))));
                var_26 = 40222;
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_27 = ((~(arr_1 [i_1 + 1])));
                var_28 = ((((min(var_0, (!5198396539998015937)))) ? (((-2863363477177643661 - (arr_3 [i_0] [i_1] [i_1 - 1])))) : (max((((var_16 ? var_17 : var_10))), (arr_12 [i_3] [i_1 - 1] [i_0] [i_0])))));
                var_29 = (arr_11 [i_1 - 1] [i_1 - 1]);
            }
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_30 *= var_17;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_31 = 18446744073709551615;
                            var_32 -= ((!((min((5198396539998015938 + var_3), -2863363477177643660)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
