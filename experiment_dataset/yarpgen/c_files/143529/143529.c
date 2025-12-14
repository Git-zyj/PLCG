/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min((!29698), var_1))) ? (((((1 % -29699) >= ((-823083671 ? -29702 : var_2)))))) : ((17956183506539038143 ? ((32434 ? 17956183506539038143 : 1)) : 18477))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min(3889, (min((arr_0 [i_0]), 44143))));
                var_11 = (((((arr_2 [i_1]) + (1 || 44143)))) % (max((arr_0 [i_0]), (min((arr_0 [i_0]), (arr_3 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
