/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((41471 ? ((-56 ? var_3 : var_0)) : 6135935514313753837));
    var_11 ^= var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((63 ? 55783 : 55781));
                var_13 *= ((~((4575657221408423936 ? 167619783 : (arr_2 [i_0] [8])))));
                arr_5 [4] [i_1] [i_0] = (arr_0 [i_1 + 2]);
            }
        }
    }
    #pragma endscop
}
