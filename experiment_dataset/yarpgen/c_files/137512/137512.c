/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 |= (max((((arr_2 [i_0]) - var_5)), var_5));
        var_16 = var_7;
        var_17 = (min(var_17, var_12));
        arr_4 [4] = var_0;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_18 = (min((((((arr_14 [i_0] [i_2] [i_2] [i_2]) | (arr_7 [i_0] [i_0]))))), 4294967286));
                            arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = (((-32767 - 1) ? 203 : 1));
                            var_19 = (((((~((var_11 ? (arr_1 [i_1]) : var_1))))) == ((-32745 | (((var_12 ? 1 : var_14)))))));
                            var_20 = (max(var_20, (arr_11 [i_0] [i_1] [i_0])));
                            arr_16 [i_2] [i_2] [i_2] [i_1] [i_2] = ((((((!var_10) ? (arr_13 [i_0] [i_0] [i_3 + 2] [i_3] [i_1]) : (arr_9 [i_3 - 1] [i_3] [i_3])))) < (((arr_10 [i_3 + 2] [i_2] [i_3 + 1] [i_2] [i_3 - 1]) % (((var_9 ? var_11 : var_6)))))));
                        }
                    }
                }
            }
            arr_17 [i_0] [i_0] = (arr_6 [i_0]);
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_21 = (min(((min(var_0, var_11))), (((32754 / 32640) * (arr_18 [i_5])))));
        var_22 = (min(var_22, -79));
        var_23 = ((var_4 == (((((((arr_18 [i_5]) || (arr_19 [i_5] [i_5])))) >= ((max(32767, (arr_19 [i_5] [i_5])))))))));
        var_24 = (max((((~(arr_19 [i_5 - 1] [i_5 - 1])))), (min((arr_18 [i_5 - 1]), (arr_19 [i_5 - 1] [i_5 - 1])))));
    }
    var_25 = (max(var_14, var_14));
    var_26 = -var_7;
    #pragma endscop
}
