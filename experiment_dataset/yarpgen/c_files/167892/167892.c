/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = ((-((var_9 ? (949159815 && 112) : 4077781881))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = 59945;
                    arr_9 [i_0] [i_1] [i_0] = max(((min(((!(arr_0 [i_1]))), (!var_18)))), (max((!var_16), (((arr_5 [i_2] [1] [i_2] [i_0]) ? var_5 : 17637324794617461056)))));
                }
            }
        }
    }
    #pragma endscop
}
