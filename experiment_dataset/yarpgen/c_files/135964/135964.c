/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_1, ((min(var_12, var_12)))));
    var_17 = ((249 ? var_4 : 742833105));
    var_18 = (-((min(var_11, var_0))));
    var_19 = ((~(min(var_2, var_14))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 += ((-(arr_1 [i_0 + 2] [i_0 - 2])));
                arr_4 [i_1] [i_1] = (((((var_4 ? (arr_3 [i_1] [i_1]) : (arr_1 [i_0] [4])))) ? (((-(arr_1 [i_0 - 2] [i_0 + 2])))) : (min(var_2, 13664355))));
            }
        }
    }
    #pragma endscop
}
