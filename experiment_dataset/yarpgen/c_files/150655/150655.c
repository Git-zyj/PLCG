/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min(var_13, var_1)), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (arr_4 [i_0] [i_1] [i_1]);
                var_20 = (arr_4 [i_1] [i_1] [i_0]);
                arr_5 [i_0] = (((max((511 | 2901707719617759259), (arr_4 [i_0] [i_0] [i_0]))) >> (((arr_4 [i_0] [i_0] [i_1]) + 4943))));
            }
        }
    }
    var_21 += (min((18446744073709551116 << var_3), var_14));
    #pragma endscop
}
