/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((233 >= (min(var_6, (max(var_8, 2916670283))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((1378297012 % (((!1280875674) ? (((arr_1 [i_0]) & 2916670283)) : (arr_0 [i_0])))));
        var_12 = ((((-(arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 |= 3155138028623327956;
            arr_5 [i_1] = 1;
        }
    }
    var_14 += (max((((!(var_7 <= 2916670282)))), -0));
    var_15 = (((((((var_3 ? var_4 : 3155138028623327956)) <= ((var_6 ? var_1 : 0))))) * ((min(1, var_5)))));
    var_16 |= var_1;
    #pragma endscop
}
