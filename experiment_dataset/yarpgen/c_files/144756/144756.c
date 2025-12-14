/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = -1259218849;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 *= ((-(!var_6)));
                                arr_15 [i_0] [i_2] [i_3] [15] [9] [i_0] = (((((max(var_2, 1685597115)) - (arr_1 [i_0] [14]))) ^ var_4));
                            }
                        }
                    }
                }
                var_13 = (max(var_13, var_1));
            }
        }
    }
    #pragma endscop
}
