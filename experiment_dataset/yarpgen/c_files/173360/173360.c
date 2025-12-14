/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_13, (max(var_13, var_1))))) ? var_9 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_9 [9] [13] [i_1] [i_2] = ((-(((arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_3 - 1]) ? (arr_8 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1] [i_3 - 4]) : -522992386))));
                            arr_10 [i_1] [i_2] [i_3] = (((~((var_1 ? var_7 : var_5)))) - (var_13 > var_2));
                            var_16 = ((((max((-9223372036854775807 - 1), (!126)))) ? (((min(11, var_5)) + (var_14 == var_9))) : (-32767 - 1)));
                        }
                    }
                }
                arr_11 [i_1] = (min(((max(var_10, var_8))), (min((arr_6 [i_0 + 2] [i_1] [i_0 + 1] [i_0] [i_0] [i_1]), 0))));
            }
        }
    }
    #pragma endscop
}
