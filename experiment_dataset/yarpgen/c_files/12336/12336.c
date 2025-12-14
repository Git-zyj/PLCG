/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(var_13, (min(((var_8 ? var_3 : 9127490770814615595)), 14294))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (arr_0 [i_1])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [1] = (max((min((32567 % 10972), (max(328013466, -328013484)))), (arr_2 [i_0])));
                    var_16 = ((((min(7892, (arr_2 [i_0 - 1])))) >> (((arr_2 [i_0 - 1]) * (arr_2 [i_0 + 1])))));
                    var_17 = ((57644 ? 328013466 : -4613067538070040770));
                }
                var_18 = (max(var_18, ((((arr_3 [i_0 - 1]) ? ((~(arr_3 [i_0 + 1]))) : (arr_3 [i_0 + 1]))))));

                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_3] [i_4] = 127;
                        arr_15 [8] [i_3] [1] = (((-328013444 + 2147483647) << (1 - 1)));
                        arr_16 [i_0] [i_3] [i_0] [i_3 - 3] [i_0] [i_0] = (((((5254929996910154939 / (arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_3 + 1])))) ? (arr_0 [i_0 + 1]) : (((arr_0 [2]) * (max(var_3, 8900330848572014479))))));
                        var_19 = (max(var_19, ((min((min((arr_12 [i_0 + 1] [1]), (arr_12 [i_0 - 1] [4]))), (arr_12 [i_0 - 1] [i_0]))))));
                        arr_17 [i_3] [i_0] [i_1] [i_3] = (33463 / 9223372036854775807);
                    }
                    arr_18 [i_3] = (max(3905506017, 328013475));
                }
            }
        }
    }
    var_20 &= (min(var_0, ((~((97 ? var_4 : var_1))))));
    #pragma endscop
}
