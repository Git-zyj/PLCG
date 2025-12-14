/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((var_15 ? 1950849542 : ((var_14 ? (1 ^ var_5) : (~2344117753))))))));
                arr_6 [i_0] [i_0] [i_0] = -1;
                arr_7 [i_1] [i_1] = (((((var_15 << (-167610172 + 167610179)))) + (max((max(var_18, var_12)), (arr_0 [i_0])))));
            }
        }
    }
    var_21 -= var_11;
    #pragma endscop
}
