/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (min(11061, -83));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [20] = -11062;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = ((-83 == ((min((arr_4 [i_0 - 1]), 1)))));
                                var_16 = (max((max((((-1 ? -1814686989 : var_4))), (max(11770118667052122049, 39)))), 10734193112821693072));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
