/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 347039814;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0 + 1] [5] [i_2] = (~40438);
                    var_20 = (max((((arr_0 [i_0 + 3] [i_1 - 3]) << (arr_1 [i_1 - 4] [i_0 + 1]))), ((52559 ? (arr_0 [i_0 + 1] [i_1 - 1]) : 8614956798859645470))));
                }
            }
        }
    }
    var_21 = ((0 ? 347039826 : var_10));
    #pragma endscop
}
