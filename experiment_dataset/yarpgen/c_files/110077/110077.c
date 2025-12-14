/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(((var_1 ? 1108855259 : 839497868))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (min((min((arr_3 [i_0] [i_1] [i_1]), (arr_2 [i_1]))), ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
                arr_5 [i_0] [i_0] = 3455469420;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 &= (var_9 ? ((max((arr_6 [i_3] [i_2] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_0] [8])))) : (arr_6 [i_0] [i_1] [i_2] [i_3]));
                            var_14 = (~1502670680);
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_3, 3648130631));
    #pragma endscop
}
