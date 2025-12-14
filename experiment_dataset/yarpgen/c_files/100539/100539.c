/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2 + 2] = (((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_2 - 2]))) < ((((arr_3 [i_1] [i_2 - 4]) ? 1 : ((var_4 ? -122 : (arr_1 [i_2 - 1]))))))));
                    var_19 = (max(var_19, ((((((4640 ? var_7 : 60651))) ? -17064 : ((-var_18 ? (var_14 * 106) : (-1923555741 * var_12))))))));
                    arr_9 [i_0] = var_0;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_18 [i_3] [1] = ((124 ? (arr_12 [i_4]) : (7748 & 60893)));
                arr_19 [7] [i_4] [7] = (arr_12 [i_3]);
                var_20 = (((4652 ? var_2 : ((1 ? 1727459377 : (arr_6 [i_3] [i_3] [2]))))));
                arr_20 [i_3] [i_4] [i_3] |= ((((-28 ? 0 : ((((arr_4 [i_3] [i_3] [18]) ? (arr_0 [i_3] [i_4]) : 0))))) ^ (((((var_6 || (arr_16 [i_3]))))))));
                arr_21 [i_3] [i_3] = ((((((arr_7 [3] [3] [3] [3]) ? var_2 : var_13))) >= var_6));
            }
        }
    }
    var_21 ^= (max((((((29031 ? var_13 : -24860))) ? var_8 : (var_9 - var_3))), ((((var_16 ? -23306 : var_5))))));
    #pragma endscop
}
