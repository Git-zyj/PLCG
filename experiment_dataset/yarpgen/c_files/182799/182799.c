/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, var_3));
                    arr_7 [i_0] [i_0] [i_0] = (((((-113 ? -1307679141 : -943824324))) ? ((-1184303946 ? 123 : 24637)) : ((var_2 ? var_7 : var_8))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((var_8 ? var_10 : var_14)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_0] [i_1] [3] = -7995453801599039628;
                                arr_15 [1] [i_1] [i_1] [i_1] [i_1] [i_0] = -112;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = -var_1;
    #pragma endscop
}
