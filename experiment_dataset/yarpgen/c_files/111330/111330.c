/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (165 ? 4294967294 : var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((((-(arr_5 [i_0 + 1])))) ? ((((19 / 4294967289) ? (min(4294967273, 1)) : 42))) : ((0 ? 1 : 10)));
                    var_21 &= 90;
                    arr_10 [i_0 + 1] [1] [i_1] [i_0] = ((1 ? (((((arr_4 [i_0]) > 71)))) : ((0 ? (arr_0 [i_0] [i_0 + 1]) : (arr_4 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
