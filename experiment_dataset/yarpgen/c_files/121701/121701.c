/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((max(-15297298588923298050, ((var_10 ? var_4 : var_7))))) || -var_1));
    var_13 = ((var_6 + (!var_0)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (-120 && 15297298588923298060);
        var_15 = -var_6;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 ^= ((-(((arr_1 [i_1] [i_1]) | (arr_1 [i_1] [i_1])))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 += var_5;
            arr_9 [i_1] [i_1] &= ((((var_3 ? (arr_0 [i_1]) : (arr_3 [i_1]))) == (((var_0 + 2147483647) << (((arr_6 [i_2]) - 29221))))));
        }
        var_18 = (min(var_18, ((((max((4975 | var_7), ((max(1, var_0))))) & ((var_6 % (arr_2 [i_1]))))))));
    }
    #pragma endscop
}
