/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [10] &= 9;
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    var_13 = 1;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            {
                arr_9 [14] [i_2] = ((14813506997089956638 << (156 - 143)));
                arr_10 [i_2] [i_2 + 2] [i_2] = 18446744073709551609;
                arr_11 [i_2] [18] = 3687472210553599662;
            }
        }
    }
    #pragma endscop
}
