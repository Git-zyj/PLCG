/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((4294967271 ? -1436537917098478539 : 2954019080));
        var_16 = (min(var_10, var_3));
        arr_3 [i_0] [i_0] = ((var_9 ? 4830474269759935400 : (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 6;i_2 += 1)
        {
            var_17 = (((arr_0 [i_2] [i_2 - 2]) > (arr_0 [i_2] [i_2 - 2])));
            var_18 = (max(var_18, var_0));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_19 = (min(var_19, var_4));
            var_20 *= ((1495986483 ? var_1 : (arr_4 [i_1 - 1])));
        }
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            arr_16 [i_1] = (-4752283994420152440 ? var_13 : (arr_10 [i_1]));
            var_21 ^= (((((14142 ? (arr_4 [8]) : var_0))) ^ 200318183));
            var_22 = (((((var_10 ? (arr_14 [i_1] [i_4]) : 4094649112))) ? (arr_15 [i_1 + 1]) : (arr_14 [i_1 - 1] [2])));

            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                var_23 -= ((var_0 + (arr_6 [i_1 + 1])));
                var_24 = 4294967271;
                arr_19 [i_1] [i_1] = (arr_5 [i_1 - 1]);
            }
        }
        arr_20 [i_1] [i_1] = (!var_7);
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        arr_24 [20] |= ((!((min((arr_23 [i_6] [i_6 + 1]), (arr_23 [i_6] [i_6 - 1]))))));
        var_25 = (min((((!(arr_22 [i_6])))), var_11));
    }
    #pragma endscop
}
