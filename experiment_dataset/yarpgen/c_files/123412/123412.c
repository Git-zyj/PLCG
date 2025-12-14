/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [1] [i_0] [i_0] = (max((arr_1 [i_1] [i_0]), ((((arr_4 [i_0] [i_0 + 1] [i_1 - 1]) ? (arr_4 [i_0] [i_0 + 4] [i_1 + 2]) : (arr_4 [i_0] [i_0 + 1] [i_1 + 2]))))));
                arr_7 [i_0] [i_0] = 12296119874749834719;
            }
        }
    }
    var_20 = ((((max(-22434, var_17))) ? 1 : var_7));
    #pragma endscop
}
