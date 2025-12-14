/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 &= (((var_12 + 2147483647) << (((arr_0 [i_0] [i_0]) - 15978339922667440237))));
        arr_2 [i_0] [i_0] = var_12;
        arr_3 [i_0] = -var_6;
    }
    var_18 = (min(var_18, var_9));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_19 -= (arr_7 [i_2]);
                arr_10 [i_1] = ((-((37 ? (((arr_8 [i_1] [i_1 + 1] [i_1]) << (((arr_8 [i_1] [i_2] [i_2]) - 1457856545)))) : (arr_6 [i_2])))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_20 = (min(141, 2403522108893525712));
        var_21 = (var_15 ? ((~(arr_5 [i_3]))) : ((((var_0 ? var_15 : var_13)) - (arr_11 [1]))));
        arr_14 [i_3] = ((-(arr_12 [i_3])));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_22 = (min(((((arr_9 [i_4] [i_4] [i_4]) < var_6))), 5898777896503327797));
        arr_17 [i_4] = (min((((-(arr_6 [i_4])))), ((-(arr_7 [5])))));
        arr_18 [i_4] = ((-var_8 >> (var_11 + 1127660046)));
    }
    #pragma endscop
}
