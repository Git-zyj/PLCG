/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -6911150528926771387;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = ((-((((arr_8 [i_1] [4] [i_0] [i_3] [i_0 - 1]) || -7063072635039534364)))));
                            arr_10 [i_1] [i_0] [i_1] [3] = (max(((((arr_7 [i_0 - 2] [i_2 + 1] [i_0] [4] [5] [0]) ? (arr_7 [i_0 + 3] [i_1] [i_0] [i_3] [i_3] [i_3]) : (arr_7 [i_0 + 1] [0] [i_0] [5] [4] [i_1])))), -3229151019747584335));
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_0] = (max((max((arr_8 [i_0 + 4] [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 3]), (min(var_1, var_8)))), (((max(var_4, (arr_3 [i_0]))) + (arr_0 [i_0 + 1])))));
            }
        }
    }
    var_14 = (((((min(var_0, 1)))) * var_9));
    var_15 = ((var_11 ? (min(-7063072635039534364, 7063072635039534345)) : var_10));
    #pragma endscop
}
