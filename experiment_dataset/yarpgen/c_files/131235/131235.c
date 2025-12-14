/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [19] = (!64948);
        arr_3 [1] [i_0] = (arr_0 [i_0]);
        var_16 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((!(arr_1 [i_1] [i_1])));
        var_17 = ((max(((max((arr_4 [4] [i_1]), (arr_1 [i_1] [i_1])))), (min(1450581012, 0)))) ^ (arr_0 [15]));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    var_18 = max((max((((var_7 > (arr_10 [i_2] [i_2] [10])))), (max(2638992680541132856, (arr_4 [i_2] [i_2]))))), 13618);
                    var_19 = ((((~((var_8 ? 47 : var_13)))) + (!3624062673)));
                    var_20 = (max(var_15, (((93152780126625530 ? (arr_9 [i_2]) : var_0)))));

                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_1] [i_2] [i_1] = (((((((-1 < (arr_12 [i_1] [11] [i_1] [i_1] [i_2])))))) ? ((((max(22445, var_5))) ? (((max((arr_5 [i_2]), var_13)))) : (((arr_8 [i_2] [i_2] [4]) ? 96 : (arr_9 [i_2]))))) : ((((arr_0 [11]) ? (arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_4 - 1]) : (((var_9 ? (arr_5 [i_1]) : 5))))))));
                        var_21 = (arr_7 [i_2] [i_2]);
                        arr_15 [i_2] [i_2] = ((((((arr_12 [i_2] [i_3] [2] [i_2 + 1] [i_2]) - (arr_11 [i_2] [i_2] [i_2] [i_2])))) ? (arr_11 [i_2] [i_2 + 1] [i_3 + 2] [i_4 - 1]) : (!-33)));
                        var_22 = (arr_0 [i_2]);
                        var_23 = ((max(var_12, -5421534760730768247)));
                    }
                    arr_16 [i_2] [i_2] [i_2] = (((((arr_9 [i_2]) ? var_4 : 31408)) * (arr_4 [12] [i_2])));
                }
            }
        }
        var_24 = (((arr_7 [i_1] [i_1]) != (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_25 = (max(((!(arr_23 [i_5]))), (!var_10)));
                        arr_24 [i_1] [i_6] [4] [i_1] |= 3847753798989346272;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_26 = var_1;
        arr_29 [17] = ((((var_12 ? (((arr_26 [i_8] [13]) ? 18287625323378184357 : var_8)) : (arr_26 [0] [i_8]))) + ((((arr_25 [i_8]) * (arr_28 [i_8]))))));
    }
    var_27 = var_15;
    var_28 = (1073741824 % 3525939029);
    #pragma endscop
}
