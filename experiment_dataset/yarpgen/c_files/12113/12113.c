/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (var_9 ? 894504114615237989 : (arr_2 [i_0 - 1]));
        var_10 = (arr_2 [i_0 - 3]);
        arr_4 [i_0] = arr_2 [i_0];

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_1 + 2] [i_1 + 3] [4] = -var_8;
            arr_9 [21] [i_0 - 2] = 9855945199072617436;
            var_11 = (var_4 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]));
            arr_10 [i_0 - 3] = ((arr_6 [i_0 - 3] [i_0 + 1]) - var_5);
        }
        var_12 *= (var_6 ^ 17552239959094313639);
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        arr_13 [i_2] [i_2 - 4] = 13772685475111220365;
        var_13 = (18446744073709551615 - (arr_12 [i_2 - 2] [i_2 - 3]));
    }
    var_14 = min(((var_4 ? 14059199614488150881 : ((var_6 >> (var_6 - 9434385587935654277))))), (((((var_2 ? var_7 : var_6))) ? (~12052516707423914260) : var_1)));
    #pragma endscop
}
