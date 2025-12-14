/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = (min((min(var_6, var_5)), (min(var_9, var_4))));
                                arr_12 [i_0] [6] [i_2] [i_0] [i_3] [i_0] = ((((((~var_1) | -var_6))) ? ((max(var_0, var_9))) : ((((var_8 ? var_0 : var_10))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_12 |= ((((max((var_6 << var_9), ((var_8 ? var_10 : var_4))))) ? ((~((var_1 ? var_0 : var_8)))) : ((((var_0 % var_3) || ((min(var_0, var_6))))))));
                                var_13 = (max(var_13, ((((((!((max(var_1, var_5)))))) + ((min(var_10, var_0))))))));
                            }
                        }
                    }
                    var_14 ^= (min(((((min(var_4, var_9))) ? var_7 : (max(var_4, var_6)))), var_0));
                    var_15 |= ((((((!var_10) || ((max(var_1, var_2)))))) ^ (!var_8)));
                }
            }
        }
    }
    var_16 = var_0;

    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        var_17 = (max(var_17, var_5));
        var_18 = (max(((((var_8 ? var_0 : var_10)) ^ var_7)), (((!(var_5 > var_3))))));
        var_19 = (((!(var_0 < var_9))) ? (min(var_9, var_1)) : ((((var_5 ? var_2 : var_2)))));
    }
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        arr_24 [i_8] [i_8] = ((((((~var_0) && ((min(var_0, var_10)))))) % (~var_2)));
        var_20 *= (!var_8);
    }
    #pragma endscop
}
