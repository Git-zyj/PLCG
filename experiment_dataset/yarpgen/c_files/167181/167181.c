/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((arr_3 [i_1]) ? (arr_3 [i_0]) : var_0)) - ((max((arr_3 [i_0]), (arr_3 [i_0]))))));
                arr_7 [i_0] = (max(var_8, 901393354));
                var_14 += 63754638;
            }
        }
    }
    var_15 = ((!((366652155 == (min(60252, var_13))))));
    var_16 = ((var_6 ? (max(2512, -5772859533983383644)) : (((((3761541242 * 18446744073709551615) >= (49142 - 44255)))))));
    var_17 = var_3;
    #pragma endscop
}
