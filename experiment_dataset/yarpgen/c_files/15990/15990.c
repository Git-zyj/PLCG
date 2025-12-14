/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_12 < (var_10 <= var_0)))));
    var_17 = var_12;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [12] [i_2] [i_0] [i_0 - 2] [i_0] = ((((((var_11 - var_9) >= var_15))) % -var_9));
                        arr_13 [i_0] [i_2] = ((-((((var_9 >> (var_9 - 1671800609))) * var_14))));
                        var_18 = var_9;
                        var_19 -= var_9;
                    }
                }
            }
        }
        var_20 += var_11;
        var_21 = ((var_3 == (((!var_8) ^ (64 >= 147)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 += ((-(var_1 * var_3)));
        var_23 &= var_1;
        var_24 = (var_10 <= var_1);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_25 = (var_12 + var_3);

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_26 = (var_6 != (var_1 % var_9));
                        var_27 &= (1 | 34038);
                    }
                    var_28 = (((999727898 & -7688) & var_14));
                }
            }
        }
    }
    #pragma endscop
}
