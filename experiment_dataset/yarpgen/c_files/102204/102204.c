/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 &= -65535;
        arr_3 [i_0] [i_0] = ((13 >= (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_21 = ((((((arr_6 [i_1] [i_1]) ? (-2147483647 - 1) : (arr_6 [i_1] [i_0])))) ? var_8 : (((-(arr_1 [i_0]))))));
            arr_7 [i_1] [10] [i_0] |= ((~(((((((arr_6 [i_0] [i_0]) + 2147483647)) >> (-108 + 135))) & (arr_2 [i_1] [i_1])))));
            var_22 ^= var_11;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_0] [i_0] [i_2] |= 5;
            var_23 = (-(arr_6 [7] [i_2]));
            arr_13 [i_2] = var_0;
            var_24 &= ((!((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        }
        var_25 += (arr_5 [i_0]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_21 [i_4] [i_3] [5] = (0 | 4294967295);
                    var_26 = ((65535 ? (-2147483647 - 1) : -9223372036854775799));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_27 = ((-((~(((arr_23 [i_5]) + (arr_23 [i_5])))))));
        var_28 = (!1125899906711552);
    }
    var_29 = -var_12;
    #pragma endscop
}
