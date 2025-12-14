/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_13 ? ((4091942734 ? 646620092 : 0)) : var_5)) | (var_5 ^ var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = 3673119932;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_20 = (arr_1 [i_0] [7]);
                    var_21 -= ((min((arr_6 [i_0] [i_1]), var_2)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_22 = ((~(var_2 - var_15)));
                        var_23 = (~159);
                        var_24 = (!var_6);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_25 = (min((((arr_1 [i_0] [i_1]) ? 29 : (arr_1 [i_2] [i_0]))), (((arr_1 [i_0] [i_1]) ? (arr_1 [i_4] [i_2]) : (arr_1 [i_0] [i_2])))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_15 [i_2] = (min(26084, ((-((((arr_1 [i_4] [11]) <= 43037)))))));
                            var_26 = (arr_4 [i_0]);
                            var_27 = var_16;
                            var_28 = (((((max(1, -26085)))) ? (((1 ? 0 : 203024559))) : var_8));
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_29 = (((((arr_5 [i_0] [6] [i_1] [i_0]) ? (arr_3 [i_6]) : (arr_5 [i_0] [i_0] [i_0] [i_1])))) ? ((max((arr_5 [i_0] [i_1] [i_6] [i_6]), 150))) : (((!(4091968301 && var_1)))));
                    arr_18 [i_0] = ((+(max((14711044394766117338 % 4091968301), 3673119927))));
                    var_30 = (min(var_30, (arr_9 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0])));
                }
                arr_19 [16] [i_0] [i_1] = ((((var_4 ? (min((arr_14 [i_0] [22] [i_1] [14] [i_0] [i_1] [i_0]), (arr_7 [i_0]))) : 0)) == (((0 ? 3291630347 : 28391)))));
            }
        }
    }
    #pragma endscop
}
