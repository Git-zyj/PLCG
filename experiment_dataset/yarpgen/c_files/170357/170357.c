/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (((((arr_0 [i_0] [i_0]) % var_7)) * (~21097)));
        var_12 = (min(var_12, (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (arr_0 [21] [21]);
        var_13 = (max(var_13, (((((-(arr_0 [i_0] [i_0]))) * -125)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_14 += (var_4 | 10097672683562060515);
            var_15 = (max(var_15, (arr_4 [i_0] [5])));
            var_16 = arr_3 [i_0];
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] &= (arr_0 [i_0] [i_0]);
            var_17 = (arr_7 [i_0] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_18 = ((108 ? 4864946206588214179 : 1));
        var_19 = ((var_2 ? (var_5 || -19122) : 5));
    }
    var_20 = var_5;
    var_21 = (var_9 <= -1183283286);
    #pragma endscop
}
