/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = 128;
                arr_5 [i_0] [i_1] = ((!(((~93) == (arr_0 [i_0 + 2])))));
                arr_6 [i_1] [i_1] = var_9;
            }
        }
    }
    var_12 = (max(((42 ? ((137 ? var_8 : 4294967295)) : (((max(255, var_4)))))), var_1));
    var_13 = var_2;
    #pragma endscop
}
