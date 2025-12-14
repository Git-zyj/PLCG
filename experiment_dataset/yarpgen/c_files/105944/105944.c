/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_8 ? (0 | 4305813265707928621) : var_6)) ^ ((~(min(-4305813265707928621, var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (((((var_12 - ((4494069241160334057 ? 27028 : var_13))))) & (((((((arr_6 [5] [i_1] [i_1]) <= 1)))) & (max(-4305813265707928619, 17811702396084843704))))));
                    arr_7 [i_0] [i_0] [i_0] = (arr_1 [i_2]);
                    var_20 ^= (((((((-5168215646006911159 + (arr_1 [8])))) ? var_0 : 1)) % ((-((-(arr_1 [i_1 + 2])))))));
                }
            }
        }
    }
    #pragma endscop
}
