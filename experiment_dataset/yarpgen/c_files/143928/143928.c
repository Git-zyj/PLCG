/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((var_8 ? (((min(var_11, (min(var_4, var_10)))))) : ((15 ? (((min(var_10, var_1)))) : var_0))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_1] = (((((arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3]) | ((-(arr_7 [i_0] [i_0] [1] [i_0]))))) >= 2147475456));
                        arr_13 [1] [1] [4] [i_3] |= ((65520 > -89) ? (((18446744073709551615 ? 0 : 65535))) : ((((min(166, (arr_11 [i_3] [i_0] [i_1] [i_0])))) ? (arr_6 [i_2]) : var_6)));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
                        var_14 = (min(98, (max((arr_2 [i_3] [i_0]), (arr_8 [i_0] [i_1] [i_2] [i_3])))));
                    }
                }
            }
            arr_15 [i_0] [i_0] = (((max(98, ((156 ? -75 : 53)))) == ((-(arr_1 [i_1])))));
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            var_15 = (min(var_15, (arr_2 [i_0] [6])));
            var_16 = (((((((arr_1 [i_0]) ? (arr_18 [i_4]) : (arr_6 [i_0]))))) ? 72057594037911552 : (((65520 ? 48 : 76)))));
            var_17 = (min(var_17, ((((arr_4 [i_0] [16] [i_0]) ? ((-1899927557 ? ((((65524 || (arr_3 [i_4] [i_0]))))) : (((arr_17 [i_4 + 3] [i_4 - 1] [i_0]) ? 11 : (arr_17 [i_4 + 3] [i_0] [i_0]))))) : (!32))))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_18 = (arr_10 [0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_19 = (((7 / 207) ? ((-1752128399 ? -2147483622 : 3)) : (((arr_18 [i_0]) >> (arr_18 [i_5])))));
        }
        arr_21 [i_0] |= (arr_6 [i_0]);
    }
    var_20 = (max(var_20, (((var_6 << (var_10 - 16507))))));
    var_21 = (((((((min(var_2, var_3))) && var_9))) >= var_5));
    #pragma endscop
}
