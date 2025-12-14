/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_14;
    var_19 ^= var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = (i_3 % 2 == 0) ? (((((((var_11 ? 30917 : (35 & var_0))) + 2147483647)) << (((((~(arr_11 [8] [i_3])))) - 1113070074))))) : (((((((var_11 ? 30917 : (35 & var_0))) + 2147483647)) << (((((((~(arr_11 [8] [i_3])))) - 1113070074)) - 1407833816)))));
                            var_21 = (max(var_21, (((var_12 ? ((((arr_2 [i_3 - 4] [i_2 - 2]) ? var_17 : (12738 + 32767)))) : (arr_0 [i_3 + 1]))))));
                        }
                    }
                }
                var_22 = (max((arr_0 [i_0]), (arr_5 [i_0 - 2] [i_0])));
                arr_13 [i_1] = 1;
                var_23 = (max(var_23, var_11));
            }
        }
    }
    #pragma endscop
}
