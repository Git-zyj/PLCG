/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_13, -var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (1 ? var_7 : var_13);
        var_16 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_17 += (((min(var_9, 17838194458837057690))));
        var_18 = var_9;
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] = ((((min(var_0, var_9))) ? var_0 : 17895673071590363709));
        var_19 ^= ((-(((arr_5 [i_2 - 2] [i_2 - 1]) ? (min(var_13, 608549614872493931)) : (((arr_7 [11]) ? var_5 : var_13))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                var_20 = (((arr_3 [i_2]) | (arr_12 [i_4 + 4])));
                var_21 |= (((arr_14 [i_2 + 2] [i_3] [12]) / (arr_3 [i_3])));
            }
            arr_16 [13] [i_3] [i_3] = 8772681831239389251;
            arr_17 [i_3] = (arr_15 [i_2 - 4]);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_20 [i_2] [i_5] [i_5] = (min(1260275746, (arr_7 [0])));
            var_22 -= (((((max(var_1, ((((arr_6 [i_2]) != (arr_5 [i_5] [5])))))))) % var_2));
            var_23 = 1023;
            var_24 -= (((((var_14 ? var_11 : 13609595877457751121)) == 17838194458837057690)));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            var_25 = (~var_5);
            var_26 = 255;
            arr_25 [i_2] [13] [i_2] = 1073741823;
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_27 -= -var_5;
            var_28 = (min(var_28, (arr_12 [i_2])));
            var_29 = (min(var_29, (arr_11 [7] [i_7])));
        }
    }
    #pragma endscop
}
