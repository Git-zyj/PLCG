/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (+-3024364892592898224);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [16] [i_0] [i_0] = (!((((~(arr_0 [i_0]))))));
                var_12 = ((~(arr_3 [i_0] [i_1])));
                var_13 ^= ((!(--3531751273667351016)));
                arr_5 [i_0] [i_0] [i_0 - 1] = ((~((~(~-3024364892592898224)))));
            }
        }
    }
    #pragma endscop
}
