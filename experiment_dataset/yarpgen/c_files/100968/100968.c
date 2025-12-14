/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [0] [i_1] [i_1] = (arr_1 [i_0] [14]);
                    var_21 = (min((arr_8 [2] [i_2 + 1] [i_2] [i_2]), ((~(arr_7 [10] [i_2 + 1] [i_2 + 1])))));
                }
            }
        }
    }
    var_22 = (min(var_22, var_0));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            {
                var_23 = (((((arr_12 [i_3 - 3]) << (((arr_10 [5] [i_4 + 2]) + 3279340475643707735)))) >> (((arr_12 [i_3 - 3]) + 99))));
                arr_15 [i_3] [i_4] [i_4] = ((~(arr_0 [i_3 + 2])));
                var_24 = ((-((~(arr_0 [i_4 - 3])))));
            }
        }
    }
    #pragma endscop
}
