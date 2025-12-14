/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = (min(34656660, (((max(1991724514993183044, 34656660)) + 142))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (60 != 1272671895)));
                    var_20 = (arr_1 [i_1 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
