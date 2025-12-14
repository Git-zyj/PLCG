/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -6609208929326181612));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (min((((arr_7 [i_0] [i_1 - 1] [i_3] [i_3 - 3]) * (arr_7 [i_0] [i_1 - 1] [i_0] [i_3 - 1]))), ((min((arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 1]), (arr_6 [i_0 - 1] [i_0 + 2] [i_1 - 1]))))));
                            var_19 = (max(((var_14 % (arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 1]))), ((min((arr_7 [i_3 + 1] [i_2] [i_1 - 1] [i_0 - 1]), (arr_7 [i_0] [6] [4] [i_3 + 1]))))));
                        }
                    }
                }
                var_20 = max((min((arr_1 [i_0 + 1]), (arr_7 [i_0 + 3] [i_0] [i_1 - 1] [i_1 - 1]))), (min((arr_1 [i_0 + 2]), (arr_7 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 - 1]))));
            }
        }
    }
    #pragma endscop
}
