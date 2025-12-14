/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((((max(var_1, var_14))) | ((max(var_1, var_9))))))));
    var_21 = (max(var_21, (((var_3 ? var_14 : ((((max(var_11, var_11)) < (var_6 > var_11)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (((4288080166 >> ((((-((1155845069 ? 4284883729946554116 : 2698611334)))) + 4284883729946554124)))))));
                var_23 = ((!((!((!(arr_1 [i_0 + 1] [i_0 + 1])))))));
            }
        }
    }
    #pragma endscop
}
