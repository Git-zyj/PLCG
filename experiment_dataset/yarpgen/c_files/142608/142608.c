/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= (max((((var_0 / -15604) ? (var_1 || var_3) : (((var_11 == (arr_3 [i_0] [i_0])))))), ((max((!42), (((arr_1 [i_0]) < 212)))))));
        arr_5 [i_0] = ((~(((var_9 | 1607109214) ? ((var_1 ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0]))) : var_4))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_13 [i_2] |= var_2;
            var_13 = (~2687858081);
        }
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            arr_16 [i_3 + 2] = var_11;
            arr_17 [i_3] [i_3] = (arr_12 [i_3] [i_3 + 2] [i_3 + 2]);
            var_14 = ((~(arr_12 [i_3 + 4] [i_3 + 2] [i_3])));
            arr_18 [i_1] [i_3] [i_3] &= ((-((var_0 ? (arr_10 [i_1] [i_1]) : (arr_8 [i_1])))));
        }
        var_15 ^= ((var_1 ? 214 : 1));
        arr_19 [i_1] [i_1] = var_3;
        arr_20 [6] [6] = (13 == var_9);
        arr_21 [i_1] = ((214 != (arr_14 [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_25 [i_4] = (min((((1 + -50) ? (min(-55, 4259904412583779387)) : ((min(var_5, var_2))))), ((((-9223372036854775807 - 1) + ((59636 ? 153049482819690407 : (arr_24 [i_4] [i_4]))))))));
        arr_26 [i_4] = (-127 - 1);
        var_16 = ((var_2 ? var_8 : (max((arr_22 [i_4]), ((min(121, -104)))))));
    }
    var_17 = ((((var_6 && ((min(4035122863, 14186839661125772216))))) ? -4189810676418475847 : ((var_3 ? (!var_11) : var_5))));
    #pragma endscop
}
