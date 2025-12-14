/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((((-2147483647 - 1) ? -24674 : var_4))) ? (((24673 ? var_2 : var_1))) : ((var_6 ? var_7 : 24673))))) ? (((((-24667 ? 63315 : 1765870011))) ? -1 : -var_8)) : (((((var_3 ? var_10 : var_3))) ? ((var_3 ? var_8 : 24676)) : (!var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 += (((((-1089494074 ? -118 : -1485105065))) ? -2529097284 : (((~((~(arr_3 [4] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = ((((((!var_2) ? var_7 : ((114 ? (arr_13 [i_0] [i_0] [i_2 + 1] [i_3 - 1] [i_0]) : -6897231589040161505))))) ? ((-(((arr_9 [i_0] [i_0]) ? (arr_10 [i_0] [i_0 + 1] [i_0]) : (arr_1 [i_0]))))) : ((((((arr_4 [i_2]) ? -1716849385 : var_4))) ? -24673 : ((var_1 ? var_1 : var_9))))));
                                arr_15 [i_0 - 1] [i_1] [i_0] [12] [i_4] = (((arr_14 [i_0] [1] [i_2] [9] [10]) ? (--59) : ((~((var_9 ? 1 : var_0))))));
                                arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] = ((((((~(arr_8 [i_0]))))) ? (((~((-2147483630 ? var_6 : var_3))))) : ((((((arr_5 [i_0] [i_1 + 1]) ? (arr_7 [i_0]) : 24673))) ? (~var_0) : ((var_4 ? 8212790729015458957 : var_8))))));
                                var_14 -= (((((-23866 ? -57 : 119683648))) ? (((23909 ? 4294967280 : 33))) : (((((var_3 ? var_9 : -711284562))) ? ((-59 ? var_1 : 4294967282)) : -213))));
                                var_15 = (max(var_15, (((+((+((2355368578 ? (arr_7 [i_4]) : (arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]))))))))));
                            }
                        }
                    }
                }
                var_16 &= (((((-var_7 ? -var_6 : ((~(arr_6 [12] [12] [i_1] [i_1])))))) ? -4294967292 : (arr_1 [0])));
            }
        }
    }
    #pragma endscop
}
