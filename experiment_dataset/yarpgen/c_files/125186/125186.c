/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((707268146466515388 + -707268146466515388) == ((min(536739840, -707268146466515420)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 = (arr_0 [i_0 + 1]);
        arr_2 [i_0 + 3] = (-707268146466515393 / -707268146466515420);
        var_20 = (((arr_1 [i_0 + 1]) > (((-(arr_0 [19]))))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_21 = ((-(((((244 ? var_14 : (arr_8 [i_1] [i_1])))) ? ((var_8 ? var_2 : var_9)) : var_1))));
            arr_9 [i_1 - 1] = -var_2;
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_3] = (arr_10 [i_1 - 1] [i_3]);
            arr_13 [i_1] = ((-(((((~(arr_5 [i_3])))) ^ (~-707268146466515420)))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_16 [i_4] = ((var_2 ? (-9223372036854775807 - 1) : ((var_7 ? 19 : (((((arr_4 [i_1] [i_1]) < (arr_4 [i_1 - 3] [1])))))))));
            var_22 -= 15656;
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_23 = (min((arr_17 [i_1]), (((-(min((arr_4 [i_1 - 1] [i_5]), -3118718967817282752)))))));
            var_24 = (min(var_24, ((((((arr_6 [i_1] [i_5]) == (arr_8 [i_1 - 1] [i_1 - 1])))) % (((arr_4 [i_1 - 3] [i_1 - 3]) ? (arr_4 [i_1 - 1] [i_1 - 1]) : 14499))))));
        }
        var_25 = (min(var_25, ((((((min(var_14, (arr_17 [i_1]))))) ? (((max(var_6, -42)))) : ((min(304906111, var_6))))))));
        var_26 |= ((((((arr_3 [i_1 - 3] [i_1 - 3]) & (arr_3 [i_1 - 1] [i_1 - 1])))) ? (((arr_3 [i_1 - 2] [i_1 + 1]) ^ (arr_3 [i_1 + 1] [i_1 - 1]))) : ((~(arr_3 [i_1 - 3] [i_1 - 3])))));
    }
    #pragma endscop
}
