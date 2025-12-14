/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((!(var_11 != 10639004198367719042))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 ^= (((((-(arr_1 [i_1 - 1]))))) && ((((3348650023591573975 && 1) ? (arr_0 [i_0] [1]) : (((1 && (arr_2 [i_0] [2] [i_0]))))))));
                var_18 *= var_14;
            }
        }
    }
    #pragma endscop
}
