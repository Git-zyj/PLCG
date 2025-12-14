/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!1016);
        arr_3 [i_0] [i_0] = (max(17645361261727753426, ((((max(112, 2712)))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 = 64532;
        var_21 ^= ((~((0 ? ((((!(arr_5 [i_1]))))) : ((-2712 ? -2008793374317446907 : (arr_0 [i_1])))))));
        var_22 = (max(var_22, ((((var_16 / var_4) * (max((min(var_14, var_15)), (var_17 * var_12))))))));
        arr_8 [i_1] &= ((((min(6144, var_11)))) ? (((((504403158265495552 ? 1 : var_12)) | (arr_7 [i_1])))) : ((((min(122880, 2712))) ? (!10614) : ((3287609244 ? var_13 : var_13)))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 = ((arr_9 [i_2] [i_2]) < -2712);
        var_24 = (288230376151710720 ? (!var_6) : (arr_4 [i_2] [i_2]));
        var_25 = (max((var_15 != 288230376151710735), 1016));
        arr_11 [i_2] = ((((((arr_10 [i_2]) < (arr_10 [i_2])))) >> (((~var_12) + 168))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (!1004)));
        var_27 ^= ((((min(-924764366782319475, var_13))) ? (575982296981894112 / 247) : var_11));
        arr_14 [14] = (((var_1 && 16223) ? (((arr_9 [8] [i_3]) ? (var_16 || var_18) : (max((arr_5 [i_3]), 1006632960)))) : ((((939524096 > (arr_6 [i_3])))))));
    }
    var_28 = (max(var_28, ((((var_5 ? ((14705 >> (var_14 - 3746880354)) : ((288230376151710720 ? 1 : 2327)))))))));
    var_29 = ((4045190975 ? ((16320 ? var_14 : var_1)) : ((((((1 ? 128 : 121))) ? (~576460751766552576) : (((max(var_3, -1502)))))))));
    var_30 |= var_16;
    #pragma endscop
}
