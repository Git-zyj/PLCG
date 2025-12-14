/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = ((var_2 >> (1925555394 - 1925555374)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [0] [i_1] = (((arr_2 [i_0] [i_1 - 3]) + ((((arr_1 [i_0 + 1] [i_0 + 1]) != (arr_4 [8]))))));
                arr_7 [i_0 + 1] [i_1] = ((((max((arr_5 [i_0] [i_1] [i_0 + 1]), 3)))) ? ((((arr_3 [i_0 + 2]) >= -10065))) : ((128 >> (306777445 - 306777444))));
                var_12 = (min(var_12, ((min(((((arr_1 [i_0] [i_0 - 1]) > (((arr_2 [i_0] [i_1]) ? var_3 : (arr_5 [i_0] [i_0] [i_0])))))), var_0)))));
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
