/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!903748347);
    var_11 = var_3;
    var_12 = 18128323274298026467;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = 65330;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, 65339));
                            arr_11 [i_3] [17] [i_2] [i_0] [i_0] [i_0] = ((((min(var_3, var_7))) ? (((-((min((arr_1 [i_0]), 198)))))) : (min(14393253363685522808, var_9))));
                            arr_12 [i_0] [15] [15] [i_2] [i_2] [12] = (arr_1 [i_0]);
                            var_15 |= (arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 3]);
                        }
                    }
                }
                var_16 = (((arr_7 [i_0] [i_0] [i_1] [i_1]) ? (((min(((var_0 && (arr_6 [i_0] [i_1] [i_1] [i_0]))), (arr_8 [i_1] [i_1] [i_0]))))) : ((-(arr_9 [i_0] [i_0] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
