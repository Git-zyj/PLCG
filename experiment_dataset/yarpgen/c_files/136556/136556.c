/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = -6711306548051064792;
                            arr_10 [11] [i_2] [i_2 - 1] [i_3] = 11640;
                            arr_11 [i_0] [i_0] [6] [i_2] = 18790;
                            var_18 = -22319;
                        }
                    }
                }
                var_19 = 1;
                var_20 = 1838205949;
            }
        }
    }

    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_14 [i_4] = 312716223;
        var_21 = -1880363544418588001;
    }
    var_22 = var_15;
    #pragma endscop
}
