/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = 124;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [1] = ((arr_5 [1] [i_1]) == (max(1, (((arr_5 [14] [14]) * 1)))));
                arr_7 [i_0] = ((((!(arr_5 [i_0] [i_0 + 2])))) | ((min((!var_2), ((var_1 || (arr_2 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
