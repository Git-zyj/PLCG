/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (var_16 + var_6)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 ^= (arr_1 [i_0 + 1] [i_0]);
        var_20 = (max(var_20, ((((((arr_1 [i_0 - 1] [i_0 - 1]) ^ (arr_1 [i_0 + 1] [i_0 + 2]))) << ((((arr_1 [i_0 - 1] [i_0]) / (arr_1 [i_0 - 1] [i_0 - 1])))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_21 = 655590082723075541;

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_22 = (arr_7 [i_0]);
                var_23 = (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]);
                var_24 = (((((((arr_5 [i_2]) + 2147483647)) << (((arr_6 [i_1]) - 19)))) & (arr_1 [i_2] [i_0])));
                var_25 = (arr_0 [14]);
                var_26 ^= (((arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 1]) / (arr_6 [i_0 + 3])));
            }
            var_27 = (arr_4 [i_0 + 2] [i_1] [i_1 - 1] [i_1 - 1]);
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            var_28 = (arr_8 [i_0] [i_0] [i_0]);
            arr_10 [i_0] = (min((arr_7 [i_0]), (((((arr_4 [i_0] [i_3] [i_0] [i_0]) ^ (arr_5 [1]))) >> (((((arr_5 [i_3]) ^ (arr_0 [i_0 + 1]))) + 22908))))));
            var_29 = (((arr_5 [i_0 + 3]) | (((arr_5 [i_0 + 2]) | (arr_5 [i_0 + 1])))));
            arr_11 [i_0 + 1] [i_3] [i_0] = (((((max((arr_9 [i_0] [i_3 - 1] [i_3]), (arr_8 [i_0 - 1] [i_3 - 3] [i_3 + 1])))) << (((arr_1 [i_0 + 3] [i_0 + 3]) + 9064926536539369448)))));
        }
        var_30 = ((((arr_1 [i_0] [i_0]) & (arr_1 [i_0 + 2] [i_0 - 1]))));
    }
    #pragma endscop
}
