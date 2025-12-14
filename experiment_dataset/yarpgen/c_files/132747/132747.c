/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_2 ? ((var_8 ? (min(var_2, var_9)) : var_4)) : (((max(var_7, (min(var_6, var_7))))))));
    var_11 *= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 *= (min(((var_4 ? var_7 : var_6)), (((((var_0 << (var_2 - 3518297720)))) ? (var_5 <= var_9) : ((max(var_8, var_5)))))));
                    var_13 = 5832048463679459093;
                    arr_7 [17] [i_1] = (var_4 ? ((max((max(154831878, 1)), (((var_2 ? var_8 : var_5)))))) : (((1 ^ 2474103200) ? (((min(var_4, var_0)))) : (min(var_3, var_7)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [i_2] [i_3] [i_3] = ((max((min(-5347482213294968915, 1)), 1)));
                                var_14 = (min(var_14, ((((max(((var_1 ? var_6 : var_3)), var_6)) <= (((((max(var_9, var_0))) ? (min(var_0, var_2)) : (var_6 & var_1)))))))));
                            }
                        }
                    }
                    var_15 = var_0;
                }
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
