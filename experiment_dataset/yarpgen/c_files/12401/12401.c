/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = ((((var_1 ? (arr_3 [11] [i_1]) : var_13))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = var_4;
                                var_19 = (min(((-((var_8 ? var_15 : var_11)))), (((min(var_3, (arr_12 [i_4] [i_3] [i_2] [i_0] [i_0])))))));
                                var_20 = (((((~(arr_10 [i_2] [i_2] [i_2] [i_2])))) ? 0 : (((((~(arr_12 [i_0] [4] [i_2 + 1] [i_0] [i_4]))))))));
                                var_21 = ((((var_12 ? (((1 ? 17 : -1018840761))) : (min(2401656953, 242))))) ? (((arr_7 [11] [i_1] [i_1] [8]) ? (min(var_15, (arr_2 [0] [1]))) : (arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1]))) : var_12);
                            }
                        }
                    }
                    var_22 = (arr_1 [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((~((~(arr_19 [i_6])))))));
                            var_24 = var_3;
                            var_25 = var_9;
                            var_26 = ((~(arr_24 [i_5] [i_5] [17] [i_7 + 1] [4])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_27 |= (arr_23 [i_9]);
                                var_28 = (min(((var_3 ? var_7 : ((var_1 ? var_2 : var_1)))), (((var_12 ? var_12 : var_16)))));
                            }
                        }
                    }
                }
                var_29 = var_16;
            }
        }
    }
    var_30 |= var_8;
    #pragma endscop
}
