/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = var_6;
        var_21 = ((var_16 ? 226 : ((var_1 << ((((max(0, var_2))) - 178))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (max(((112 ? 243 : 15997)), 65530))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_23 &= (min((((arr_6 [i_1 - 1] [i_1] [i_2] [i_2]) ? var_13 : (arr_6 [i_1 - 1] [2] [i_3] [i_1]))), ((160 ? (arr_6 [i_1 - 1] [i_1] [i_3] [i_2]) : 65515))));
                        var_24 = var_8;
                    }
                    arr_10 [i_0] [i_0] [10] = ((!var_3) ? ((((arr_7 [i_0] [i_1 - 1] [i_2]) >= (arr_7 [i_0] [i_1 - 1] [i_1 - 1])))) : ((max((arr_0 [i_0]), -15884))));
                    var_25 = ((((((arr_1 [i_0]) / (arr_1 [i_0])))) ? ((~((var_4 ? -3 : var_10)))) : ((7604 ? (arr_7 [i_0] [i_1 - 1] [i_1 - 1]) : var_8))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (arr_7 [6] [1] [6])));
        var_27 = (max(var_27, ((max((min(((max(-1, 65509))), (((arr_4 [i_4] [15] [i_4]) / var_11)))), (max((arr_0 [4]), (((((arr_2 [i_4]) + 2147483647)) << (((arr_5 [i_4]) - 223)))))))))));
        arr_13 [i_4] = (arr_6 [i_4] [i_4] [14] [4]);
        var_28 = (min(var_28, ((((arr_8 [i_4] [11] [i_4] [i_4]) ? (((((arr_1 [1]) & 43763)))) : -112)))));
        var_29 = (min(var_29, ((((max(-10582, 4167353644)) >> ((((((~(arr_5 [1])))) || (var_18 - 1)))))))));
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_30 = (((min(((max(-119, 119))), ((243 ? 0 : 45)))) << ((((max((max((arr_9 [i_5] [i_5]), var_3)), var_7))) - 63))));
        var_31 = (min(var_31, (((((((arr_3 [i_5] [i_5]) > (arr_3 [i_5] [i_5])))) | (((arr_3 [i_5] [i_5]) | (arr_3 [i_5] [i_5]))))))));
    }
    #pragma endscop
}
