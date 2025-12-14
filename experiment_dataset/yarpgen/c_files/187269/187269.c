/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((!(arr_1 [i_1])));
                arr_5 [i_0 - 3] = (!((max((arr_1 [i_0]), (((!(arr_1 [i_0]))))))));
                var_16 = min((((+(((arr_1 [i_0]) * (arr_2 [i_0 - 3] [i_0 - 3])))))), ((~(max(var_13, (arr_2 [i_0 + 3] [i_0 + 3]))))));
            }
        }
    }
    #pragma endscop
}
