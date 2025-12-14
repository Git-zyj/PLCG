/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 <= var_6);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_15 = -var_7;
                        var_16 = ((var_12 ? var_3 : var_8));
                        var_17 = -var_2;
                        var_18 = var_6;
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_19 = ((!(var_7 ^ var_5)));
                        var_20 = ((1 >> (-106 + 111)));
                        var_21 = var_12;
                        var_22 = var_2;
                        var_23 = (((var_8 + var_3) ? ((var_6 ? var_7 : var_7)) : var_11));
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_24 = var_9;
                        var_25 = min((!var_1), var_12);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_26 = ((-((max(var_10, var_7)))));
                                arr_20 [i_0 - 1] [1] [i_0 - 1] |= (((((-((127 ? var_11 : 121))))) ^ (12 - -1)));
                                var_27 = ((-var_10 == ((var_2 ? (~var_11) : var_12))));
                            }
                        }
                    }
                    var_28 = var_8;
                    var_29 = ((var_3 ? var_5 : var_5));
                }
            }
        }
    }
    #pragma endscop
}
