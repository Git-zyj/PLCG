/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (max(((max((min(var_6, (arr_0 [i_0 - 1]))), (min((arr_0 [i_0]), 57820))))), (max((arr_2 [i_0 - 2]), (arr_2 [i_0 - 2])))))));
        var_19 = (-(~var_14));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 = (var_12 < var_9);
        var_21 = (arr_5 [13]);
        arr_6 [i_1] = 57820;
        var_22 = (var_15 + -var_11);
        arr_7 [i_1] = var_16;
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 |= ((((min(var_3, (arr_9 [i_2 - 1])))) ? ((((min(-90, 3252810092520837070))) ? (arr_9 [i_2 - 2]) : (max(var_8, 23165134)))) : (arr_1 [i_2])));
        var_24 -= (arr_8 [i_2]);
    }
    var_25 = (max(4271802153, -122));

    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_26 = (max(124, (((-2147483647 - 1) ? (arr_5 [i_3]) : 1391883673))));

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_27 = (min(var_27, (min((((arr_4 [i_4 - 1]) ? var_1 : (arr_4 [i_4 - 1]))), ((((((~var_8) + 2147483647)) >> ((4271802161 ? var_0 : (-9223372036854775807 - 1))))))))));
            var_28 -= (arr_5 [i_3]);
            var_29 = (((max(23165138, (min(1391883673, 23165156))))) ? (((arr_11 [i_4] [3]) - (4294967281 + -3252810092520837071))) : (arr_2 [i_3]));
        }
        arr_15 [i_3] &= (max((38083 == var_5), (arr_9 [i_3])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = min((max(4271802159, 3927916871)), (arr_9 [i_5]));
        var_30 &= (23165155 * 34);
        var_31 = 3927916871;
    }
    #pragma endscop
}
