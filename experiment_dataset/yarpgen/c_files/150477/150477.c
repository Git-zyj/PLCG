/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 16816;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_15 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = (((arr_13 [i_0 + 1] [i_0 + 1] [i_0] [1] [i_0 - 1] [i_1] [i_2 + 2]) && 1908237605));
                            var_19 = var_15;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_22 [i_1] [i_0] = -var_8;
                        var_20 = 1;
                        arr_23 [i_0] [i_1] [i_1] = (133 ? 10500287652367198635 : 7684914375741296069);
                        arr_24 [i_0] = 1;
                        var_21 = var_6;
                    }
                }
            }
        }
        var_22 *= var_17;
        var_23 = (min(var_23, -10570));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_29 [i_7] = arr_10 [i_7] [i_7] [i_7];
        var_24 ^= ((((((min(10500287652367198653, -25236))) || ((max(242, 10596))))) ? ((((max(var_4, (arr_19 [i_7] [8] [12] [i_7])))) ? (arr_9 [i_7] [1] [1] [i_7]) : -3157166689040155296)) : ((((min(var_5, (arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_33 [i_8] [i_8] = (((((568849928096047132 ? 4671 : 251))) & (((-8813078014667992530 ? 1417869921605605805 : var_6)))));
        arr_34 [11] = ((var_8 ? (min((min((arr_32 [i_8]), 9635743633527522439)), var_0)) : ((min(var_7, var_9)))));
        var_25 = ((min((arr_31 [1] [i_8]), 1)));
    }
    var_26 = var_9;
    var_27 = -1101;
    #pragma endscop
}
