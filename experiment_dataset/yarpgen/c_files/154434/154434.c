/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((((((((0 ? 1 : var_8))) ? (arr_0 [i_0 - 2]) : -1))) ? (((~var_10) ? var_4 : (~1))) : ((-(arr_2 [i_0 - 2])))));
                var_12 -= (((((1 ? (arr_2 [i_0 - 2]) : 985279654))) ? ((-2742302866845910175 ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 1]))) : ((~(arr_2 [i_0 - 2])))));
            }
        }
    }
    var_13 ^= var_8;
    #pragma endscop
}
