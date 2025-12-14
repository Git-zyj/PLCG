/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_10));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 = ((max((arr_5 [i_0 - 2]), (arr_5 [i_0 - 1]))));
            arr_6 [i_1] &= ((!(((max((arr_4 [i_0 - 1] [i_1] [i_0 - 2]), var_8)) < ((((arr_2 [i_0 - 1]) ? 117 : -99)))))));
            var_14 += (((arr_3 [i_0 - 1] [i_0 + 1]) >> (((((((var_10 + 2147483647) >> (((arr_4 [i_1] [i_1] [i_0 - 2]) - 1094868260))))) < ((~(arr_3 [i_0 - 2] [i_1]))))))));
        }
        var_15 += max((((arr_4 [i_0 + 1] [i_0 - 2] [i_0 - 1]) * var_5)), (((((min((arr_2 [i_0 - 2]), var_11))) - -118))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_16 *= (((((112 * (((!(arr_15 [i_2] [i_3] [i_4] [i_4]))))))) / (((arr_3 [i_2] [i_2]) ? (arr_4 [i_2] [i_3] [i_4]) : var_7))));
                    var_17 ^= -4480510174007987992;
                }
            }
        }
        var_18 = (min(var_18, (((((((min(17, 30840)) / 1))) ? (((((var_8 ? 63135 : (arr_5 [i_2])))) ? ((var_9 ? 5098048623596841446 : (arr_10 [i_2] [i_2]))) : (min((arr_5 [i_2]), var_1)))) : (arr_1 [i_2] [i_2]))))));
        var_19 |= (-10 + 38615);
        var_20 = (max(var_20, ((max(((max((var_10 + var_10), (arr_10 [i_2] [i_2])))), (((arr_8 [i_2]) / -5967)))))));
        var_21 -= (min(((((min(4202536727044175653, 234)) + ((var_6 ? 3846538865537511574 : var_8))))), (max(38615, var_1))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_22 = (((arr_17 [i_5]) >= (((arr_16 [i_5]) ? var_8 : (arr_17 [i_5])))));
        var_23 = var_6;
    }
    var_24 |= var_2;
    #pragma endscop
}
