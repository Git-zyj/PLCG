/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0] = ((-61 + (arr_0 [i_0 + 3])));
        arr_3 [3] [i_0] = (var_1 & 247);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (((arr_7 [i_1] [8] [i_0]) ? (8 / 44) : ((-(arr_0 [i_0])))));
            var_20 += ((2784562634 ? (arr_5 [i_0 + 4] [i_0 - 1] [i_0 + 1]) : (arr_7 [i_0 - 1] [i_1] [5])));
            var_21 = (max(var_21, var_18));
            arr_8 [i_0] = ((var_15 && (((arr_0 [i_1]) && 1120430948))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_22 &= (((~44) | var_16));
            var_23 = (((arr_12 [i_0 + 3]) ? var_8 : var_13));
        }
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_24 = (max(var_24, (((1609854902860256186 ? (((!(arr_13 [i_3 + 3] [i_3])))) : (arr_13 [i_3 - 1] [i_3 - 1]))))));
        arr_16 [i_3] = (((-((var_5 ? var_10 : 18446744073709551615)))));
    }
    var_25 = ((var_17 / (((((16836889170849295430 ? var_15 : var_9))) ? var_16 : 1510404662))));
    #pragma endscop
}
