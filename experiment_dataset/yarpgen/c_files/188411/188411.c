/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = max((!var_11), (max(((max(var_7, var_3))), var_2)));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 1] = (arr_3 [i_0] [i_0]);
        arr_5 [22] = ((!((min(var_6, (arr_1 [i_0 + 1] [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_9 [6] &= 1;
        arr_10 [i_1] = ((((!(!var_11))) ? (arr_7 [i_1 + 1]) : (((((var_5 ? (arr_3 [1] [i_1]) : var_2))) ? 2237 : 1))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_15 = arr_12 [i_1] [i_1] [i_2];

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_19 [i_3] [i_3] [i_3] &= ((((max(63, 1))) ? ((1 ? (arr_14 [i_3] [i_2]) : (!var_1))) : (arr_8 [i_1 + 1])));
                var_16 ^= max(1, 7620955897744761934);
                var_17 = (((((16343973333179094626 ? (arr_11 [i_1 + 2] [i_2] [i_1]) : (arr_6 [i_1 + 1] [i_1 - 1])))) ? var_8 : (((arr_11 [i_1] [i_1 - 1] [i_1 - 1]) ? 1257250119 : (arr_11 [11] [11] [i_1 - 1])))));
            }
        }
    }
    var_18 = (min(var_18, var_9));
    var_19 = var_4;
    #pragma endscop
}
