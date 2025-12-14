/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = 65535;
                var_16 = (min(((((((941801253 ? 3353166042 : 255))) ? (max(46, var_11)) : ((((arr_0 [i_0] [i_1]) * var_14)))))), (max((arr_2 [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
