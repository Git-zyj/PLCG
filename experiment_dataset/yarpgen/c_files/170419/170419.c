/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0 - 2]);
        var_15 = var_6;
        var_16 ^= ((~((((var_1 ? var_10 : (arr_1 [i_0] [i_0])))))));
        var_17 = (max((min(((240 ? (arr_1 [i_0] [i_0 - 4]) : var_1)), var_10)), (((0 == ((min((arr_0 [i_0] [i_0]), var_12))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_3 [i_1]);
        var_19 = (min((arr_2 [i_1]), ((-(arr_2 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_6 [i_2] = (arr_2 [i_2]);
        arr_7 [i_2] [i_2] = (((arr_5 [i_2]) < ((((min(0, (arr_3 [i_2])))) ? (arr_5 [i_2]) : var_7))));
    }
    var_20 = var_8;
    var_21 = 40565;
    var_22 ^= var_11;
    #pragma endscop
}
