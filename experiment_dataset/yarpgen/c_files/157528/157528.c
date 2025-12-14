/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_2] = (((((arr_2 [i_0 - 1]) != (arr_2 [i_0 - 1]))) ? (max(-9254, -6605085565861084001)) : (arr_2 [i_0 + 1])));
                    var_15 = var_2;
                    var_16 ^= ((~(1 ^ var_6)));
                    var_17 = (((((arr_5 [i_0]) | (arr_5 [i_0]))) ^ 1));
                    var_18 &= var_0;
                }
            }
        }
    }
    var_19 = ((var_12 ? var_9 : (((min(4122838453, var_6)) / var_7))));
    #pragma endscop
}
