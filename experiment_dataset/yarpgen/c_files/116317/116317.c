/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (((((0 == 8128) <= ((1 ? -8129 : var_6)))) || var_2));
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] = (((((((8128 + (arr_1 [i_1]))) ^ var_2))) ? ((~(arr_0 [i_0 + 1] [i_1]))) : ((((-8108 && (arr_2 [i_0])))))));
                arr_7 [i_0 - 2] [i_0 - 2] = -8128;
            }
        }
    }
    var_15 ^= -3;
    #pragma endscop
}
