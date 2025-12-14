/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(245, 26283));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((+((3 ? (arr_1 [i_1 - 3]) : 3504530907)))) >= ((((arr_4 [i_0] [i_1 + 2]) ? (arr_4 [4] [i_1 - 2]) : var_5)))));
                var_16 = (min(var_16, ((max(3272154128, (arr_3 [i_0]))))));
                var_17 = (max(4294967281, -8212148894631963675));
            }
        }
    }
    var_18 = ((!(var_12 | var_6)));
    var_19 = var_12;
    var_20 += ((var_5 ? -var_4 : -var_12));
    #pragma endscop
}
