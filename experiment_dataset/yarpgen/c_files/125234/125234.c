/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_1 [18] [i_0]);
                arr_8 [i_1] = -240;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_11 [i_1] [i_1 - 2] [i_2] [i_1 - 1] = (arr_9 [i_0] [i_1] [i_1 - 2] [i_1 - 2]);
                    arr_12 [i_0] [i_0] [i_0] = -240;
                    arr_13 [i_0] [0] [17] = (arr_3 [4] [4]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_16 [15] [i_0] [i_0] [i_3] = (arr_2 [i_1 - 1] [i_1 + 2]);
                    arr_17 [i_0] [i_1] = ((-(arr_2 [i_1 + 2] [i_1 - 4])));
                    arr_18 [i_0] [i_1] [i_3] [i_3] = (!32767);
                    arr_19 [i_0] [i_1] = 138638758;
                }
            }
        }
    }
    var_18 = (min(var_6, -12193));
    var_19 = 23305;
    var_20 = var_17;
    #pragma endscop
}
