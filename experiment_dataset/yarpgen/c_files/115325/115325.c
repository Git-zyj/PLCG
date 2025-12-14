/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((arr_4 [i_0]) + 2147483647)) << (((((2993862742 && 6) ? (9 || 107) : 30332)) - 1)))))));
                var_20 = (((((arr_4 [i_0 + 1]) + 2147483647)) << (((arr_1 [i_0 + 1]) - 11832458018494028088))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_0] = max(-115, ((0 ? 159 : ((((-2147483647 - 1) && 13028))))));
                            arr_12 [i_0] [i_2] [i_2] [i_3] = -2887535675932750533;
                            arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [3] = ((2993862742 || (((arr_5 [i_0 + 2]) || 6330))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    var_21 = (max((max((3088745819 || 235), (min((arr_8 [i_4] [6] [i_4]), -3063058359116874191)))), (min(-2887535675932750533, ((min(61209, 2993862738)))))));
                    var_22 = -32751;
                }
            }
        }
    }
    #pragma endscop
}
