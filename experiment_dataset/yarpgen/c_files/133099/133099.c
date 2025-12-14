/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((min(var_7, ((var_4 ? var_8 : var_8))))) ? (((((var_7 ? var_5 : var_13))) ? var_0 : var_12)) : ((-(var_2 < var_4))))))));
    var_16 = (max(var_13, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((-300775305 ? -5930734123580887585 : -300775305)))));
                arr_7 [i_0] = (min((((((arr_6 [i_0] [i_1] [i_0]) >= 1)) ? ((min(300775305, var_9))) : ((1244045060776656448 >> (-22700 + 22716))))), (min(var_10, (var_10 | var_1)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_4] = ((~((~(1460571146 >= var_12)))));
                                arr_17 [i_4] [i_4] [i_3] [i_3] = -300775313;
                                var_18 = var_2;
                            }
                        }
                    }
                }
                var_19 = (max(22722, 28450));
            }
        }
    }
    var_20 = (((var_7 >= (var_8 ^ var_0))));
    #pragma endscop
}
