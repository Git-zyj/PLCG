/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((min(((max(14364, var_14))), ((var_1 ? var_2 : var_17))))), var_5));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 += (((min((arr_0 [i_0 + 1]), (!0))) > (max((~var_2), (arr_0 [i_0])))));
        arr_2 [i_0] = (max((arr_1 [i_0 - 2]), (((((var_9 ? (arr_1 [i_0]) : (arr_1 [i_0 - 1]))) > ((var_12 ? 1 : 1)))))));
        var_20 = (max((((-((~(arr_1 [i_0])))))), (max(((max(21, 1))), (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_8 [i_0 - 1] [i_2] [i_2] |= (-((1 ? (arr_4 [i_0] [i_0] [i_0 - 1]) : (arr_1 [i_0 + 1]))));
                var_21 = max((arr_3 [i_2]), ((max((arr_4 [i_0 + 1] [i_1] [i_0 + 1]), (arr_4 [i_0 - 2] [i_1] [i_0 - 2])))));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_3] [0] [i_0] [i_0] = (arr_4 [i_3] [i_3] [i_3]);
                var_22 = (min(var_22, 181));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_23 = (((arr_10 [i_0 - 1] [1] [4] [i_4]) ? ((max(-54, var_10))) : (((arr_10 [i_0 - 1] [i_0 - 1] [i_4] [i_0]) * (arr_5 [i_0] [i_0 - 1])))));
                var_24 = (min((((arr_11 [i_0] [i_0 - 1]) * (arr_13 [i_0 - 1] [i_0 - 1]))), (arr_13 [i_0 + 1] [i_1])));
                var_25 = (max(var_25, (((-((max(1, (arr_10 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2])))))))));
                var_26 = (arr_14 [i_0 - 2] [i_1]);
            }
            var_27 = (arr_1 [i_0 - 1]);
        }
    }
    var_28 ^= 1;
    #pragma endscop
}
