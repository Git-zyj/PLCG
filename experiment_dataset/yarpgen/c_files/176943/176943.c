/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 *= -var_2;
                var_15 = ((-(arr_0 [8])));
                var_16 = (((arr_2 [i_0 + 1]) ? (arr_1 [i_1]) : (arr_0 [4])));
            }
        }
    }
    var_17 += var_8;
    var_18 ^= -7030937187053127294;
    var_19 |= var_4;
    #pragma endscop
}
