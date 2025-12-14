/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((2 ? var_4 : (max(var_12, 1040187392)))), (((((max(13, -3784179646989001778))) ? var_11 : ((var_4 ? var_2 : var_7)))))));
    var_15 = (max(var_12, var_13));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [10] [i_2] [14] = var_0;
                                var_16 += 1435280410;
                                var_17 = (max(((-(((arr_9 [7]) / (arr_2 [1] [1]))))), (((((arr_2 [i_2 + 2] [i_4 - 1]) / (arr_7 [i_2] [i_1 - 1] [1] [i_2])))))));
                                var_18 = (arr_6 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2]);
                                arr_13 [i_0] [i_0] [i_1 - 1] [i_2] = ((max(16754371825069874256, 20769)));
                            }
                        }
                    }
                }
                var_19 ^= 0;
            }
        }
    }
    #pragma endscop
}
