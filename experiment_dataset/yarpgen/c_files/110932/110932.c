/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = ((((max(((min(var_3, var_6))), (((arr_0 [i_0]) ? var_4 : var_6))))) ? -268435456 : (min(9334357848373664437, var_7))));
                            arr_10 [1] [1] [i_1] [i_2] [i_1] |= 3619739161;
                            var_12 -= -268435456;
                            var_13 -= (((((arr_3 [i_3] [i_1]) ? var_5 : (arr_2 [i_0] [i_1]))) * 597765720));
                        }
                    }
                }
                var_14 = var_4;
                arr_11 [i_0] [i_1] = ((0 ? -1397744301 : 4611686018427387903));
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
