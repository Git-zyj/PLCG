/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] [i_2] [i_3] = (min(2631724888, 18958));
                            arr_12 [i_0] [i_1] [5] [i_2] = var_7;
                        }
                    }
                }
                var_18 = (max(var_14, (((!(arr_10 [i_1] [i_0] [i_1] [i_0] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                var_19 = (arr_16 [i_4]);
                var_20 -= (arr_16 [i_5]);
            }
        }
    }
    #pragma endscop
}
