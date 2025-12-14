/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min((~268427264), (~7340032)))) ? ((120 ? ((7340035 ? var_3 : 4095)) : var_7)) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((arr_4 [i_0] [i_1] [i_1]) ? ((((arr_4 [i_0 + 2] [i_1] [i_0 - 1]) ? 107 : (arr_4 [i_0] [i_1] [i_0 - 1])))) : (((arr_0 [i_0] [i_0]) ? (max(0, var_8)) : 0))));
                var_11 = (max(var_11, (((~(((-(arr_1 [i_0])))))))));
                var_12 = (((~(arr_1 [i_0 + 1]))));
            }
        }
    }
    var_13 -= var_5;
    #pragma endscop
}
