/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [4] [i_0] &= ((((~(arr_4 [i_0] [i_0])))));
                arr_6 [6] [i_0] [i_0] = (((arr_2 [i_1] [i_0]) ^ (~-943505408860846733)));
                var_12 = (min(var_12, ((((min(((((arr_0 [8]) ? 63645 : 120))), (((arr_1 [i_1]) ? (arr_3 [i_1]) : (arr_1 [i_1]))))) | ((((120 || -1121300481) & -1859856071))))))));
                var_13 -= 255;
            }
        }
    }
    var_14 = 3648807936657346809;
    #pragma endscop
}
