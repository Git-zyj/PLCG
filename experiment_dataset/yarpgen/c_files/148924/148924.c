/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((min(((var_3 ? 10207 : ((var_4 ? var_8 : var_2)))), var_0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [9] [11] [9] = (min((var_4 & var_3), ((min(var_0, var_5)))));
                                var_18 ^= ((((max(var_5, var_5))) ? ((var_14 ? var_9 : var_0)) : var_10));
                                var_19 |= (var_14 ? (~var_14) : (((8664 | var_8) ? var_1 : var_7)));
                            }
                        }
                    }
                    arr_17 [2] [i_0] [2] = (((((var_6 & ((-2288793998749467581 ? var_15 : var_9))))) ? ((((max(var_11, var_14))) ? var_10 : (max(var_13, var_5)))) : ((((-var_11 <= (!101)))))));
                }
            }
        }
    }
    var_20 = ((((-(min(var_1, var_6)))) <= ((((min(var_15, var_14))) ? ((16777215 ? -2288793998749467581 : var_7)) : (((var_10 ? var_9 : var_11)))))));
    #pragma endscop
}
