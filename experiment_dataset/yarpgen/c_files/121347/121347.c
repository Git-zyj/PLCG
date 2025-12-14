/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (((((255 ^ var_3) << ((((max(var_9, -26254))) - 39234)))) <= (~4183216699)));
                    var_19 = ((~(var_18 % var_7)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_21 [i_4] [i_4] = ((~((var_1 ? var_13 : 0))));
                                var_20 = ((((180 ? (((max(var_2, var_0)))) : ((var_16 ? var_7 : 1408896947))))) ? (((!(((1 ? 51372 : var_5)))))) : var_0);
                                var_21 = ((!(~33)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_27 [i_3] [1] [i_4] [i_9] = ((~((-(1408896947 & var_18)))));
                                var_22 = (min(var_22, ((((((-7 ? -108 : (-179852129 >= 4019891265)))) ? 102 : ((max((!1), ((var_5 ? 29704 : 79))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
