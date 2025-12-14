/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (min((!-1), (((var_3 ? var_0 : 10891688462435344491)))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 = ((18446744073709551612 ? ((var_2 ? 351966326165130872 : var_5)) : ((10891688462435344511 ? 1 : 10891688462435344486))));
                        arr_12 [i_0] [i_3] [i_1 - 1] [8] = ((((1 - 7555055611274207111) ? (var_12 + 1) : (arr_8 [i_0] [i_2 - 4]))));
                        var_17 = ((18446744073709551587 ? (min(14895587520383379657, 16190641103633130484)) : (((1 ? 1 : 1)))));
                        var_18 = (((((1 ? var_6 : var_10)))) ? (max((((arr_1 [0]) * var_2)), ((0 ? var_2 : (arr_4 [i_2 - 2]))))) : ((((max(var_12, var_0))) ? 9538100801645866917 : -var_9)));
                    }
                    arr_13 [1] [i_2] = ((var_1 ? (((((9 * (arr_5 [i_1])))) ? (max(var_6, 1)) : (arr_10 [i_1 + 2] [i_2 - 3] [14] [i_0]))) : (~8433306998837287889)));
                    arr_14 [i_0] [i_0] [i_0] = ((min((var_5 && var_6), var_13)));
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
