/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 ^= 87;
                var_11 = (max(var_11, ((((((-648543664777812417 ? (arr_0 [0]) : 215082235))) ? (((max(1, (max(var_7, 1)))))) : (max((arr_1 [i_1] [2]), (arr_1 [i_0] [1]))))))));
            }
        }
    }
    var_12 = var_6;
    #pragma endscop
}
