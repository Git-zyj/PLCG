/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [i_0]) != (((arr_1 [i_0]) ? (arr_2 [i_0]) : var_9))));
        arr_5 [21] = (arr_0 [i_0]);
        arr_6 [i_0] [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = arr_1 [i_1];
        arr_9 [i_1] = ((((((arr_3 [i_1]) ? (arr_0 [16]) : 1))) ? (arr_8 [i_1]) : (arr_8 [i_1])));
        var_16 = (arr_8 [i_1]);
        arr_10 [i_1] = ((((3245 ? 12389447706886015969 : 523776)) * (arr_2 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_13 [i_2] = arr_3 [i_2];
        var_17 = (var_5 + (arr_12 [i_2] [i_2]));
        var_18 = (arr_12 [i_2] [i_2]);

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_19 = ((62310 || (arr_16 [i_3])));
            arr_17 [i_2] = (((arr_15 [i_3] [i_2]) % (arr_15 [i_2] [i_2])));
            var_20 = (((628247202 >= (arr_0 [i_2]))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_21 = (((arr_11 [i_2] [i_4]) ? (arr_20 [0] [0] [6]) : (arr_3 [i_4])));
            var_22 = (((arr_19 [i_2] [i_4]) ? (arr_19 [i_2] [i_4]) : (arr_19 [i_2] [i_4])));
            arr_21 [1] [i_2] [i_2] = (arr_7 [i_2] [i_4]);
        }
        var_23 = (((arr_16 [i_2]) - (arr_0 [i_2])));
    }
    var_24 = (!var_0);
    var_25 = (((!62291) % var_13));
    #pragma endscop
}
