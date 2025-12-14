/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_0;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -5794;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 = (((((24336 - (arr_5 [i_0 - 1] [i_1] [5])))) * ((((((arr_1 [i_0]) / var_10))) - var_7))));
                        var_16 = ((((min((arr_4 [i_2] [i_1]), (arr_7 [5] [i_3])))) | (((var_11 || (var_0 == var_13))))));
                        var_17 = (min(var_17, 1930318365));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_18 = (((var_2 * var_11) << (-5787 + 5805)));
            var_19 += (((arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1]) ? (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : var_6));

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 ^= (arr_10 [i_0] [i_0] [i_0]);
                            var_21 = var_6;
                            var_22 = 47534;
                            var_23 = (((((max(var_2, (min(5794, var_1)))))) - ((-var_8 + (max(1891452852961338540, (arr_6 [i_4] [i_0] [i_7])))))));
                        }
                    }
                }
                var_24 &= 0;
                var_25 = ((((arr_8 [5] [i_4] [i_4] [i_0]) | (arr_3 [i_0] [i_0 + 2] [i_0 + 1]))));
                var_26 = var_6;
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_27 *= ((((max((arr_21 [i_0] [i_0] [i_8]), var_13))) >> (((((1 ? 536870912 : var_13))) - 536870884))));
            arr_23 [i_0] [i_8] = var_7;
        }
        arr_24 [i_0] = (((~((var_11 << (var_6 - 17781086417365616344))))));
    }
    #pragma endscop
}
