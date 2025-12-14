/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1432955650 % var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, -92));
                            var_13 = ((-5069654354913878087 ? 64 : 64));
                            arr_9 [i_2] [i_3 - 2] [i_2] [i_0] = var_7;
                            arr_10 [i_0] [i_2] [i_0] = (((((arr_7 [i_3 - 1] [i_0] [i_1 - 3]) / (arr_7 [i_3 - 1] [i_0] [i_1 + 3]))) << (((arr_7 [i_3 + 1] [i_0] [i_1 + 2]) - 63))));
                            arr_11 [18] [i_0] = 5;
                        }
                    }
                }
                var_14 = var_2;
            }
        }
    }
    var_15 = -64;
    #pragma endscop
}
