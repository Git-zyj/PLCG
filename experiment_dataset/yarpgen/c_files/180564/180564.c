/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_12 = ((var_0 - ((((3016677493 ? (arr_4 [i_0] [4]) : 0)) << (var_7 - 826912894982815788)))));
                    var_13 = (min(1338318580, 1278289803));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [5] [i_0] [i_4] [i_0] [i_0] [i_0] = 3591629540;
                                arr_19 [i_4] [i_4] [i_5] = 1338318581;
                            }
                        }
                    }
                    arr_20 [i_0 + 2] [19] [i_3] = (max((((~(arr_12 [i_3 - 1] [i_0] [i_0] [i_3 - 1])))), (-9223372036854775807 - 1)));
                }
                var_14 = (~137);
                var_15 = (min(((82 ? 3016677493 : 0)), (min(((var_10 ? var_4 : var_8)), var_6))));
            }
        }
    }
    var_16 = (!2956648701);
    var_17 = ((65535 ? var_6 : 65535));
    #pragma endscop
}
