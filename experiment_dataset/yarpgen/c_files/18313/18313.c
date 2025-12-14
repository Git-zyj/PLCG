/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 += (((min((((-(arr_3 [i_0] [i_1])))), ((2840614117 ? (arr_1 [11]) : 0)))) <= -303273234));
                    var_12 ^= 86;
                }
            }
        }
    }
    var_13 |= var_0;
    #pragma endscop
}
