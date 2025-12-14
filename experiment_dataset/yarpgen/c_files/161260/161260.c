/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((((511826295761168847 ? ((var_9 ? var_1 : -4911407548192239843)) : (var_10 || 1780572731))) / var_10));
        var_12 = (((min((var_8 - 1737789808842246117), (((var_8 ? 1780572708 : 1))))) + 1));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((((0 ? 1780572731 : 1780572719)))) <= (arr_5 [i_1 - 1])));
        arr_7 [i_1] = ((+(((arr_5 [i_1 + 1]) ? 8309290626766527694 : 1))));
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2 - 1] = -15937;
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_13 = (arr_4 [i_4]);

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_14 = (((((19 ? 1 : 40184))) ? (((arr_4 [i_2 - 1]) ? (arr_4 [i_2 + 3]) : -957657890)) : (((((var_9 ? 8309290626766527688 : var_11)))))));
                            var_15 = ((var_6 << (min(1780572728, (arr_15 [i_3 + 2] [i_3] [i_4])))));
                            arr_22 [i_6] [i_5] [i_4] [7] [i_2] = (((((~((min(var_2, var_3)))))) ? (arr_17 [i_6] [i_6] [i_5] [i_4] [i_3] [i_2]) : (((arr_20 [14] [i_3] [i_4] [0] [i_5] [i_5]) ? 4247478267 : (((min((arr_10 [i_6]), var_2))))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] [i_7] = var_8;
        arr_26 [i_7 + 2] = ((-1 ? (((0 | 957657889) ? (!3690788010) : ((var_7 ? -11246 : 18579)))) : (var_11 << 0)));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            arr_30 [i_7] [i_7] [i_8] = (((-38 < 1780572727) ? (arr_15 [i_7] [i_8] [i_7]) : var_6));
            var_16 = (((arr_27 [i_7 - 2] [i_8]) && var_8));
            arr_31 [i_7] = (-101 >= 18579);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_37 [i_10] [i_9] [i_9] [11] [i_7] [i_7] = (((arr_4 [i_7 - 1]) ? (arr_10 [i_7]) : (arr_15 [i_7] [4] [4])));
                        arr_38 [i_7] [i_7] [i_7] [4] = ((-11235 ? 6482 : (arr_23 [i_7])));
                    }
                }
            }
        }
    }
    var_17 = (((((var_9 ? ((2739352075 ? 0 : -43)) : 63))) ? (-75 && var_6) : (((((1780572728 ? 35933 : 5824088379253189442))) ? 1568997596841282473 : (~47)))));
    #pragma endscop
}
