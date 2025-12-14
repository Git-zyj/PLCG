/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((((0 != var_6) ? ((min((arr_0 [i_0]), var_13))) : ((max((arr_2 [4] [4]), var_1))))) ^ (!var_5)));
        var_15 = (min(var_15, ((((((((var_11 ? var_10 : var_1))) ? var_5 : (~-3916))) + ((((((32 ? (arr_2 [0] [0]) : (arr_0 [i_0])))) && ((min(3, 3)))))))))));
        arr_3 [i_0] [i_0] = (!(20 - -23));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_16 = ((var_0 ? (arr_4 [i_1]) : -58));
            var_17 = ((((var_8 ? var_10 : var_13)) >= ((var_10 << (var_0 - 23078)))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 = -64;
            var_19 = var_6;
            var_20 -= 32767;
            var_21 -= var_4;
        }
        arr_11 [i_1] [i_1] = (arr_10 [i_1] [i_1 + 1] [i_1]);
        var_22 = (((((var_12 ? 113 : -7))) ? (!var_13) : ((var_5 / (arr_5 [i_1])))));
    }
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        arr_15 [i_4] [i_4] |= var_4;
        arr_16 [i_4] = -var_3;
        arr_17 [i_4] = (((((arr_8 [24] [i_4]) | (!var_0))) <= ((((((arr_0 [i_4]) ^ (arr_9 [i_4] [i_4] [0])))) ? ((var_11 ? 1 : var_10)) : (-7 | 32729)))));
    }
    var_23 = (max(var_23, var_10));
    #pragma endscop
}
