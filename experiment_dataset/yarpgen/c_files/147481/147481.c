/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((-(min((max(1294512804173056275, (arr_6 [9] [i_1] [i_1 - 1] [7]))), 42668))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_1 - 1] = 1294512804173056275;
                                var_15 = (((((~15779091397824880757) ? (((min(0, 0)))) : (min(var_2, var_10))))) ? (!45203) : (((min(var_6, (arr_7 [i_0] [i_1 - 1] [i_0] [i_0]))) & -255)));
                                arr_17 [i_4] [0] [i_0] [11] [i_4] = (max((((+((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_3)))))), ((min(var_10, var_13)))));
                                arr_18 [i_4] [i_4] [i_0] [i_1] [i_0] [i_0] [0] = (arr_14 [13] [13] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 *= (((((var_13 ? (~2) : ((1294512804173056275 ? var_0 : 254))))) ? (~var_1) : ((min(((min(var_9, 1))), (max(var_7, var_12)))))));
    var_17 = (((((max(131, var_8))) ? ((var_5 ? var_13 : var_3)) : var_12)));
    #pragma endscop
}
