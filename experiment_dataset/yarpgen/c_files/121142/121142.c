/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = -17;
                var_21 = ((((((arr_0 [i_0 + 3]) << (((arr_0 [i_0 + 4]) - 15123))))) <= (((((arr_2 [i_0]) <= var_12)) ? var_10 : (arr_0 [i_0])))));
                var_22 ^= (max(0, (arr_4 [i_0])));
                var_23 = (max(var_23, ((max(((max((((arr_5 [2]) ? 65535 : var_15)), ((16382 ? var_15 : 65531))))), (((arr_2 [i_0]) - (arr_5 [i_0 + 1]))))))));
            }
        }
    }
    var_24 = var_18;
    var_25 = (((min(65529, 1)) + var_11));

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_9 [i_2] = ((12767849061500188110 ? 0 : 65530));
        var_26 = (((-1111103187 + 65535) + (arr_8 [i_2] [i_2])));
        var_27 = (min(var_27, ((((arr_6 [0]) || ((((arr_6 [6]) + var_6))))))));
        arr_10 [i_2] = arr_6 [i_2];
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_28 *= (+(min((((var_14 + 9223372036854775807) >> (65535 - 65506))), (((10652 >= (arr_13 [4])))))));
        var_29 *= (min(((((arr_11 [i_3 - 1]) <= (arr_14 [14] [14])))), 12));
    }
    #pragma endscop
}
