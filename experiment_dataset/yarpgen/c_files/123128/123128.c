/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = 26530;
                arr_5 [i_0] [i_0] = 72;
            }
        }
    }
    var_13 = (max(var_8, (5941 != -1)));
    var_14 ^= (96 + -42);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_15 = ((+((((arr_9 [i_2]) == (arr_9 [i_2]))))));
                var_16 = -23743;
                arr_11 [i_2] = (max(-5964, 10336));
                arr_12 [i_2] [i_2] [8] = (((((var_2 ? -8 : var_4) / ((min(-8, 191)))))));
                var_17 += 40;
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
