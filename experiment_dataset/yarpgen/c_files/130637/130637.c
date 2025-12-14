/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 -= 102;
                var_12 = ((((max(80, (arr_4 [i_0 + 1])))) ? (max((arr_1 [i_0 + 2]), 2057005244)) : (min(2057005238, (arr_2 [i_0 + 3] [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
