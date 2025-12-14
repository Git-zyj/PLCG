/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~((var_4 ? var_14 : var_14))))) ? 0 : ((var_5 ? ((max(var_17, var_1))) : (~var_17)))));
    var_20 = max(((!(min(var_15, 0)))), (!1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [0] = arr_1 [i_1];
                arr_8 [i_0] [i_1] [i_1] = arr_5 [i_1] [i_1] [i_1];
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, ((max((((arr_4 [i_3] [i_2]) ? (arr_4 [i_3] [i_4]) : 1)), ((min(1, 1))))))));
                    arr_15 [i_3] [i_4] = arr_1 [i_4];
                }
            }
        }
    }
    #pragma endscop
}
