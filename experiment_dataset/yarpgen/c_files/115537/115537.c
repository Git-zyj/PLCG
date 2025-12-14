/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((max(var_18, (var_18 ^ var_6)))) || (1447080836 | 1447080836)));
    var_20 = (max(20, 1447080821));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0 - 1] = (min(((((-1 == 4333584577676738369) < (((arr_3 [i_0] [i_1] [i_1 - 2]) * (arr_2 [i_1 - 1] [i_0] [i_0])))))), (max((var_6 <= -1), 21004))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_21 = (((((max(var_3, var_16)))) != (min(var_13, -210796799))));
                            var_22 = min(((max(var_8, (arr_9 [1] [1] [i_2] [i_3])))), (min(2170519353, 8)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
