/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = ((arr_0 [i_0 + 2]) * ((3 / (arr_0 [i_0 + 3]))));
        arr_3 [i_0] = ((((40207 ? (-2147483647 - 1) : 0)) | ((min((arr_0 [i_0 + 2]), -10)))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_15 = (min((arr_7 [i_1] [i_1]), (min((arr_0 [2]), (arr_2 [3])))));
        var_16 = 22566;
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_17 = (min(((1 ? (arr_8 [i_2 - 2]) : (0 + 0))), ((((arr_1 [i_2 - 2]) * var_8)))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 *= ((-(min(274877906943, (arr_2 [i_2 - 1])))));
            var_19 ^= (min(((1 ? 2572320759260951289 : 731894055)), (((~(arr_5 [i_3] [i_3]))))));
        }
        var_20 *= 4120119258;
        arr_13 [i_2] = (min(((min((~2914999286), (((var_11 << (var_5 - 2705186781054774610))))))), (min((arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (arr_12 [i_2 - 1] [i_2 - 2] [i_2])))));
    }
    #pragma endscop
}
