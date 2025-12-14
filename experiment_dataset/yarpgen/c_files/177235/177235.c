/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((-3547 ? -118 : -101));
        arr_4 [i_0] [i_0] = var_3;
        arr_5 [i_0] = var_7;
        arr_6 [i_0] = (~(var_17 >= var_17));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_10 [i_1] = ((~var_14) ? ((var_17 ? (arr_7 [i_1]) : 10)) : (((((~117) + 2147483647)) >> (((min(18446744073709551615, 102)) - 101)))));
        arr_11 [i_1] = (arr_7 [11]);
        arr_12 [i_1] = (((!(arr_8 [i_1]))));
        arr_13 [i_1] [i_1] = ((var_4 >= (min((arr_8 [i_1]), (arr_7 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_17 [6] = (var_9 ? (max((arr_14 [8]), var_16)) : ((((!(arr_16 [i_2]))))));
        arr_18 [i_2] = (i_2 % 2 == 0) ? (((((((!var_14) ? (~var_2) : ((var_10 ? 18 : var_12))))) ? (((((((var_11 >> (((arr_14 [i_2]) - 9169046763350281895))))) >= -1)))) : (max((arr_14 [i_2]), (max(3546, var_3))))))) : (((((((!var_14) ? (~var_2) : ((var_10 ? 18 : var_12))))) ? (((((((var_11 >> (((((arr_14 [i_2]) + 9169046763350281895)) - 5484375761668020752))))) >= -1)))) : (max((arr_14 [i_2]), (max(3546, var_3)))))));
        arr_19 [8] [i_2] = 65525;
        arr_20 [8] = var_17;
    }
    var_19 = ((var_10 ? var_9 : (max(var_11, var_13))));
    #pragma endscop
}
