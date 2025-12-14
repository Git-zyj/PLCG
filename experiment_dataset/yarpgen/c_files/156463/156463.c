/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -7767;
    var_12 = ((-3070 ? (((~-27421) ? 6170 : var_4)) : var_0));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((((max(14656, -2046740008))) ? (9129519398911926477 && 189) : 8192)));
        arr_4 [20] = (((((93589837 - ((var_5 ? var_3 : (arr_0 [i_0] [i_0])))))) ? (((arr_0 [i_0] [i_0]) ? 287767033074273233 : 41935)) : var_5));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_13 = (-18446744073709551610 == -var_9);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_14 -= ((((max(var_8, (arr_2 [i_1])))) ? var_8 : 23595));
                    arr_14 [i_1] [i_2] [i_3] [2] |= (255 & 21995);
                    var_15 = -var_4;
                    var_16 = (((var_8 + 252) - (((arr_9 [i_1 + 1] [7]) ? -6860 : (arr_13 [i_1 + 2])))));
                }
            }
        }
        var_17 += (max(((43 ? 9223372036854775807 : 3)), (((var_4 ? ((-14660 ? var_6 : var_0)) : 3)))));
        arr_15 [i_1 - 2] = var_8;
    }
    #pragma endscop
}
