/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!var_14) ? (max((max(2701959748889684268, var_13)), var_1)) : var_6);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 += (arr_1 [i_0 + 1] [2]);
        arr_3 [13] [i_0] = (max((arr_1 [i_0] [i_0]), var_2));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_20 = 70368744177663;
            var_21 = (arr_5 [i_0 + 1] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_22 -= (arr_4 [6]);
            var_23 *= (((arr_1 [i_0 + 1] [6]) < (arr_2 [6])));
            var_24 = var_8;
        }
    }
    for (int i_3 = 1; i_3 < 6;i_3 += 1)
    {
        var_25 += ((((((((var_6 ? var_8 : (arr_1 [i_3] [4])))) ? ((min(var_10, var_2))) : ((((arr_10 [i_3 + 3] [5]) && (arr_8 [i_3] [8] [i_3 + 1]))))))) ? (((((min((arr_8 [i_3] [4] [i_3]), 1))) ^ (arr_8 [1] [10] [i_3])))) : ((~((var_4 | (arr_4 [6])))))));
        arr_11 [i_3] = arr_4 [8];
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_26 = (min(var_26, (((var_13 ? (min(((min(1, 2538844980))), ((~(arr_2 [i_4]))))) : var_12)))));
        var_27 = ((2691873372 ? ((((((arr_1 [i_4] [i_4]) | (arr_13 [i_4])))) ? (arr_8 [10] [i_4] [i_4]) : -6499658376697128376)) : ((((var_14 ? (arr_6 [12] [i_4] [i_4]) : (arr_5 [i_4] [i_4])))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_28 = ((2538844980 ? -120 : var_16));
            arr_17 [i_5] [i_4] |= (~var_17);
            var_29 *= var_11;
        }
        var_30 = var_4;
        arr_18 [i_4] [i_4] = -var_12;
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_31 = ((var_10 ? (min((min(9488459735491842175, (arr_19 [i_6] [i_6]))), (((2477292836097623596 ? (arr_1 [1] [i_6]) : (arr_8 [i_6] [i_6] [i_6])))))) : ((((var_3 || (arr_8 [i_6] [i_6] [i_6])))))));
        arr_21 [11] [i_6] = ((var_13 ? (arr_5 [i_6] [i_6]) : (((~(arr_14 [i_6]))))));
        var_32 = (((((((var_16 + (arr_0 [i_6] [i_6 - 1]))) >> ((6812350109281024637 ? 27 : 2259494024))))) ? (((((12397 ? var_8 : (arr_20 [i_6])))) ? ((max(var_13, 636829529))) : (((arr_1 [i_6 - 1] [i_6]) ? 4294967295 : var_17)))) : 8958284338217709426));
        var_33 = (arr_14 [i_6]);
    }
    var_34 = ((var_1 ? 16189 : (((-60 ? var_6 : ((min(0, 34))))))));
    #pragma endscop
}
