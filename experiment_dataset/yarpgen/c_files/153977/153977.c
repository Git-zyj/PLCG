/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = -54;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 += 35665;
                            arr_12 [i_1] [i_1] [i_0] [i_1] [i_0] = ((~((0 ? 7624 : 179))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [i_4] = (min(42341, (max(((~(arr_3 [i_0] [i_0]))), 8))));
                            arr_20 [i_1] [i_4] [1] [i_1] = ((61269 ? ((255 ? ((min(65527, 4284))) : ((57888 ? var_2 : 1)))) : (1 < 113)));
                            var_15 = (max((arr_5 [i_5] [i_1] [i_0]), 1993));
                            var_16 = (max(var_16, (min((min(48557, 229)), ((min((arr_4 [i_4] [i_4] [i_5]), (arr_4 [i_4] [i_4] [i_4]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
