/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((((~(~var_6))) + 2147483647)) << (((max(0, -var_9)) - 74))));
        var_11 = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_2)) & var_6);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (((((arr_2 [i_1] [i_1]) + 2147483647)) >> (((0 - 1293097576) - 3001869700))));
        var_12 ^= ((~(min(((((arr_1 [i_1]) == (arr_2 [i_1] [i_1])))), ((~(arr_1 [i_1])))))));

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_13 = -var_8;
            arr_9 [i_1] [i_1] [i_1] = ((!(((((((arr_0 [i_2 + 2]) % (arr_5 [3] [i_1])))) ? var_3 : (arr_7 [i_1] [1] [i_1]))))));
            arr_10 [i_1] = ((var_0 ? ((max(var_8, var_8))) : (arr_2 [i_2 - 2] [i_2 - 2])));
        }
    }
    var_14 = var_6;
    #pragma endscop
}
