/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = 0;
                    var_19 += (((((((max(var_1, (arr_5 [i_2] [i_1 - 2] [6] [6])))) ? (arr_0 [14]) : (arr_0 [i_0])))) ? ((var_17 ? 259417344 : (arr_4 [i_1 - 1] [i_1 - 3] [i_1 - 4]))) : ((((-(arr_4 [i_0] [5] [9])))))));
                }
            }
        }
    }
    var_20 = (~var_13);
    #pragma endscop
}
