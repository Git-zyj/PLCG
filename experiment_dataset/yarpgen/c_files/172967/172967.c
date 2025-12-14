/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_14 + var_12);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((((arr_1 [20]) ? 4294967295 : (arr_1 [20])))) + 4030528425532360655)))));
                    arr_7 [i_0] [i_0] = (((((var_6 ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_1 + 3] [i_0])))) ? (((((-1 ? 2865267889 : var_8))) ? var_14 : ((var_0 ? 162 : var_13)))) : 16384));
                }
            }
        }
    }
    var_21 *= var_0;
    #pragma endscop
}
