/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (((~((var_12 * (arr_0 [i_0] [i_0]))))));

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_18 |= (min(4821401235841134368, 2114139410));
                            var_19 &= (min(((var_6 ? ((((arr_7 [i_0] [i_0] [i_3] [i_4]) ? var_4 : var_1))) : -4821401235841134366)), (var_12 && var_16)));
                        }
                    }
                }
            }

            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                arr_13 [i_0] [i_1] [i_5 - 3] = 24578;
                var_20 = (((arr_12 [i_5 + 4] [i_1] [i_1 - 2] [i_1 - 2]) ? ((0 ? 4821401235841134383 : 32759)) : (arr_12 [i_5 - 2] [i_5] [i_1 - 1] [i_5])));
            }
        }
        arr_14 [i_0] = (min((min(924686659, (arr_6 [i_0] [i_0] [i_0] [i_0]))), ((~(arr_5 [i_0] [i_0] [i_0] [i_0])))));
        var_21 = ((32759 ? 255 : 11786));

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_18 [i_0] = (min((((arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1]) ? (arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1]) : 53)), ((-(arr_7 [i_0] [i_0] [i_6 - 1] [i_6])))));
            var_22 = (min(var_16, (((arr_6 [i_0] [9] [i_0] [i_0]) / (min(6194180012477628895, (arr_15 [i_6 - 1])))))));
            var_23 = var_15;
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_24 = var_8;
            arr_22 [i_7] [i_7] = (arr_2 [i_0]);
            arr_23 [i_0] [i_0] = min((min(((2077507938 ? 2 : 0)), var_5)), ((~(arr_19 [i_0] [i_7] [i_7]))));
        }
    }
    var_25 = (((((1697730958 ? 1916 : -5))) && var_3));
    #pragma endscop
}
