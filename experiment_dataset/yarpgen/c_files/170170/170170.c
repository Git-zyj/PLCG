/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(5479084338760658676, (((5559 ? 0 : 250))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [4] = (((((((arr_1 [i_0]) ? var_7 : 5285)))) | ((max((arr_0 [i_0]), (arr_0 [i_1]))))));
                var_17 = ((-5286 ? (var_15 && 0) : (arr_1 [i_1])));
                var_18 |= ((((((((arr_0 [i_1]) ? (arr_2 [i_0] [7] [7]) : (arr_1 [i_0])))) ? -1708595944 : var_1)) != ((68 ? ((((arr_3 [i_1] [i_0]) ^ -2457))) : (max(250, 0))))));
            }
        }
    }
    #pragma endscop
}
