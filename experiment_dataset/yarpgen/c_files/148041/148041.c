/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (((((3760333817 && (arr_5 [i_1] [i_1]))))) & (((arr_5 [i_1] [i_1]) & (arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                    var_20 = 2664741527;
                }
            }
        }
    }
    var_21 = (((((var_7 ? var_1 : 1597400409))) != ((1741639264 ? 534633478 : 666098205))));
    #pragma endscop
}
