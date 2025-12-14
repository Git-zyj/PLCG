/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((max((((!(arr_2 [i_1])))), 2566240882)));
                var_12 = ((-(max(((~(arr_1 [i_0] [i_0]))), ((((arr_2 [i_0]) < (arr_1 [i_1] [i_1]))))))));
            }
        }
    }
    var_13 = (max((((!(var_8 / 2566240882)))), var_7));
    #pragma endscop
}
