/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(var_6, ((((-2147483647 - 1) ? 7 : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = (arr_4 [i_1]);
                    arr_8 [i_0] [i_0] [i_1] = -19;
                }
            }
        }
    }
    var_15 = (~13255);
    var_16 = ((((!(((-906301110 ? var_13 : var_8))))) ? ((((((65535 ? var_0 : 0))) && (var_6 || var_13)))) : (!var_3)));
    #pragma endscop
}
