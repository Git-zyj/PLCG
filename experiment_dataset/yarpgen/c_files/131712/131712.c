/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = ((var_6 ? (~861658135) : (max((((-5340519401293624886 ? 2 : 32640))), (~33554432)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (+((-25799 ? ((min((arr_2 [16] [i_0]), (arr_2 [i_0] [i_0])))) : -859509735)));
        var_18 = (min(var_18, ((((arr_1 [10] [19]) & (((var_7 * (!-9413)))))))));
    }

    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_19 *= ((~(arr_4 [i_1])));
        var_20 -= (arr_4 [15]);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [12] = ((-((((max(1, var_12))) ? 32764 : (arr_7 [i_2])))));
        var_21 = (((((~((65528 ? -5340519401293624872 : -861658136))))) ? (((arr_7 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2]))) : ((var_6 - (arr_8 [i_2])))));
        arr_10 [i_2] = (max(((1129892407 ? 32763 : 6290638278434926032)), ((((arr_7 [15]) ? (((arr_7 [i_2]) ? var_13 : -109)) : var_3)))));
        var_22 -= 251;
    }
    var_23 |= (!var_12);
    #pragma endscop
}
