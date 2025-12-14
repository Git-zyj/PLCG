/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (min(var_2, var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 |= (max((((arr_2 [i_0]) ? ((var_4 ? var_2 : 255)) : -255)), ((max(-46, (arr_3 [i_0]))))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_8 [i_0] = 0;
            var_12 = (max(var_12, (((arr_4 [i_1 + 1] [i_1 + 1]) != (arr_4 [i_1 + 1] [i_0])))));
        }
        var_13 = -15;
        var_14 = (arr_7 [i_0]);
    }
    var_15 = (max((~-15), ((((min(var_3, var_8))) >> ((((var_0 ? var_7 : 1)) + 1994))))));
    var_16 = (max(var_6, var_5));
    #pragma endscop
}
