/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = (((((min(var_12, var_10))) + -var_13)));
    var_22 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_23 = -8192;
                arr_4 [i_1] = ((((((max((arr_3 [i_0] [i_1]), var_2)) ^ 32767))) ? ((-(!var_5))) : ((((arr_2 [i_0]) <= (arr_2 [3]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] = (((arr_5 [0] [i_1] [i_2] [i_4]) || (arr_2 [i_0])));
                                arr_13 [i_0] [i_1] [12] [i_1] [i_3] [i_1] = var_13;
                            }
                        }
                    }
                }
                arr_14 [i_1] = var_19;
            }
        }
    }
    #pragma endscop
}
