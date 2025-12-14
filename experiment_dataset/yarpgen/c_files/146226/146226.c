/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = var_11;
                            var_19 = (min((((!var_12) ? ((var_8 ? -345629663 : 345629663)) : var_0)), (max(var_4, ((16383 ? 0 : -345629664))))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_20 -= 345629662;
                                var_21 = ((((((arr_6 [i_4] [i_3] [i_3 - 1] [i_1 + 2]) ? var_1 : var_7))) ? (max(2533756055, 1)) : (((((arr_5 [i_0] [i_3 - 1] [i_2] [i_1 + 1]) < ((max(var_16, 0)))))))));
                                var_22 = ((!(((var_3 + ((min(-115, var_8))))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 18;i_5 += 1)
                            {
                                var_23 = (min(var_23, (!3290026837)));
                                var_24 = ((-345629664 ? (arr_3 [i_0] [i_5 - 1]) : 2005248854));
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_25 = (min(var_4, -1577638339));
                                var_26 = (max(var_26, -345629664));
                            }
                            var_27 = (((((((var_16 ? 1846703809 : var_3))) ? 11877 : (max(3513890885, var_9)))) < (~var_12)));
                        }
                    }
                }
            }
        }
    }
    var_28 = (max((((var_2 ? 781076416 : var_11))), (var_7 & var_0)));
    #pragma endscop
}
