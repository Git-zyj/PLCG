/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((max((var_2 - 2320), var_14)))));
    var_19 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 = -19128;
            var_21 = ((16452 ? ((-21 ? var_9 : (arr_1 [8]))) : (arr_2 [i_0] [i_0])));
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_10 [i_2] [i_2 + 2] = (arr_6 [i_2 + 3] [i_2 + 3]);
            var_22 = ((~(arr_5 [i_2 + 3] [i_2 + 1])));
            var_23 = (var_1 ? var_14 : (arr_9 [i_0] [4]));
            var_24 = ((-var_8 ? (~2119368453) : (arr_7 [i_0] [i_2])));
        }

        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_25 = (3648924644683744372 <= 1237078021867319911);
            arr_14 [i_0] = -23055;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_4] [i_4] = (!var_6);
            var_26 *= ((!(arr_11 [i_0] [i_0] [2])));
            arr_18 [1] [i_4] [i_4] = ((((((-32767 - 1) / var_9))) ? var_11 : (((arr_4 [i_0]) ? var_4 : 32765))));
        }
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        arr_23 [i_5] = (max(58, (((arr_19 [10] [10]) ? (var_8 * var_9) : -0))));
        arr_24 [i_5] = (~var_9);
        var_27 -= (((-(max(253, var_4)))));
        var_28 = (~162);
    }
    var_29 += (var_5 ? (max(var_9, (var_3 || var_2))) : ((min((max(var_17, 27923)), ((max(65535, var_15)))))));
    #pragma endscop
}
