/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [0] [i_0] [i_0] = var_2;
                            arr_11 [i_3] [1] [i_3] [7] [i_3] = (((max(23605, 2213819130362024694)) > (((max((!var_7), (var_0 != var_6)))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_1] = (max(((-(var_0 * var_3))), (((!(var_3 / var_1))))));
            }
        }
    }
    var_11 = var_0;
    #pragma endscop
}
