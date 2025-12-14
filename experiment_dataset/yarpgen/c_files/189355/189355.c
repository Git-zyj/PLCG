/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_8 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                            var_14 ^= 0;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_18 [i_0 + 1] [i_1] [i_4] [i_5] [i_0] = (min((((((21 ? 331043573524599020 : 19))) ? (arr_15 [i_0] [3] [i_0]) : (arr_2 [1]))), (((var_9 ? (((var_4 ? 0 : var_5))) : (min(var_6, 345919328)))))));
                                arr_19 [i_0] [i_1] [14] [i_5] [i_0] [11] = ((~((235 ? 16 : 26))));
                                arr_20 [i_0 + 3] [i_1] [i_0] [i_1] [i_6] [14] = var_13;
                                var_15 = ((min(((min(var_5, 0))), ((var_9 ? 0 : var_1)))));
                                var_16 &= (((((((-120 ? (arr_6 [i_1] [i_6] [i_5]) : 19629))) ? (min(2765591723234707514, 10)) : -6636018722463256818))) ? ((((!(((var_3 ? var_7 : var_0))))))) : ((18115700500184952568 % ((var_0 + (arr_9 [i_0 - 2] [i_1] [15] [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 &= (((!11) ? 10 : (((-8 && var_12) ? (min(var_7, var_8)) : ((min(17206, 7)))))));
    var_18 -= ((2209161724278612880 ? (((var_10 ? var_5 : var_10))) : ((((((var_10 ? 576460752303423487 : var_9))) == ((10 ? var_1 : var_12)))))));
    var_19 = (((((~((var_11 ? 1 : var_1))))) ? var_12 : (((-116 + 2147483647) >> (4294967295 > 8935141660703064064)))));
    #pragma endscop
}
