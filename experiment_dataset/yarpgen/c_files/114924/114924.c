/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2 - 3] [i_4] = 15387;
                                var_20 = ((min((arr_11 [i_3 - 3] [i_2 - 3] [i_2] [i_1] [i_4] [i_1]), (((var_17 ? 30 : (arr_4 [i_0] [i_1] [i_2])))))) * ((min(1914563765, 65535))));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (arr_11 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_22 &= 8621;
    #pragma endscop
}
