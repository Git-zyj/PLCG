/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (((((var_4 ? 38182 : 524287)) == var_3)));
                                arr_12 [i_0] [i_1] [i_1] [18] [20] [i_1] = arr_4 [i_0 - 1];
                            }
                        }
                    }
                    var_13 = (((((arr_5 [i_0 + 2] [i_0 + 2] [15]) + (arr_5 [i_0 - 1] [i_0 - 1] [i_0]))) != 524281));
                }
            }
        }
    }
    var_14 &= (18446744073709551615 | -288760338);
    #pragma endscop
}
