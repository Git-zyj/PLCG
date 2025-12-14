/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((-(max(var_15, var_11))))))));
    var_17 = (var_3 ^ var_1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            var_18 = 11;
                            var_19 = ((-(((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 + 2] [i_4 + 2]) + (arr_11 [i_1 - 1] [i_4 + 3] [i_1 - 1] [i_4])))));
                            var_20 = (max(var_20, (((((min((arr_1 [i_4 + 3]), 1792))) ? 63740 : (((arr_1 [i_4 + 2]) & (arr_1 [i_4 + 3]))))))));
                        }

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_21 *= (max(1, (max((arr_15 [i_1] [i_0] [i_1] [6] [i_1 - 1]), var_10))));
                            var_22 *= ((-((((((min(1, var_4)))) == (((-9223372036854775807 - 1) ? (arr_1 [i_1]) : (arr_14 [i_2]))))))));
                        }
                        var_23 = ((((max((arr_12 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1]), (arr_12 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2])))) ? ((((((0 ? var_9 : (arr_7 [i_0])))) ? -1 : (((!(arr_3 [i_1]))))))) : (((arr_0 [i_3]) ? ((var_2 ? (arr_10 [3] [i_2] [i_1]) : 10)) : var_14))));
                    }
                }
            }
        }
        var_24 = (min(var_24, (((((((((arr_1 [i_0]) - 1))))) / (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0]) : (min((arr_11 [i_0] [i_0] [i_0] [i_0]), 4294967288)))))))));
        var_25 = (min((arr_4 [i_0]), var_14));
        var_26 = ((((min(((max(var_4, var_1))), (var_11 - var_15)))) / (-9223372036854775807 - 1)));
    }
    #pragma endscop
}
