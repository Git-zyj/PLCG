/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 434073660;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (max(var_13, -var_9));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((!(((-1 ? var_2 : var_9)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2] = var_2;
            arr_11 [i_2] = ((61562 ? ((1 ? (arr_0 [i_2]) : (arr_9 [i_1] [i_2]))) : (arr_9 [i_2 - 1] [i_2])));
            var_14 = 3972;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_15 = ((1 ? -var_3 : 61562));
            arr_14 [i_1] [i_1] [i_3] = 3974;
            var_16 = (-(arr_7 [6] [i_3]));
            arr_15 [i_1] [i_1] [i_3] = ((~(arr_1 [i_1] [i_3])));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_17 = 3445;
            arr_18 [i_4] = -var_3;
            var_18 = (max(var_18, ((((arr_8 [i_1] [i_4]) ? (arr_8 [i_1] [11]) : var_9)))));
            var_19 *= ((-(arr_1 [i_1] [i_4])));
            arr_19 [0] [i_1] = ((var_11 ? (arr_2 [i_4] [i_4]) : (arr_2 [i_1] [i_4])));
        }
        var_20 = ((-var_6 ? var_8 : (((var_4 << (62090 - 62060))))));
        var_21 ^= (arr_1 [i_1] [i_1]);
        var_22 = 3167958100;
        arr_20 [i_1] = (arr_2 [1] [1]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_23 = (min(var_23, (((567453553048682496 ? (((var_9 != var_11) ? (arr_13 [i_5] [i_5]) : var_10)) : (~var_11))))));
            var_24 ^= (max(var_4, (~var_8)));
            var_25 = ((!(((var_5 - ((var_6 ? 0 : var_5)))))));
            arr_25 [i_6] [i_6] = var_8;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_29 [i_7] [5] [i_5] |= (1 == 1);
            var_26 = (~8234);
            arr_30 [i_7] &= -65535;
            arr_31 [i_5] = (((arr_6 [i_7 + 1] [i_7 + 1]) ? var_11 : (arr_7 [4] [4])));
            var_27 -= ((((arr_22 [i_5]) ? var_9 : (arr_22 [i_5]))));
        }
        arr_32 [i_5] = var_1;
    }
    #pragma endscop
}
