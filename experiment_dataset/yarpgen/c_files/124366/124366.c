/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((19 < (242 < 236)))) >= ((min(236, var_3)))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_17 *= ((((-(min((arr_0 [4]), (arr_1 [5]))))) * ((((((arr_0 [12]) ? (arr_0 [8]) : (arr_0 [6]))) / var_8)))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] = (min((((((34 ? var_1 : var_5))) ? -var_10 : (var_4 * var_14))), var_8));
            arr_6 [i_0] = (max(((-(arr_0 [i_0]))), (max(584186963, var_13))));
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_18 = (max(var_18, ((min(((+((-2029022294 ? (arr_8 [4] [i_0 - 1] [i_2]) : (arr_2 [i_2]))))), (((32 / (arr_4 [i_0])))))))));
            arr_10 [i_0] [16] |= arr_2 [i_2];
            var_19 *= (((min((((arr_9 [2] [2]) * 32)), (((arr_1 [i_0]) ? (arr_0 [12]) : var_13)))) * ((223 * (((var_11 >= (arr_1 [i_0]))))))));
        }
        var_20 *= (arr_4 [i_0]);
        var_21 = (max(var_21, ((((((max((arr_9 [i_0] [12]), 65527)))) ? 79 : (((!(!81)))))))));
        var_22 *= (max((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 2]), ((max((max(var_9, var_12)), var_4)))));
    }
    #pragma endscop
}
