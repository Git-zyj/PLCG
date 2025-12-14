/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 ^= (max(0, -637501212993620456));
        arr_3 [i_0] = max(((((min(var_12, var_10))) & var_15)), ((var_10 | ((max(var_0, 1))))));
    }
    var_21 &= 13229;

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (13229 % -2371838339951400889);
        arr_8 [i_1] = 1;
        var_22 = (max((--2371838339951400888), ((((arr_6 [i_1]) ^ (arr_4 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 = (max(var_23, (((28 > ((((((arr_13 [i_2 + 4] [i_2 + 4]) & var_1))) ? (((arr_10 [i_2]) ? var_4 : -2371838339951400889)) : var_11)))))));
            var_24 &= ((-((((63895 && (arr_10 [i_3])))))));
            var_25 *= (min(var_14, (((var_6 | var_8) ^ -var_3))));
        }
        var_26 = (max(var_26, (arr_12 [10] [i_2] [10])));
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_27 *= (min(((2162779528200142692 % (arr_2 [i_4 - 1]))), (arr_10 [i_4])));
        var_28 &= ((!(arr_14 [i_4 + 1] [i_4] [i_4 + 3])));
        var_29 = 18446744073709551615;
    }
    var_30 |= var_10;
    var_31 = (min(var_31, var_2));
    #pragma endscop
}
