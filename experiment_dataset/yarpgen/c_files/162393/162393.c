/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!1);

        for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] = ((~(arr_1 [i_0])));
            arr_6 [i_0] = 1;
            arr_7 [i_0] [i_0 - 1] = (((arr_0 [i_0 - 1] [i_1]) ? (arr_3 [i_0 - 1]) : (arr_4 [i_0 - 1] [i_1] [i_1 + 1])));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = 1;
            arr_11 [i_0] [i_0] = (!var_13);
            arr_12 [i_2] [4] = var_6;
            arr_13 [i_0] [i_0] = 1370292106;
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                arr_19 [i_4] [14] [i_0] [i_4] = var_13;
                arr_20 [i_0] [i_3 + 4] [i_0] [i_4] = ((3288847862970465057 << (1983441479293077128 - 1983441479293077071)));
            }
            arr_21 [i_0 + 2] [i_0] [i_3] = 1983441479293077128;
        }
        arr_22 [8] = -5516741840379193869;
        arr_23 [i_0] [20] = ((var_7 ? ((((arr_0 [i_0] [i_0]) >= (-127 - 1)))) : (arr_4 [i_0 + 1] [i_0 + 2] [i_0 - 1])));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_27 [i_5] [i_5 + 1] = ((var_11 ? (min(190, 1983441479293077128)) : ((((arr_14 [i_5 - 1] [i_5 - 1]) ? 1 : (arr_14 [i_5 + 2] [i_5 + 1]))))));
        arr_28 [i_5 - 1] = (arr_4 [i_5] [i_5] [15]);
    }
    var_14 = ((max(var_7, (max(4253413816, 5516741840379193869)))));
    var_15 = var_4;
    var_16 = ((1 || ((min((min(var_5, var_7)), var_11)))));
    #pragma endscop
}
