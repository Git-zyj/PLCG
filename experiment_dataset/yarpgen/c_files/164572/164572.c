/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max((((-12 & -127) + ((var_4 ? 300999299 : var_8)))), ((max(31, 3504434233))))))));
    var_18 = 3219229981;
    var_19 = var_0;
    var_20 = ((var_3 >= (max(1006632960, (var_11 / var_1)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_21 = ((!(arr_0 [i_0] [i_0])));
        arr_2 [i_0] = 4294967295;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((arr_3 [i_1] [i_1]) | 14023));
        var_22 = (arr_6 [i_1]);
        arr_8 [i_1] [i_1] = (~86);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_1] = (arr_5 [i_2] [i_1]);
            var_23 ^= -9223372036854775793;
        }
        var_24 |= (arr_0 [i_1] [i_1]);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (--14253);
        var_25 |= var_5;
        arr_17 [i_3] = -12;
        var_26 = (max(var_26, (((19 ? (max(((65523 ? 65531 : var_16)), (160 / 6))) : (var_11 && var_5))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_27 -= (((((arr_6 [i_4]) ? var_10 : (arr_3 [18] [18]))) == (var_11 && var_11)));
        var_28 -= ((~(max((arr_18 [i_4] [i_4]), 65532))));
    }
    #pragma endscop
}
