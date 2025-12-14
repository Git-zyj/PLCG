/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_9));
    var_13 |= (!var_3);
    var_14 = (((((var_10 <= 319211723) & ((min(var_0, 0))))) >= -112));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2 - 2] = ((~(~96)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [21] [i_1] [i_1] [i_3] [i_4] [i_4] [i_4] = ((((~(6083874920386968791 >> 1))) > (arr_4 [i_1 - 2])));
                                var_15 = ((-((-(((arr_12 [i_4] [i_2] [i_4]) & 41))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
