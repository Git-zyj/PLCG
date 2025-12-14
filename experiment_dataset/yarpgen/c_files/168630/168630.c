/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((max((max(var_0, var_6)), (var_2 <= var_5))))) * (min(((var_11 ? var_10 : var_4)), var_4))));
    var_13 = ((((((((var_9 + 2147483647) >> (var_0 - 93))) - (min(var_4, var_9))))) ? var_11 : ((max(var_11, var_10)))));
    var_14 += (min(var_11, ((var_4 ? var_5 : var_9))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((max((var_0 < var_3), ((var_9 * (var_4 * var_5))))))));
                    arr_7 [i_0] [i_0] [i_2 + 3] [i_0] = (((var_6 <= var_2) / (var_5 >> var_11)));
                    var_16 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 += 1361438169;
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
