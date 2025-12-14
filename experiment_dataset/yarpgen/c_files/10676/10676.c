/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((var_15 ? (min(var_9, 47219)) : (((63 ? var_5 : -121))))) != var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (i_0 % 2 == 0) ? (((((((((var_9 + (arr_8 [i_3] [i_1] [i_0])))) ? var_13 : ((2 << (var_18 - 44)))))) ? ((((min((arr_4 [i_0 - 1]), (arr_1 [i_0 + 2])))) ? (!4139212157849782093) : ((var_0 ? -92 : var_17)))) : (((!((!(arr_2 [i_0 + 2]))))))))) : (((((((((var_9 - (arr_8 [i_3] [i_1] [i_0])))) ? var_13 : ((2 << (var_18 - 44)))))) ? ((((min((arr_4 [i_0 - 1]), (arr_1 [i_0 + 2])))) ? (!4139212157849782093) : ((var_0 ? -92 : var_17)))) : (((!((!(arr_2 [i_0 + 2])))))))));
                                var_21 = (max(14307531915859769523, ((199 ? 4139212157849782093 : 1723513713602742551))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = (((!(((254 ? (arr_15 [i_0] [i_0] [i_2] [i_5]) : (arr_2 [i_0 + 2])))))));
                                var_23 = ((2 ? -33 : -32));
                                var_24 = (min(var_24, (((2421369511 << (102 - 78))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
