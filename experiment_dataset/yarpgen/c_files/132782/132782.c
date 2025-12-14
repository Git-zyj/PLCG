/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = var_9;
                    var_12 ^= ((6771364121921308865 ? (max(var_2, (~var_10))) : (arr_4 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_4 - 1] [i_1] [i_2] [i_2] [i_4 - 2] [i_0] [i_3 + 1] = min(11116937520732771773, (((((var_6 ? 1418912190 : -1418912190)) / (arr_12 [i_0] [i_2] [i_3 - 2])))));
                                var_13 = (min(var_7, (arr_14 [i_3] [i_3] [i_3] [i_3 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (!249);
    var_15 = ((!(!-112)));
    #pragma endscop
}
