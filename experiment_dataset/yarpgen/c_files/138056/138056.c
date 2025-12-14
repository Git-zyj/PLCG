/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [16] = (((((arr_2 [i_0]) >> (((max(0, (arr_2 [i_0]))) - 5848062878901778550)))) - var_9));
        var_12 = ((~((((max((arr_2 [11]), (arr_3 [i_0] [i_0])))) ? (arr_2 [i_0]) : (((var_6 ? 1048575 : var_10)))))));
        var_13 = ((!((((((-(arr_3 [i_0] [i_0])))) ? var_11 : (~1))))));
        arr_6 [i_0] = ((((!((min(var_6, 1856516129))))) ? var_6 : 1));
    }
    var_14 = (min((((~var_9) ? (var_6 * 1) : 15872)), (min(var_11, var_2))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = (arr_8 [i_1]);
        var_16 = (max(var_16, (((-(((arr_8 [i_1]) - var_7)))))));
        arr_9 [i_1] = ((~(arr_7 [i_1])));
        arr_10 [i_1] = ((~((var_0 ? (arr_7 [i_1]) : 24821))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_17 = (1 & 40);
        var_18 = 231;
        arr_14 [i_2] = ((-((-((var_7 ? var_11 : var_8))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = var_5;
        var_19 += ((!(~81)));
        arr_18 [i_3] [9] = ((+(((arr_8 [i_3]) ^ (arr_8 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_20 ^= arr_20 [i_4];
        arr_21 [i_4] = (((arr_19 [i_4]) ^ ((min(((var_5 ? var_2 : var_9)), (~var_6))))));
        var_21 = (max(((-(~var_11))), (((~(arr_20 [15]))))));
        arr_22 [i_4] = (((arr_20 [i_4]) ^ var_7));
        var_22 = ((((((min(var_6, (arr_20 [18])))) * -90))) ? (((var_6 ? ((-(arr_19 [i_4]))) : var_4))) : (max((arr_19 [i_4]), (~var_11))));
    }
    var_23 = -var_9;
    #pragma endscop
}
