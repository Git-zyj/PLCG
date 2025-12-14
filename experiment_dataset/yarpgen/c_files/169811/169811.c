/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((!((max((var_5 + 63), (!2648215872)))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = (min(var_18, ((min((-951867266 / 7934997413685330420), (((((-32766 ? -7353 : (arr_1 [i_0] [i_0])))) ? (((max((arr_0 [10] [i_0 + 1]), var_13)))) : (max(1414167180499450131, 880324491313718266)))))))));
        var_19 = (max(var_19, (((((arr_1 [5] [i_0 + 1]) / (arr_1 [i_0] [i_0 - 1])))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = (max(((-((max((arr_3 [i_1]), (arr_2 [4])))))), (((arr_2 [i_1]) * (arr_3 [i_1])))));
        var_21 = (((min((min((arr_2 [4]), 1414167180499450131)), 2443340331)) ^ var_5));
        arr_4 [7] [3] = (((arr_3 [i_1]) ? (min((arr_2 [i_1]), ((var_5 ? 18446744073709551615 : (arr_3 [i_1]))))) : (((2590656767 >> (-2 + 27))))));
        arr_5 [i_1] [i_1] = (max(1414167180499450135, 7));

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_22 = (max(var_22, 1));
                            var_23 = (max(-24930, 7338));
                            var_24 = (min(var_24, ((((-7338 + 2147483647) << (32767 - 32767))))));
                        }
                    }
                }
            }
            var_25 = (max((max(3028948191, -24928)), ((min(-7310, (arr_11 [i_2 + 2] [i_1]))))));
        }
    }
    var_26 = ((7349 ? 1 : 907960017698899840));
    var_27 = var_13;
    var_28 = (((((((min(18602, var_14))) ? 40488 : (max(var_1, var_8))))) ? var_16 : ((max(var_4, var_14)))));
    #pragma endscop
}
