/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_1]);
                arr_6 [1] [i_1] [i_1] = var_11;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_2] [i_1] [i_3] [0] = -1619913225;
                                var_17 = (((15388 || 1495324246) ? ((((1599773823 ? (arr_4 [i_1] [i_1] [i_4]) : var_0)) & (~var_14))) : 0));
                                var_18 += 962323824;
                                var_19 = (max(((max(((min((arr_3 [i_0] [i_0]), (arr_1 [8])))), (max(3473526193754642218, -198431485))))), (min(var_2, var_9))));
                            }
                        }
                    }
                }
                var_20 ^= ((~((var_2 ? var_2 : 5540001581206343367))));
                arr_16 [i_0] = var_11;
            }
        }
    }
    var_21 = ((-(((var_14 ? var_5 : var_15)))));
    var_22 ^= 9;
    var_23 = ((var_2 ? (max(var_13, -2695193472)) : var_4));
    #pragma endscop
}
