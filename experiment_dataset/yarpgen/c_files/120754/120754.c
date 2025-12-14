/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] = (arr_2 [13]);
            var_17 = (min((10784406069590066366 % var_1), (var_5 > 3342233651353214998)));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_18 = ((var_11 || (arr_7 [i_2 + 1] [i_2 + 1] [i_2])));
            arr_9 [i_0] = (arr_1 [i_2] [i_2 - 1]);
            arr_10 [i_0] = 16358214008685316825;
            arr_11 [i_2] [i_2] [i_2] |= ((((var_9 ? var_1 : var_11)) >> ((((var_3 ? var_12 : var_11)) + 6842658070748784370))));
        }
        arr_12 [i_0] = var_5;
        var_19 = (min((~2088530065024234791), -3124581287));
        var_20 = (((((var_6 ? var_11 : var_5))) >> (var_0 - 1930388813)));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (((((var_4 ? var_14 : var_4)) + var_7)));
        var_21 = (((((((min(var_8, 1))) || (arr_7 [i_3] [i_3] [i_3])))) >> ((((~(max(var_0, var_5)))) + 4129732739620228149))));
        var_22 = (((2088530065024234790 + var_7) && 684668854));
        var_23 = (min(var_23, ((((((min(-24776, var_15)))) >= (max(-var_8, var_5)))))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] [i_4] = ((((((-5147868041330821987 ? var_8 : var_12)))) ? ((-106983309 ? (min(var_16, -32444)) : ((min(1752188583, 58))))) : 0));
        var_24 = ((((var_13 ? var_0 : (arr_16 [i_4])))));
        var_25 = (((((80 == (arr_3 [i_4])))) == var_9));
    }
    var_26 = (min(var_26, -51));
    #pragma endscop
}
