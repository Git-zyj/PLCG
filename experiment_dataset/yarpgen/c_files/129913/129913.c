/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_8 [i_0 - 1] [i_0] [i_2] [i_3] = var_12;
                        var_14 = (max(var_14, (((!((!(var_6 != var_10))))))));
                        arr_9 [i_0] [i_0] [i_2] [15] [15] [i_3] = (((((var_0 + var_9) && (var_1 ^ var_4))) ? ((((var_8 && var_8) ? (var_5 | var_12) : var_4))) : (((!var_10) ? var_3 : var_8))));
                        var_15 = var_0;
                    }
                }
            }
        }
        arr_10 [2] [i_0] |= (((((var_12 ? var_8 : ((var_10 ? var_6 : var_11))))) || (((var_13 >= var_1) >= ((var_7 ? var_8 : var_5))))));
    }
    var_16 = var_0;
    var_17 = ((((var_6 == ((var_3 ? var_3 : var_0)))) ? ((var_10 * (((var_13 ? var_12 : var_4))))) : var_13));
    #pragma endscop
}
