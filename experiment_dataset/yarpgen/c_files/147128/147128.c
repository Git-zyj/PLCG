/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [0])))) ? 2147483647 : ((((arr_0 [i_0] [2]) - 1)))))) ? (((~(arr_1 [5])))) : 0));
        arr_4 [3] = var_7;
        arr_5 [i_0] |= var_1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = ((((-var_5 >= (4294967289 <= -732311969))) ? -15 : var_2));
        arr_9 [13] [8] = var_4;
        arr_10 [i_1] = var_8;
        arr_11 [i_1] [i_1] = ((var_3 - (max((var_0 * var_4), 0))));
        arr_12 [1] = 0;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_15 [i_2] [i_2] = 127;
        arr_16 [i_2] = ((~(((arr_6 [i_2] [i_2]) ? (((arr_13 [i_2]) - var_1)) : (4294967295 <= var_6)))));
        arr_17 [i_2] = 1;
        arr_18 [i_2] = ((((((~(arr_14 [i_2] [i_2]))))) ? 1 : (((var_3 >= (arr_6 [i_2] [i_2]))))));
        arr_19 [i_2] = (!13111);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_22 [i_3] = arr_21 [i_3] [i_3];
        arr_23 [i_3] [16] = ((+(min((arr_6 [i_3] [i_3]), (arr_7 [i_3] [i_3])))));
        arr_24 [i_3] [i_3] = (min(120, (((4294967295 < -121) ? var_8 : 8068))));
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_28 [i_4] = (max((1 * 18446744073709551609), (arr_7 [i_4] [i_4])));
        arr_29 [i_4] = var_5;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_34 [i_5] = (arr_30 [i_5]);
        arr_35 [i_5] = (arr_32 [i_5]);
        arr_36 [i_5] [1] = -31250321;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_39 [5] = (((arr_37 [i_6]) ? 7 : (arr_37 [i_6])));
        arr_40 [i_6] = 135107988821114880;
    }
    #pragma endscop
}
