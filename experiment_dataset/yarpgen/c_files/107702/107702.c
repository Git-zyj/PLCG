/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 30291;
    var_14 = (((((~(var_1 & var_11)))) ? (((!((min(var_7, var_11)))))) : (((min(var_9, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (((((-((min(var_5, var_8)))))) ? (max(((max(var_8, 1))), ((var_2 ? var_6 : var_10)))) : 1));
                    arr_10 [i_0] [12] [i_0] [i_2] = (min(12122988663155436497, -1));
                }
            }
        }
    }
    #pragma endscop
}
