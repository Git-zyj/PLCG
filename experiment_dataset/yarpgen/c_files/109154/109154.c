/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 14404;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = 0;
                    var_14 |= (((16853574923303944283 + 255) != (arr_7 [i_0] [1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3 - 1] [8] [8] [i_1] [i_0] = ((-(arr_15 [i_3] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1])));
                                arr_17 [i_4] [i_0] [i_2] [7] [i_4 - 2] = (((((-(arr_12 [i_0] [i_0] [i_4 + 1] [i_0] [i_2])))) ? ((max((arr_12 [i_0] [i_1] [i_4 + 2] [i_0] [i_4 + 1]), (arr_12 [i_0] [15] [i_4 - 1] [i_0] [i_4])))) : (!127)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_10;
    var_16 = var_2;
    #pragma endscop
}
