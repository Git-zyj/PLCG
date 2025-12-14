/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [8] [1] [i_1] = ((!((max((max(55056, 229631045498620322)), (arr_5 [i_1] [i_1] [i_0]))))));
                                var_19 = -13052;
                            }
                        }
                    }
                    var_20 = (arr_3 [13] [i_1] [i_2 + 3]);
                }
            }
        }
    }
    #pragma endscop
}
