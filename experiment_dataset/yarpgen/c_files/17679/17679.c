/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((1 ? (max(var_18, 1)) : (~1)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (~1416992509);
        var_21 = (((~1) ? (((min(1, 120)))) : (min(var_12, 2250878348))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((5 ? 8128 : 81426253))))));

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = ((+(((arr_4 [i_2 + 1]) ? -4078377662463005265 : ((((3385165635 <= (arr_7 [i_1])))))))));
            arr_10 [i_1] [i_2] [i_2] = 1;
        }
        var_23 = (min(var_5, ((((arr_7 [i_1]) + (arr_8 [i_1] [i_1]))))));
        var_24 = (min(((((var_2 <= 1) ? (((min(8128, var_11)))) : -1854224225857955271))), ((var_0 ? (((arr_6 [i_1]) ? 7912122838362198229 : 0)) : (arr_1 [i_1])))));
    }
    var_25 = var_11;
    var_26 = var_18;

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_27 *= (((-13098 - 99) ? (arr_12 [i_3] [i_3]) : (-1111671102 > 0)));
        var_28 = (max(var_28, ((min(var_3, ((-(arr_13 [i_3]))))))));
        var_29 -= var_10;
        var_30 += (!0);
        var_31 ^= 2147483647;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_32 ^= (((max(112, 6750781979461534056)) > (arr_14 [i_4])));

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_33 *= var_15;
            var_34 = 2697153594148519380;
            var_35 = (arr_16 [i_5] [i_5]);
            var_36 += (min(8388607, 1));
        }
    }
    #pragma endscop
}
