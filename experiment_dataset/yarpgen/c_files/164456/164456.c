/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(var_19, (!32767)));
        arr_3 [i_0] = (arr_2 [i_0 + 1] [i_0 + 1]);
        var_20 &= ((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : -1318045124))) ? (arr_2 [i_0 - 1] [i_0 - 3]) : (arr_1 [i_0] [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_4 [i_1]) || (arr_5 [i_1])));
        arr_8 [i_1] [i_1] = ((arr_4 [i_1]) * (((((var_12 ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? (1318045128 || var_18) : ((min((arr_6 [i_1]), var_18))))));
        var_21 = ((((min((arr_6 [i_1]), (arr_6 [i_1])))) ? (((min(((((-2147483647 - 1) && (arr_6 [i_1])))), (min((arr_5 [i_1]), var_7)))))) : (((((arr_4 [i_1]) || var_18)) ? (((min((arr_6 [i_1]), (arr_6 [i_1]))))) : (min(var_10, (arr_4 [i_1])))))));
    }
    var_22 = -var_3;
    var_23 = ((-(((min(var_3, 1318045139)) + var_17))));
    var_24 = (((-(min(var_10, 2670449193)))));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_11 [i_2] = ((+((((min((arr_9 [i_2]), (arr_9 [i_2])))) ? (((arr_9 [i_2]) ? 0 : (arr_10 [i_2]))) : (61330 <= -2147483643)))));
        arr_12 [i_2] = (((min(var_17, -2131138270)) / ((67108864 ? (arr_9 [i_2]) : (arr_9 [i_2])))));
    }
    #pragma endscop
}
