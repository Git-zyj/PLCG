/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(3775509412, var_8)), 3775509426));
    var_20 ^= (((((-(max(-27, var_13))))) ? ((-(!-32170))) : ((((58929 ? 0 : var_5)) % ((1 ? 10742 : var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_21 = -1;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_22 -= var_7;
                            var_23 ^= (min(var_1, 2253365156));
                            var_24 = (arr_8 [i_3] [i_1 - 2] [6] [i_1 - 2]);
                            var_25 = var_3;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
