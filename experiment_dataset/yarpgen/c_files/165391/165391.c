/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = (11161699889926850668 + ((~(min(-111, 11161699889926850668)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = 7285044183782700953;
                arr_7 [i_0] = (((!(((var_3 & (arr_5 [i_0] [i_1])))))));
                arr_8 [i_0] [i_0] [i_0] = (!(((arr_5 [i_0] [i_1]) == ((11161699889926850657 ? var_15 : -1903431340)))));
            }
        }
    }
    var_18 = 268435440;
    #pragma endscop
}
