/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = min(((min(0, 7))), (min(var_0, 3692359834621763117)));
                    var_14 &= ((min(((min(var_5, var_11))), (((arr_5 [i_0] [i_1] [i_2]) ? 14754384239087788498 : var_9)))));
                }
            }
        }
    }
    var_15 *= ((((max((min(var_2, var_13)), var_5))) ? var_11 : ((3692359834621763117 ? (~1) : var_5))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_16 = 73;
                                arr_20 [i_3] [i_3] [i_5] [i_3] [i_3] = (arr_4 [i_3]);
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] = 0;
                            }
                        }
                    }
                    var_17 = 3496619451;
                }
            }
        }
    }
    var_18 -= ((var_13 ? var_8 : (!60)));
    #pragma endscop
}
