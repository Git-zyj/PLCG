/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((4994150474382218346 ? 1 : 3970602870));
    var_11 = ((9223372036854775807 ? 2297052601 : 9223372036854775807));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 += ((((((min((arr_2 [i_0] [i_0]), var_6))) ? ((-9223372036854775790 ? 962190558 : 1729993813368757805)) : (arr_0 [i_0] [i_0]))) | (((~(arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] = (~(((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_13 = var_0;
        arr_9 [i_1] [i_1] = var_7;
        arr_10 [i_1] = (i_1 % 2 == 0) ? (((((var_7 ? (arr_7 [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 - 1]))) / (min((~var_9), (((((arr_6 [i_1]) + 9223372036854775807)) >> (((arr_8 [i_1] [i_1 - 1]) - 56692905))))))))) : (((((var_7 ? (arr_7 [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 - 1]))) / (min((~var_9), (((((arr_6 [i_1]) + 9223372036854775807)) >> (((((arr_8 [i_1] [i_1 - 1]) - 56692905)) - 910048440)))))))));
        arr_11 [i_1] = (((((((var_1 ? 3970602887 : (arr_6 [i_1])))) ? var_5 : ((var_6 ? (arr_7 [i_1] [i_1]) : var_6)))) <= ((((var_3 - (arr_6 [i_1 + 1]))) ^ (arr_6 [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_16 [i_2] [i_2] = (-9223372036854775803 + 4047122343);
        var_14 *= (-9223372036854775807 - 1);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            arr_22 [i_3] [i_3] [i_4] = (((((3970602870 ? -1 : 4047122334))) ? (arr_13 [i_3]) : (((arr_6 [i_3]) ? 324364402 : 511))));
            var_15 = ((((-(((arr_15 [i_4]) - var_2))))) ? (((-(arr_14 [i_3])))) : (arr_17 [i_4] [i_3]));
            var_16 = -var_1;
        }
        for (int i_5 = 4; i_5 < 18;i_5 += 1)
        {
            arr_25 [i_5] = (~1506289371);
            var_17 += var_9;
            var_18 ^= (min((arr_14 [i_5 - 3]), -9223372036854775803));
        }
        arr_26 [i_3] &= ((520 ? (((arr_24 [i_3] [4]) / (arr_24 [4] [4]))) : (arr_24 [i_3] [0])));
    }
    var_19 = (max(var_19, var_0));
    #pragma endscop
}
