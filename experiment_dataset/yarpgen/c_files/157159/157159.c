/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_10 = (((((-((351938424 << (1036035105278372689 - 1036035105278372688)))))) ? var_9 : (arr_2 [i_0 + 2] [i_0 + 2])));
        var_11 = (((((min(0, var_7))) ? (2147483647 / var_0) : (max(var_2, 1330282408)))) << (((arr_2 [i_0] [i_0]) - 3943155236)));
        var_12 = ((((255 ? (min(14, (-2147483647 - 1))) : 0)) | 0));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
        var_13 = -1330282409;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (min(((var_3 | ((var_7 + (arr_6 [i_1]))))), var_4));
        arr_9 [i_1] |= (arr_3 [i_1] [i_1]);
        arr_10 [i_1] [i_1] = (((-((~(arr_7 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [i_2] = (((arr_1 [i_2] [i_2]) % (~0)));
        arr_14 [i_2] = var_2;
    }
    var_14 = var_3;
    var_15 = 2568620864392874060;
    #pragma endscop
}
