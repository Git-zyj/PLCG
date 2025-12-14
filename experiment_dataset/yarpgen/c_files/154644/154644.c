/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = 107472536;
        arr_3 [i_0 + 2] = ((146 / (arr_2 [i_0])));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_14 = (((((var_7 + (var_11 | var_4)))) ? ((-(arr_6 [i_1 + 1] [i_1 - 2]))) : ((((var_0 * var_9) >= (-1 % var_2))))));
        var_15 = var_11;
        var_16 += var_10;
        arr_7 [i_1] = -var_8;
        arr_8 [6] [i_1] |= ((!((((arr_4 [i_1] [i_1]) + (((arr_4 [i_1] [i_1]) + var_12)))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_17 &= (arr_6 [i_2] [i_3]);
                var_18 = 1;
                var_19 = (((((((arr_2 [i_2 + 2]) | -54)) + 2147483647)) << ((191 / (arr_2 [i_2 + 2])))));
            }
        }
    }
    var_20 += (min(((-54 - ((127 ? var_4 : 96)))), (((-(~var_10))))));
    #pragma endscop
}
