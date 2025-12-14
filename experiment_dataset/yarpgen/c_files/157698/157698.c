/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (min((var_0 % var_5), (min(((1 ? var_11 : var_0)), (max(268435456, var_3))))));
    var_18 = (min(((12 ? 12 : 19201)), -var_4));
    var_19 *= var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_0] [7] = ((((-((-1980642705 ? var_5 : var_4)))) ^ ((13608 << ((((((7879 ? -1980642731 : var_5)) + 1980642749)) - 3))))));
                                var_20 *= (arr_4 [i_4]);
                            }
                        }
                    }
                    arr_14 [i_0] [3] [i_2] = (min(((((((var_0 ? 1 : -18782))) ? 203729946 : (max(var_3, 5319794463606383214))))), (min((arr_2 [5] [i_0]), ((6 ? 15593177006121911829 : 1))))));
                }
            }
        }
    }
    #pragma endscop
}
