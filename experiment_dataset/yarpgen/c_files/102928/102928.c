/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 += (((-var_9 & 7560648358682882636) | (((4294967295 ? (arr_8 [i_0] [i_0] [i_1] [i_2]) : (arr_1 [i_1] [i_2]))))));
                    var_19 = (arr_10 [i_1] [i_1]);
                    var_20 += (~(min(8051477038548049449, (max(var_10, (arr_5 [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
