/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((135 > (var_3 + var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 ^= (max(((-(arr_3 [i_0] [i_1] [i_2]))), (arr_0 [i_0])));
                    var_14 = (min(var_14, ((min(((((max(144115188075855872, (arr_3 [i_0] [i_1] [i_2])))) ? -var_0 : (arr_0 [i_0]))), var_1)))));
                    var_15 = (max(var_15, (((((7258 && ((max(1, 90))))) ? (1510100592 * 18302628885633695728) : 224)))));
                }
            }
        }
    }
    #pragma endscop
}
