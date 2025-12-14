/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 ^= (var_8 || var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((min((arr_3 [i_0]), 9638))) || ((((arr_3 [i_1]) ? 4294967284 : (arr_2 [i_0]))))));
                var_13 = (max(var_13, (((111 ? 1 : 0)))));
            }
        }
    }
    #pragma endscop
}
