/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 ? (min(var_0, ((var_5 ? var_8 : var_4)))) : (((max(1, (!var_8)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_0] = ((~(((1 >= ((1 ? (arr_2 [11]) : 1)))))));
            var_12 += (max(1995768723, (((var_10 / ((var_5 ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_2] [1] [i_2] = (min((min(127, (1 >> 0))), 1));
            arr_11 [i_2] [i_2 + 1] [i_2 + 1] = (max(((max(1003405418, var_10))), var_4));
            var_13 = ((((min((arr_4 [i_2 + 2] [i_2 - 1] [i_2 - 1]), ((max((arr_0 [i_2 - 1]), var_8)))))) ? (((12 % var_6) ? (arr_6 [i_2] [i_2 - 1]) : -694957486)) : var_10));
            arr_12 [i_2] [i_0] [i_0] = ((-(arr_8 [i_0])));
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_17 [i_3] [i_0] [i_0] = (((arr_6 [12] [i_3]) ? var_1 : (max(-4294967295, (!var_5)))));
            var_14 = ((((((arr_14 [i_3] [i_3] [i_0]) ? ((~(arr_15 [i_3] [i_0]))) : var_1))) || ((!(1 != 120)))));
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            var_15 = ((!(~var_1)));
            arr_21 [i_4] [i_4] [i_0] = ((1 / (arr_16 [i_0] [i_0] [i_4])));
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_26 [i_5] = ((max(240, (139 + 16357))) / ((min(var_7, 113))));
        var_16 ^= var_3;
    }
    var_17 = var_8;
    #pragma endscop
}
