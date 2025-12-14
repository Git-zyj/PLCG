/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max(var_4, 967891407)))));
    var_18 ^= (min(((min(255, 0))), 2558523477489050196));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = 10334;
                    var_20 = (2558523477489050196 | var_12);
                    arr_8 [i_0] [i_1] [i_0] = (!457608197);
                }
            }
        }
    }
    #pragma endscop
}
